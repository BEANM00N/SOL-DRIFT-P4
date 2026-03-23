#include "PickupManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/SceneComponent.h"

APickupManager::APickupManager()
{
    PrimaryActorTick.bCanEverTick = true;

    // We now use a basic Scene Component as the root
    RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = RootComp;
}

void APickupManager::BeginPlay()
{
    Super::BeginPlay();

    // Dynamically create an ISMC for every mesh in array
    for (UStaticMesh* Mesh : PickupMeshes)
    {
        if (!Mesh) continue;

        UInstancedStaticMeshComponent* NewISMC = NewObject<UInstancedStaticMeshComponent>(this);
        NewISMC->SetStaticMesh(Mesh);
        NewISMC->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        NewISMC->SetGenerateOverlapEvents(false);
        NewISMC->SetupAttachment(RootComponent);
        NewISMC->RegisterComponent();

        InstancedMeshes.Add(NewISMC);
    }
}

void APickupManager::SpawnPickups(FVector SpawnLocation, int32 Count)
{
    // Don't spawn if no meshes were added.
    if (InstancedMeshes.IsEmpty()) return;

    for (int32 i = 0; i < Count; ++i)
    {
       FMagnetPickup NewPickup;
       NewPickup.Location = SpawnLocation;
       
       FVector RandomDir = FMath::VRand();
       RandomDir.Z = FMath::Abs(RandomDir.Z) + 0.3f; 
       RandomDir.Normalize();

       float Speed = FMath::RandRange(EjectMinSpeed, EjectMaxSpeed);
       NewPickup.Velocity = RandomDir * Speed;
       
       NewPickup.Rotation = FRotator::ZeroRotator;
       NewPickup.SpinRate = FRotator(FMath::RandRange(-200.f, 200.f), FMath::RandRange(-200.f, 200.f), FMath::RandRange(-200.f, 200.f));

       NewPickup.State = EPickupState::Ejecting;
       NewPickup.StateTimer = FMath::RandRange(EjectDuration * 0.8f, EjectDuration * 1.2f); 
       NewPickup.LifeRemaining = PickupLifeSpan;

       // RANDOMLY select one of the meshes for this specific pickup!
       NewPickup.MeshIndex = FMath::RandRange(0, InstancedMeshes.Num() - 1);

       ActivePickups.Add(NewPickup);
    }
}

void APickupManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (ActivePickups.IsEmpty()) return;

    if (!TargetActor)
    {
       TargetActor = UGameplayStatics::GetPlayerPawn(this, 0);
       if (!TargetActor) return;
    }

    FVector TargetLoc = TargetActor->GetActorLocation();
    float MagRadiusSq = FMath::Square(MagnetRadius);
    float ColRadiusSq = FMath::Square(CollectionRadius);

    int32 CollectedThisFrame = 0;

    // 2D array to hold transforms for each different mesh
    TArray<TArray<FTransform>> TransformsPerMesh;
    TransformsPerMesh.SetNum(InstancedMeshes.Num());

    // Iterate in reverse
    for (int32 i = ActivePickups.Num() - 1; i >= 0; --i)
    {
       FMagnetPickup& P = ActivePickups[i];

       P.LifeRemaining -= DeltaTime;
       if (P.LifeRemaining <= 0.0f)
       {
           ActivePickups.RemoveAtSwap(i);
           continue; 
       }

       if (P.State == EPickupState::Ejecting)
       {
          P.Velocity -= P.Velocity * FloatingDrag * DeltaTime;
          P.StateTimer -= DeltaTime;

          if (P.StateTimer <= 0.f)
          {
             P.State = EPickupState::Floating;
          }
       }
       else if (P.State == EPickupState::Floating)
       {
          P.Velocity -= P.Velocity * FloatingDrag * DeltaTime;

          if (FVector::DistSquared(P.Location, TargetLoc) <= MagRadiusSq)
          {
             P.State = EPickupState::Magnetized;
          }
       }
       else if (P.State == EPickupState::Magnetized)
       {
          FVector DirectionToTarget = (TargetLoc - P.Location).GetSafeNormal();
          FVector DesiredVelocity = DirectionToTarget * MaxMagnetSpeed;
          
          P.Velocity = FMath::VInterpTo(P.Velocity, DesiredVelocity, DeltaTime, MagnetAcceleration * 0.01f);

          float DistToTargetSq = FVector::DistSquared(P.Location, TargetLoc);
          float MoveStepSq = (P.Velocity * DeltaTime).SizeSquared();

          if (DistToTargetSq <= ColRadiusSq || DistToTargetSq <= MoveStepSq)
          {
             CollectedThisFrame++;
             ActivePickups.RemoveAtSwap(i);
             continue; 
          }
       }

       P.Location += P.Velocity * DeltaTime;
       P.Rotation += P.SpinRate * DeltaTime;

       FVector CurrentScale = PickupScale; 
       if (P.LifeRemaining <= FlashStartDuration)
       {
           float FlashSpeed = FMath::GetMappedRangeValueClamped(
               FVector2D(FlashStartDuration, 0.0f), 
               FVector2D(30.0f, 60.0f), 
               P.LifeRemaining
           );
          
           if (FMath::Sin(P.LifeRemaining * FlashSpeed) < 0.0f)
           {
               CurrentScale = FVector::ZeroVector; 
           }
       }

       // Add the transform to the correct ISMC bucket based on the random mesh index
       TransformsPerMesh[P.MeshIndex].Add(FTransform(P.Rotation, P.Location, CurrentScale));   
    }
	
    // Sync visual instances without clearing (reduces the weird flicker when just a few pieces were picked up out of the bunch.
    
    for (int32 i = 0; i < InstancedMeshes.Num(); ++i)
    {
        UInstancedStaticMeshComponent* CurrentISMC = InstancedMeshes[i];
        TArray<FTransform>& Transforms = TransformsPerMesh[i];

        int32 CurrentCount = CurrentISMC->GetInstanceCount();
        int32 NeededCount = Transforms.Num();

        // 1. Grow the ISMC array if we spawned new items
        while (CurrentCount < NeededCount)
        {
            CurrentISMC->AddInstance(FTransform::Identity);
            CurrentCount++;
        }

        // 2. Shrink the ISMC array if items were collected (This prevents the full-refresh flicker)
        while (CurrentCount > NeededCount)
        {
            CurrentISMC->RemoveInstance(CurrentCount - 1);
            CurrentCount--;
        }

        // 3. Fast-update all remaining transforms
        if (NeededCount > 0)
        {
            CurrentISMC->BatchUpdateInstancesTransforms(0, Transforms, true, true, true);
        }
    }

    if (CollectedThisFrame > 0)
    {
       OnPickupsCollected.Broadcast(CollectedThisFrame);
    }
}