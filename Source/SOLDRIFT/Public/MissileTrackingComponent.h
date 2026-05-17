#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MissileTrackingComponent.generated.h"

// 1. Declare the Delegate (Event) Signature
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTerminalFlightTimeExpired);

UENUM(BlueprintType)
enum class EMissileState : uint8
{
	Coasting, // Flying straight, no tracking
	Tracking, // Actively steering towards target
	Terminal  // Too close! Tracking disabled, flying blind until detonation
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SOLDRIFT_API UMissileTrackingComponent : public UActorComponent
{
	GENERATED_BODY()

public: 
	UMissileTrackingComponent();

protected:
	virtual void BeginPlay() override;

public: 
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Call this when spawning the missile to give it a target */
	UFUNCTION(BlueprintCallable, Category = "Missile|Targeting")
	void SetTarget(AActor* NewTarget);

	// 2. Expose the Event to Blueprints
	UPROPERTY(BlueprintAssignable, Category = "Missile|Events")
	FOnTerminalFlightTimeExpired OnFlightTimeExpired;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Missile|Targeting")
	AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Missile|Movement")
	float CoastSpeed = 1500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Missile|Movement")
	float TrackingSpeed = 3000.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Missile|Movement")
	float TurnRate = 5.0f; // Higher = tighter turns

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Missile|Phases")
	float ActivationDelay = 0.5f; // Coast for this many seconds before tracking

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Missile|Phases")
	float TerminalRadius = 600.f; // Distance from target to stop tracking

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Missile|Phases")
	float TerminalFlightTime = 1.5f; // How long to fly blind before exploding

private:
	EMissileState CurrentState;
	float StateTimer;
	FVector CurrentVelocity;
};