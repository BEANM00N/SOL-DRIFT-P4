#include "EnemyPathFollower.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/KismetMathLibrary.h"
#include "TimerManager.h"
#include "CollisionQueryParams.h"
#include "Engine/EngineTypes.h"
#include "WorldCollision.h"

UEnemyPathFollower::UEnemyPathFollower()
{
	// Enable ticking so we can apply steering input every frame
	PrimaryComponentTick.bCanEverTick = true;
	CurrentTargetIndex = 0;
}

void UEnemyPathFollower::BeginPlay()
{
	Super::BeginPlay();

	// Automatically grab the movement component from the owning enemy
	if (AActor* Owner = GetOwner())
	{
		MovementComponent = Owner->FindComponentByClass<UFloatingPawnMovement>();
	}
}

void UEnemyPathFollower::StartFollowingPath(const TArray<FCPathNode>& NewPath)
{
	PathBuffer = NewPath;
	CurrentTargetIndex = 0;

	// Start the async smoothing timer (Loops every 0.2 seconds by default)
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(SmoothingTimerHandle, this, &UEnemyPathFollower::RunSmoothingCheck, SmoothingInterval, true);
	}
}

void UEnemyPathFollower::StopFollowing()
{
	PathBuffer.Empty();
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(SmoothingTimerHandle);
	}
}

// ===================================================================
// STEERING: Runs every frame on the Game Thread (Very cheap)
// ===================================================================
void UEnemyPathFollower::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (PathBuffer.IsEmpty() || !MovementComponent || CurrentTargetIndex >= PathBuffer.Num())
	{
		return;
	}

	AActor* Owner = GetOwner();
	FVector CurrentLocation = Owner->GetActorLocation();
	FVector TargetLocation = PathBuffer[CurrentTargetIndex].WorldLocation;

	// 1. Are we close enough to the target node? (FMath::Square avoids expensive square root math)
	if (FVector::DistSquared(CurrentLocation, TargetLocation) <= FMath::Square(NodeReachedTolerance))
	{
		CurrentTargetIndex++;
		
		if (CurrentTargetIndex >= PathBuffer.Num())
		{
			StopFollowing();
			OnPathCompleted.Broadcast(); // <-- Add this line!
			return;
		}
		TargetLocation = PathBuffer[CurrentTargetIndex].WorldLocation;
	}

	// 2. Steer smoothly towards the current target node
	FVector Direction = (TargetLocation - CurrentLocation).GetSafeNormal();
	MovementComponent->AddInputVector(Direction);
}

// ===================================================================
// SMOOTHING: Runs periodically (e.g. 5 times a second)
// ===================================================================
void UEnemyPathFollower::RunSmoothingCheck()
{
	if (PathBuffer.IsEmpty() || CurrentTargetIndex >= PathBuffer.Num() - 1 || !MovementComponent)
	{
		return;
	}

	AActor* Owner = GetOwner();
	UWorld* World = GetWorld();
	if (!Owner || !World) return;

	FVector CurrentLocation = Owner->GetActorLocation();
	FVector VelocityNorm = MovementComponent->Velocity.GetSafeNormal(0.0001f);

	int32 MaxSearchIndex = FMath::Min(CurrentTargetIndex + SmoothingPasses + 1, PathBuffer.Num() - 1);
	int32 BestCandidateIndex = CurrentTargetIndex;
	double BestDot = -2.0; 

	// Find the furthest optimal node based on velocity alignment
	for (int32 i = CurrentTargetIndex + 1; i <= MaxSearchIndex; ++i)
	{
		FVector DirToNode = (PathBuffer[i].WorldLocation - CurrentLocation).GetSafeNormal(0.0001f);
		double Dot = VelocityNorm.IsNearlyZero() ? 1.0 : FVector::DotProduct(VelocityNorm, DirToNode);

		if (Dot >= BestDot)
		{
			BestCandidateIndex = i;
			BestDot = Dot;
		}
	}

	// If a better node was found ahead of us, fire an ASYNC trace
	if (BestCandidateIndex > CurrentTargetIndex)
	{
		FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(PathSmoothing), false, Owner);

		// Bind our callback so we are notified when the background thread finishes the trace
		FTraceDelegate TraceCallback;
		TraceCallback.BindUObject(this, &UEnemyPathFollower::OnTraceCompleted, BestCandidateIndex);

		World->AsyncLineTraceByChannel( // <-- Removed "Single" here
			EAsyncTraceType::Single,
			CurrentLocation,
			PathBuffer[BestCandidateIndex].WorldLocation,
			ECC_Visibility,
			TraceParams,
			FCollisionResponseParams::DefaultResponseParam, // <-- Added "Param" here
			&TraceCallback
		);
	}
}

// ===================================================================
// ASYNC CALLBACK: Fires when the background physics thread finishes
// ===================================================================
void UEnemyPathFollower::OnTraceCompleted(const FTraceHandle& Handle, FTraceDatum& Data, int32 NodeIndex)
{
	bool bHitWall = false;

	// Check if the trace actually hit anything before reading the array
	if (Data.OutHits.Num() > 0)
	{
		bHitWall = Data.OutHits[0].bBlockingHit;
	}

	// If the array was empty, or it wasn't a blocking hit, we have line of sight!
	if (!bHitWall)
	{
		// Update our target index (ensuring we don't accidentally step backwards)
		if (NodeIndex > CurrentTargetIndex)
		{
			CurrentTargetIndex = NodeIndex;
		}
	}
}