#include "FlecsSubsystem.h"
#include "Kismet/GameplayStatics.h"

void UFlecsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    EcsWorld = new flecs::world();

    if (UWorld* World = GetWorld())
    {
       // Bind Physics to start of frame
       TickDelegateHandle = FWorldDelegates::OnWorldTickStart.AddUObject(this, &UFlecsSubsystem::TickSimulation);
       // Bind Rendering to end of frame (Post-Actor tick)
       PresentationDelegateHandle = FWorldDelegates::OnWorldPostActorTick.AddUObject(this, &UFlecsSubsystem::UpdatePresentation);
    }

    // ---------------------------------------------------------
    // SYSTEM 1: MOVEMENT
    // ---------------------------------------------------------
    EcsWorld->system<Position, const Velocity>("Movement")
       .each([](flecs::iter& it, size_t i, Position& p, const Velocity& v) 
       {
          p.Value += v.Value * it.delta_time();
       });

    // ---------------------------------------------------------
    // SYSTEM 2: RAYCAST COLLISION
    // ---------------------------------------------------------
    UWorld* WorldPtr = GetWorld();
    EcsWorld->system<Position, const Velocity>("Collision")
       .each([WorldPtr](flecs::iter& it, size_t i, Position& p, const Velocity& v) 
       {
          if (!WorldPtr) return;
          float dt = it.delta_time();

          FVector Start = p.Value - (v.Value * dt); 
          FVector End = p.Value;

          FHitResult Hit;
          FCollisionQueryParams Params;

          if (WorldPtr->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
          {
             p.Value = Hit.ImpactPoint;
             it.entity(i).set<HitEvent>({ Hit });
          }
       });

    // ---------------------------------------------------------
    // SYSTEM 3: PROCESS HITS
    // ---------------------------------------------------------
    EcsWorld->system<const HitEvent, const DamagePayload, const Affiliation>("ProcessHits")
       .each([](flecs::iter& it, size_t i, const HitEvent& hitEvent, const DamagePayload& damage, const Affiliation& affil) 
       {
          flecs::entity e = it.entity(i);
          AActor* HitActor = hitEvent.Hit.GetActor();

          if (HitActor) 
          {
             UGameplayStatics::ApplyDamage(HitActor, damage.Amount, nullptr, nullptr, UDamageType::StaticClass());
          }

          if (e.has<CanPenetrate>()) {
             e.remove<HitEvent>();
          } else if (e.has<CanRicochet>()) {
             e.remove<HitEvent>();
          } else {
             e.destruct();
          }
       });

    // ---------------------------------------------------------
    // INIT RENDER QUERY
    // ---------------------------------------------------------
    // FIX: We allocate the query to our pointer so it's safely tracked
    RenderQuery = new flecs::query<const Position, const Velocity, const RibbonID>(
        EcsWorld->query<const Position, const Velocity, const RibbonID>()
    );
}

void UFlecsSubsystem::Deinitialize()
{
    FWorldDelegates::OnWorldTickStart.Remove(TickDelegateHandle);
    FWorldDelegates::OnWorldPostActorTick.Remove(PresentationDelegateHandle);
    
    // FIX: Explicitly delete the query before the ECS World dies!
    if (RenderQuery) 
    { 
        delete RenderQuery; 
        RenderQuery = nullptr; 
    }

    if (EcsWorld) 
    { 
        delete EcsWorld; 
        EcsWorld = nullptr; 
    }
    
    Super::Deinitialize();
}

// ---------------------------------------------------------
// TICK SIMULATION (Runs before Blueprints / Movement happens here)
// ---------------------------------------------------------
void UFlecsSubsystem::TickSimulation(UWorld* World, ELevelTick TickType, float DeltaTime)
{
    if (EcsWorld) 
    { 
       EcsWorld->progress(DeltaTime); 
    }
}

// ---------------------------------------------------------
// UPDATE PRESENTATION (Runs after Blueprints / Rendering happens here)
// ---------------------------------------------------------
void UFlecsSubsystem::UpdatePresentation(UWorld* World, ELevelTick TickType, float DeltaTime)
{
	if (!EcsWorld || !ProjectileNiagaraComponent || !RenderQuery) return;

	NiagaraPositions.Reset();
	NiagaraRotations.Reset();
	NiagaraIDs.Reset();

	RenderQuery->each([this](flecs::iter& it, size_t i, const Position& p, const Velocity& v, const RibbonID& ribbon) 
	{
		NiagaraPositions.Add(p.Value);
		NiagaraRotations.Add((FQuat4f)v.Value.ToOrientationQuat());
		NiagaraIDs.Add(ribbon.Value);
	});

	// FIX: Removed the `if > 0` check. 
	// We MUST push the empty arrays so Niagara knows to clear the screen!
	UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(ProjectileNiagaraComponent, FName("MassParticlePositions"), NiagaraPositions);
	UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(ProjectileNiagaraComponent, FName("MassParticleOrientations"), NiagaraRotations);
	UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(ProjectileNiagaraComponent, FName("MassParticleIDs"), NiagaraIDs);
}

void UFlecsSubsystem::SpawnFlecsProjectile(FVector SpawnLocation, FVector StartVelocity, float Damage, ETeamAffiliation Team, bool bPenetrates, bool bRicochets)
{
    if (!EcsWorld) return;

    int32 RibbonIDVal = CurrentRibbonID++;

    flecs::entity e = EcsWorld->entity()
       .set<Position>({ SpawnLocation })
       .set<Velocity>({ StartVelocity })
       .set<DamagePayload>({ Damage })
       .set<Affiliation>({ Team })
       .set<RibbonID>({ RibbonIDVal })
       .add<ProjectileTag>();

    if (bPenetrates) e.add<CanPenetrate>();
    if (bRicochets) e.add<CanRicochet>();
}