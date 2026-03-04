#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPathNode.h" // From your CPathfinding plugin
#include "Engine/World.h"
#include "WorldCollision.h" // <-- Replaced AsyncTrace.h with this
#include "CollisionQueryParams.h"     // Fixes FCollisionQueryParams, SCENE_QUERY_STAT, and FCollisionResponseParams
#include "Engine/EngineTypes.h"       // Fixes ECC_Visibility
#include "EnemyPathFollower.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPathFollowingComplete);

class UFloatingPawnMovement;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOLDRIFT_API UEnemyPathFollower : public UActorComponent
{
	GENERATED_BODY()

public:	
	UEnemyPathFollower();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Call this from Blueprint when the CPath Async generation succeeds */
	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
	void StartFollowingPath(const TArray<FCPathNode>& NewPath);

	/** Call this to stop moving immediately */
	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
	void StopFollowing();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pathfinding")
	float SmoothingInterval = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pathfinding")
	int32 SmoothingPasses = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pathfinding")
	float NodeReachedTolerance = 100.0f;
	
	UPROPERTY(BlueprintAssignable, Category = "Pathfinding")
	FOnPathFollowingComplete OnPathCompleted;

private:
	// The function called by the timer to check visibility
	void RunSmoothingCheck();
	
	// The callback that fires when the background thread finishes the trace
	void OnTraceCompleted(const FTraceHandle& Handle, FTraceDatum& Data, int32 NodeIndex);

	TArray<FCPathNode> PathBuffer;
	int32 CurrentTargetIndex;
	FTimerHandle SmoothingTimerHandle;

	UPROPERTY()
	UFloatingPawnMovement* MovementComponent;
};