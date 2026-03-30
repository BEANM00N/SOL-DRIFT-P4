#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Tickable.h"
#include "StrafeAttackAsyncAction.generated.h"

// Exposing the the output pins.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStrafeUpdate, FRotator, TurretRotation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStrafeCompleted);

// Create a class that inherits from the Async Base and Tickable Object. This is really weird.
// It needs to be an Async function otherwise it can't fire multiple exec pins. 
UCLASS()
class SOLDRIFT_API UStrafeAttackAsyncAction : public UBlueprintAsyncActionBase, public FTickableGameObject
{
	GENERATED_BODY()
	
// These are the actual outputs on the Blueprint node, built off the Blueprint Type "FOnStrafeUpdate"
public:
	UPROPERTY(BlueprintAssignable)
	FOnStrafeUpdate OnTick;

	UPROPERTY(BlueprintAssignable)
	FOnStrafeUpdate OnFire;

	UPROPERTY(BlueprintAssignable)
	FOnStrafeCompleted OnCompleted;

	// This is what exposes it as a node in BP. Need to establish the input pins here too:

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "Combat|Sentry")
	static UStrafeAttackAsyncAction* StrafeTarget(UObject*WorldContextObject, FVector TurretLocation, FVector TargetLocation, float StrafeWidth, float StrafeTime, float ShotsPerSecond);

	// We inherit EPIC's existing function through FTickableGameObject, but we actually want to override those functions
	// which we can then populate in the cpp file.

	virtual void Activate() override;
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override {return TStatId(); }
	virtual bool IsTickable() const override {return bIsActive; }

private:
	// Memeory Variables
	UObject* WorldContext;
	FVector TurretLoc;
	FVector TargetLoc;
	float Width;
	float TotalTime;
	float FireInterval;
	float ElapsedTime;
	float TimeSinceLastShot;
	bool bIsActive = false;
	FVector StrafeStartWorld;
	FVector StrafeEndWorld;
	
};
