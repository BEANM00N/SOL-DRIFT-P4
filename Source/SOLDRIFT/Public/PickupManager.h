#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "PickupManager.generated.h"

UENUM(BlueprintType)
enum class EPickupState : uint8
{
	Ejecting,   
	Floating,   
	Magnetized  
};

struct FMagnetPickup
{
	FVector Location;
	FVector Velocity;
	FRotator Rotation;
	FRotator SpinRate;
	float StateTimer;
	float LifeRemaining;
	EPickupState State;
	int32 MeshIndex; // <--- Tracks which mesh this specific item uses
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickupsCollected, int32, AmountCollected);

UCLASS()
class SOLDRIFT_API APickupManager : public AActor
{
	GENERATED_BODY()
	
public:	
	APickupManager();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* RootComp;

	/** Add your different meshes (Bolts, Gears, Scrap) here! */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Visuals")
	TArray<UStaticMesh*> PickupMeshes;

	/** Internal array of ISMCs dynamically created for each mesh */
	UPROPERTY()
	TArray<UInstancedStaticMeshComponent*> InstancedMeshes;

	UFUNCTION(BlueprintCallable, Category = "Pickups")
	void SpawnPickups(FVector SpawnLocation, int32 Count);

	UPROPERTY(BlueprintAssignable, Category = "Pickups")
	FOnPickupsCollected OnPickupsCollected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Target")
	AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Ejection (Explosion)")
	float EjectMinSpeed = 400.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Ejection (Explosion)")
	float EjectMaxSpeed = 900.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Ejection (Explosion)")
	float EjectDuration = 0.6f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Ejection (Explosion)")
	float FloatingDrag = 4.0f; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Magnetism")
	float MagnetRadius = 1200.f; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Magnetism")
	float MagnetAcceleration = 4000.f; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Magnetism")
	float MaxMagnetSpeed = 4500.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Magnetism")
	float CollectionRadius = 100.f; 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Visuals")
	FVector PickupScale = FVector(1.0f, 1.0f, 1.0f);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Lifespan")
	float PickupLifeSpan = 15.0f; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickups|Lifespan")
	float FlashStartDuration = 4.0f; 

private:
	TArray<FMagnetPickup> ActivePickups;
};