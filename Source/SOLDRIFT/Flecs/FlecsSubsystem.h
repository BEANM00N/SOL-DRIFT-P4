#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "NiagaraComponent.h"
#include "NiagaraDataInterfaceArrayFunctionLibrary.h"
#include "UObject/WeakObjectPtrTemplates.h" // Added for safe object references

THIRD_PARTY_INCLUDES_START
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

// ---------------------------------------------------------
// FLECS COMPONENTS
// ---------------------------------------------------------
struct Position { FVector Value; };
struct Velocity { FVector Value; };
struct RibbonID { int32 Value; };

// The expanded damage payload using safe Weak Pointers
struct DamagePayload { 
    float Amount; 
    TSubclassOf<UDamageType> DamageType;
    TWeakObjectPtr<AActor> Causer;
    TWeakObjectPtr<AController> Instigator;
};

// The new linger timer to keep visuals alive
struct LingerTimer { float TimeRemaining; };

// ---------------------------------------------------------
// FLECS TAGS
// ---------------------------------------------------------
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

// ---------------------------------------------------------
// SUBSYSTEM CLASS
// ---------------------------------------------------------
UCLASS()
class SOLDRIFT_API UFlecsSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    
    // Run ECS Math at the start of the frame
    void TickSimulation(UWorld* World, ELevelTick TickType, float DeltaTime);
    
    // Gather Niagara data at the end of the frame (0 latency)
    void UpdatePresentation(UWorld* World, ELevelTick TickType, float DeltaTime);

    // Expanded Spawn Function
    UFUNCTION(BlueprintCallable, Category = "FLECS|Projectiles")
    void SpawnFlecsProjectile(FVector SpawnLocation, FVector StartVelocity, float Damage, ETeamAffiliation Team, bool bPenetrates, bool bRicochets, TSubclassOf<UDamageType> DamageType, AActor* DamageCauser, AController* Instigator);

    UPROPERTY(BlueprintReadWrite, Category = "FLECS|Rendering")
    UNiagaraComponent* ProjectileNiagaraComponent;

private:
    flecs::world* EcsWorld = nullptr;
    FDelegateHandle TickDelegateHandle;
    FDelegateHandle PresentationDelegateHandle;

    flecs::query<const Position, const Velocity, const RibbonID>* RenderQuery = nullptr;

    UPROPERTY()
    TArray<FVector> NiagaraPositions;
    UPROPERTY()
    TArray<FQuat4f> NiagaraRotations;
    UPROPERTY()
    TArray<int32> NiagaraIDs;
    
    int32 CurrentRibbonID = 1;
};