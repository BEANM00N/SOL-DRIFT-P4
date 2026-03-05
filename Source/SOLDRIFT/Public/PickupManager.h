#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "PickupManager.generated.h"

UENUM(BlueprintType)
enum class EPickupState : uint8
{
	Ejecting,   // Exploding out of the enemy
	Floating,   // Zero-G drifting
	Magnetized  // Flying towards the player
};

// Internal data tracking each individual pickup
struct FMagnetPickup
{
	FVector Location;
	FVector Velocity;
	FRotator Rotation;
	FRotator SpinRate;
	float StateTimer;
	EPickupState State;
};

// Delegate to tell Blueprints "We collected X amount of items this frame"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickupsCollected, int32, AmountCollected);

UCLASS()
class SOLDRIFT_API APickupManager : public AActor
{
	GENERATED_BODY()
	
public:	
	APickupManager();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UInstancedStaticMeshComponent* ISMC;

	/** Call this from an Enemy's death event to explode items outwards */
	UFUNCTION(BlueprintCallable, Category = "Pickups")
	void SpawnPickups(FVector SpawnLocation, int32 Count);

	/** Fires whenever pickups reach the player */
	UPROPERTY(BlueprintAssignable, Category = "Pickups")
	FOnPickupsCollected OnPickupsCollected;

	/** The Actor the pickups should magnetize to (Usually the Player) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Target")
	AActor* TargetActor;

	// =========================================================
	// TWEAKABLE PARAMETERS
	// =========================================================

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Ejection (Explosion)")
	float EjectMinSpeed = 400.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Ejection (Explosion)")
	float EjectMaxSpeed = 900.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Ejection (Explosion)")
	float EjectDuration = 0.6f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Ejection (Explosion)")
	float FloatingDrag = 4.0f; // How fast they slow down in Zero-G

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Magnetism")
	float MagnetRadius = 1200.f; // How close player needs to be to trigger magnet
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Magnetism")
	float MagnetAcceleration = 4000.f; // How fast it ramps up speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Magnetism")
	float MaxMagnetSpeed = 4500.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Magnetism")
	float CollectionRadius = 100.f; // Distance to "consume" the item

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Visuals")
	FVector PickupScale = FVector(1.0f, 1.0f, 1.0f);

private:
	TArray<FMagnetPickup> ActivePickups;
	TArray<FTransform> InstanceTransforms; // Buffer for updating the ISMC
};