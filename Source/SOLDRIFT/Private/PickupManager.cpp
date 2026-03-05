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

		// STATE: EJECTING (Exploding out of enemy)
		if (P.State == EPickupState::Ejecting)
		{
			// Apply "Space Drag" so they slow down beautifully
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
		// STATE: MAGNETIZED (Seeking player)
		else if (P.State == EPickupState::Magnetized)
		{
			FVector DirectionToTarget = (TargetLoc - P.Location).GetSafeNormal();
			
			// The speed we WANT to be going (straight at the player at max speed)
			FVector DesiredVelocity = DirectionToTarget * MaxMagnetSpeed;
			
			// VInterpTo smoothly bends our current momentum into the desired direction.
			// (We multiply by 0.01f so your default 4000.0f acceleration value translates to a crisp turn-speed of 40.0)
			P.Velocity = FMath::VInterpTo(P.Velocity, DesiredVelocity, DeltaTime, MagnetAcceleration * 0.01f);

			// Did we hit the player? (Added a check to see if we will overshoot the player this frame)
			float DistToTargetSq = FVector::DistSquared(P.Location, TargetLoc);
			float MoveStepSq = (P.Velocity * DeltaTime).SizeSquared();

			if (DistToTargetSq <= ColRadiusSq || DistToTargetSq <= MoveStepSq)
			{
				CollectedThisFrame++;
				ActivePickups.RemoveAtSwap(i);
				continue; // Skip the rest of the loop for this item, it's dead
			}
		}

		// Apply final velocity to location
		P.Location += P.Velocity * DeltaTime;
		
		// Apply wild spinning
		P.Rotation += P.SpinRate * DeltaTime;

		// Add this item's transform to the visual buffer
		InstanceTransforms.Add(FTransform(P.Rotation, P.Location, PickupScale));	}

	// 1. Sync the Visuals to the Math!
	// If the counts don't match (meaning we just collected some), do a clean reset.
	// If the counts match, just do a fast transform update.
	if (InstanceTransforms.Num() != ISMC->GetInstanceCount())
	{
		ISMC->ClearInstances();
		ISMC->AddInstances(InstanceTransforms, false);
	}
	else
	{
		ISMC->BatchUpdateInstancesTransforms(0, InstanceTransforms, true, true, true);
	}

	// 2. Tell the game the player got the items!
	if (CollectedThisFrame > 0)
	{
		OnPickupsCollected.Broadcast(CollectedThisFrame);
	}
}