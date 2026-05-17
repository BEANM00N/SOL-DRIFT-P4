#include "FlecsSubsystem.h"
#include "Kismet/GameplayStatics.h"

void UFlecsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    EcsWorld = new flecs::world();

    if (UWorld* World = GetWorld())
    {
       TickDelegateHandle = FWorldDelegates::OnWorldTickStart.AddUObject(this, &UFlecsSubsystem::TickSimulation);
       PresentationDelegateHandle = FWorldDelegates::OnWorldPostActorTick.AddUObject(this, &UFlecsSubsystem::UpdatePresentation);
    }

    // ---------------------------------------------------------
    // SYSTEM 1: MOVEMENT
    // ---------------------------------------------------------
    EcsWorld->system<Position, const Velocity>("Movement")
       .each([](flecs::iter& it, size_t i, Position& p, const Velocity& v) 
       {
          // Do not move if the bullet has hit something and is lingering for visuals
          if (it.entity(i).has<LingerTimer>()) return;

          p.Value += v.Value * it.delta_time();
       });

	// ---------------------------------------------------------
	// SYSTEM 2: RAYCAST COLLISION
	// ---------------------------------------------------------
	// 1. Add 'const DamagePayload' to the system query so we can read who fired it
	EcsWorld->system<Position, const Velocity, const DamagePayload>("Collision")
	   .each([this](flecs::iter& it, size_t i, Position& p, const Velocity& v, const DamagePayload& damage) 
	   {
		  // Do not trace if the bullet has already hit its final target
		  if (it.entity(i).has<LingerTimer>()) return;

		  UWorld* CurrentWorld = this->GetWorld();
		  if (!CurrentWorld) return;

		  float dt = it.delta_time();
		  FVector Start = p.Value - (v.Value * dt); 
		  FVector End = p.Value;

		  FHitResult Hit;
		  FCollisionQueryParams Params;

		  // 2. Add the Damage Causer to the ignore list!
		  if (damage.Causer.IsValid())
		  {
			  Params.AddIgnoredActor(damage.Causer.Get());
		  }

		  if (CurrentWorld->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
		  {
			 p.Value = Hit.ImpactPoint; // Snap to the exact surface
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
			 // 1. Resolve the Damage Type cleanly before the function call
			 TSubclassOf<UDamageType> FinalDamageType = damage.DamageType != nullptr 
				 ? damage.DamageType 
				 : TSubclassOf<UDamageType>(UDamageType::StaticClass());

			 // 2. Pass the clean variable in
			 UGameplayStatics::ApplyPointDamage(
				 HitActor, 
				 damage.Amount, 
				 hitEvent.Hit.ImpactNormal, 
				 hitEvent.Hit,              
				 damage.Instigator.Get(), 
				 damage.Causer.Get(),     
				 FinalDamageType          // <--- No more ambiguous ternary operators here!
			 );
		  }

		  if (e.has<CanPenetrate>()) {
			 e.remove<HitEvent>();
		  } 
		  else if (e.has<CanRicochet>()) {
			 e.remove<HitEvent>();
		  } 
		  else {
			 e.remove<HitEvent>();
			 e.set<LingerTimer>({ 0.15f }); 
		  }
	   });

   // ---------------------------------------------------------
   // SYSTEM 4: PROCESS LINGERING VISUALS
   // ---------------------------------------------------------
   EcsWorld->system<LingerTimer>("ProcessLinger")
      .each([](flecs::iter& it, size_t i, LingerTimer& linger) 
      {
         linger.TimeRemaining -= it.delta_time();
         if (linger.TimeRemaining <= 0.0f)
         {
             it.entity(i).destruct();
         }
      });

    // ---------------------------------------------------------
    // INIT RENDER QUERY
    // ---------------------------------------------------------
    RenderQuery = new flecs::query<const Position, const Velocity, const RibbonID>(
        EcsWorld->query<const Position, const Velocity, const RibbonID>()
    );
}

void UFlecsSubsystem::Deinitialize()
{
    FWorldDelegates::OnWorldTickStart.Remove(TickDelegateHandle);
    FWorldDelegates::OnWorldPostActorTick.Remove(PresentationDelegateHandle);
    
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

void UFlecsSubsystem::TickSimulation(UWorld* World, ELevelTick TickType, float DeltaTime)
{
    if (EcsWorld) EcsWorld->progress(DeltaTime); 
}

void UFlecsSubsystem::UpdatePresentation(UWorld* World, ELevelTick TickType, float DeltaTime)
{
	if (!EcsWorld || !ProjectileNiagaraComponent || !RenderQuery) return;

	NiagaraPositions.Reset();
	NiagaraRotations.Reset();
	NiagaraIDs.Reset();

    // Even if lingering, the entity still has Position and Velocity, 
    // so it perfectly maintains its alignment and location for Niagara!
	RenderQuery->each([this](flecs::iter& it, size_t i, const Position& p, const Velocity& v, const RibbonID& ribbon) 
	{
		NiagaraPositions.Add(p.Value);
		NiagaraRotations.Add((FQuat4f)v.Value.ToOrientationQuat());
		NiagaraIDs.Add(ribbon.Value);
	});

	UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(ProjectileNiagaraComponent, FName("MassParticlePositions"), NiagaraPositions);
	UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(ProjectileNiagaraComponent, FName("MassParticleOrientations"), NiagaraRotations);
	UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(ProjectileNiagaraComponent, FName("MassParticleIDs"), NiagaraIDs);
}

void UFlecsSubsystem::SpawnFlecsProjectile(FVector SpawnLocation, FVector StartVelocity, float Damage, ETeamAffiliation Team, bool bPenetrates, bool bRicochets, TSubclassOf<UDamageType> DamageType, AActor* DamageCauser, AController* Instigator)
{
    if (!EcsWorld) return;

    int32 RibbonIDVal = CurrentRibbonID++;

    flecs::entity e = EcsWorld->entity()
       .set<Position>({ SpawnLocation })
       .set<Velocity>({ StartVelocity })
       .set<DamagePayload>({ Damage, DamageType, DamageCauser, Instigator })
       .set<Affiliation>({ Team })
       .set<RibbonID>({ RibbonIDVal })
       .add<ProjectileTag>();

    if (bPenetrates) e.add<CanPenetrate>();
    if (bRicochets) e.add<CanRicochet>();
}