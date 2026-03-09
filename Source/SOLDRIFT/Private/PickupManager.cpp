#include "PickupManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

APickupManager::APickupManager()
{
    PrimaryActorTick.bCanEverTick = true;

    // Create the Instanced Mesh Component
    ISMC = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedMesh"));
    RootComponent = ISMC;
    
    // Turn off collision. We calculate distance mathematically, so collision just wastes CPU
    ISMC->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    ISMC->SetGenerateOverlapEvents(false);
}

void APickupManager::SpawnPickups(FVector SpawnLocation, int32 Count)
{
    for (int32 i = 0; i < Count; ++i)
    {
       FMagnetPickup NewPickup;
       NewPickup.Location = SpawnLocation;
       
       // Create a random explosion direction (biased slightly upwards)
       FVector RandomDir = FMath::VRand();
       RandomDir.Z = FMath::Abs(RandomDir.Z) + 0.3f; 
       RandomDir.Normalize();

       float Speed = FMath::RandRange(EjectMinSpeed, EjectMaxSpeed);
       NewPickup.Velocity = RandomDir * Speed;
       
       // Give it a random tumbling spin
       NewPickup.Rotation = FRotator::ZeroRotator;
       NewPickup.SpinRate = FRotator(FMath::RandRange(-200.f, 200.f), FMath::RandRange(-200.f, 200.f), FMath::RandRange(-200.f, 200.f));

       NewPickup.State = EPickupState::Ejecting;
       NewPickup.StateTimer = FMath::RandRange(EjectDuration * 0.8f, EjectDuration * 1.2f); // Add slight randomness to duration
       
       // Set its total lifespan
       NewPickup.LifeRemaining = PickupLifeSpan;

       ActivePickups.Add(NewPickup);
    }
}

void APickupManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (ActivePickups.IsEmpty())
    {
       return;
    }

    // Auto-find player if not set
    if (!TargetActor)
    {
       TargetActor = UGameplayStatics::GetPlayerPawn(this, 0);
       if (!TargetActor) return;
    }

    FVector TargetLoc = TargetActor->GetActorLocation();
    
    // Use Squared distances to avoid expensive Square Root math
    float MagRadiusSq = FMath::Square(MagnetRadius);
    float ColRadiusSq = FMath::Square(CollectionRadius);

    int32 CollectedThisFrame = 0;

    // Prepare the transform buffer for the Instanced Mesh
    InstanceTransforms.Reset();
    InstanceTransforms.Reserve(ActivePickups.Num());

    // Iterate BACKWARDS because we might remove elements from the array
    for (int32 i = ActivePickups.Num() - 1; i >= 0; --i)
    {
       FMagnetPickup& P = ActivePickups[i];

       // Kill the pickup if it runs out of time
       P.LifeRemaining -= DeltaTime;
       if (P.LifeRemaining <= 0.0f)
       {
           // Remove it without adding to CollectedThisFrame
           ActivePickups.RemoveAtSwap(i);
           continue; 
       }

       // STATE: EJECTING
       if (P.State == EPickupState::Ejecting)
       {
          // Drag
          P.Velocity -= P.Velocity * FloatingDrag * DeltaTime;
          P.StateTimer -= DeltaTime;

          if (P.StateTimer <= 0.f)
          {
             P.State = EPickupState::Floating;
          }
       }
       // STATE: FLOATING (Zero-G idle)
       else if (P.State == EPickupState::Floating)
       {
          // Continue to bring them to a soft halt
          P.Velocity -= P.Velocity * FloatingDrag * DeltaTime;

          // Check distance to player
          if (FVector::DistSquared(P.Location, TargetLoc) <= MagRadiusSq)
          {
             P.State = EPickupState::Magnetized;
          }
       }
       // Seek Player
       else if (P.State == EPickupState::Magnetized)
       {
          FVector DirectionToTarget = (TargetLoc - P.Location).GetSafeNormal();
          
          // The speed we WANT to be going (straight at the player at max speed)
          FVector DesiredVelocity = DirectionToTarget * MaxMagnetSpeed;
          
          // VInterpTo smoothly bends our current momentum into the desired direction.
          P.Velocity = FMath::VInterpTo(P.Velocity, DesiredVelocity, DeltaTime, MagnetAcceleration * 0.01f);

          // Did we hit the player?
          float DistToTargetSq = FVector::DistSquared(P.Location, TargetLoc);
          float MoveStepSq = (P.Velocity * DeltaTime).SizeSquared();

          if (DistToTargetSq <= ColRadiusSq || DistToTargetSq <= MoveStepSq)
          {
             CollectedThisFrame++;
             ActivePickups.RemoveAtSwap(i);
             continue; // Skip the rest of the loop for this item, it dead
          }
       }

       // Apply final velocity to location
       P.Location += P.Velocity * DeltaTime;
       
       // Apply spinning
       P.Rotation += P.SpinRate * DeltaTime;

       FVector CurrentScale = PickupScale; // Defaults to normal size
       
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

       // Add this item's transform to the visual buffer with the potentially flashing scale
       InstanceTransforms.Add(FTransform(P.Rotation, P.Location, CurrentScale));   
    }

    // Sync the Visuals to the Math.
    if (InstanceTransforms.Num() != ISMC->GetInstanceCount())
    {
       ISMC->ClearInstances();
       ISMC->AddInstances(InstanceTransforms, false);
    }
    else
    {
       ISMC->BatchUpdateInstancesTransforms(0, InstanceTransforms, true, true, true);
    }

    // Call Event Dispatcher that item was collected. Should be bound to the Player.
    if (CollectedThisFrame > 0)
    {
       OnPickupsCollected.Broadcast(CollectedThisFrame);
    }
}