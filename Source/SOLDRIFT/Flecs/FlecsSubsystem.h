#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NiagaraComponent.h"
#include "NiagaraDataInterfaceArrayFunctionLibrary.h"

THIRD_PARTY_INCLUDES_START

// This specifically tells the Windows compiler to ignore the "Unreachable Code" warning
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4702) 
#endif

#include "flecs.h"

#ifdef _MSC_VER
#pragma warning(pop)
#endif

THIRD_PARTY_INCLUDES_END

#include "FlecsSubsystem.generated.h"

// Components
struct Position { FVector Value; };
struct Velocity { FVector Value; };
struct DamagePayload { float Amount; };

// Tags
struct ProjectileTag {};
struct CanPenetrate {};
struct CanRicochet {};
struct HitEvent { FHitResult Hit; };

UENUM(BlueprintType)
enum class ETeamAffiliation : uint8
{
	Friendly,
	Enemy,
	Neutral
};
struct Affiliation { ETeamAffiliation Team; };

UCLASS()
class SOLDRIFT_API UFlecsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	
	// FIX: Updated signature to match Unreal's OnWorldTickStart
	void TickSimulation(UWorld* World, ELevelTick TickType, float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "FLECS|Projectiles")
	void SpawnFlecsProjectile(FVector SpawnLocation, FVector StartVelocity, float Damage, ETeamAffiliation Team, bool bPenetrates, bool bRicochets);

	UPROPERTY(BlueprintReadWrite, Category = "FLECS|Rendering")
	UNiagaraComponent* ProjectileNiagaraComponent;

private:
	flecs::world* EcsWorld = nullptr;
	FDelegateHandle TickDelegateHandle;

	UPROPERTY()
	TArray<FVector> NiagaraPositions;
	UPROPERTY()
	TArray<FQuat4f> NiagaraRotations;
	UPROPERTY()
	TArray<int32> NiagaraIDs;
};