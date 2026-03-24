#include "FlecsSubsystem.h"
#include "Kismet/GameplayStatics.h"

void UFlecsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	EcsWorld = new flecs::world();

	if (UWorld* World = GetWorld())
	{
        // FIX: Binding to our updated TickSimulation function
		TickDelegateHandle = FWorldDelegates::OnWorldTickStart.AddUObject(this, &UFlecsSubsystem::TickSimulation);
	}

	// ---------------------------------------------------------
	// SYSTEM 1: MOVEMENT
	// FIX: Using FLECS v4 .each() 
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
	// SYSTEM 4: GATHER NIAGARA DATA
	// ---------------------------------------------------------
	EcsWorld->system<const Position, const Velocity>("UpdateNiagara")
		.kind(flecs::PostUpdate) 
		.each([this](flecs::iter& it, size_t i, const Position& p, const Velocity& v) 
		{
			if (!ProjectileNiagaraComponent) return;

            // We just add to the arrays here. Resetting and Pushing happens in TickSimulation!
			NiagaraPositions.Add(p.Value);
			NiagaraRotations.Add((FQuat4f)v.Value.ToOrientationQuat());
			NiagaraIDs.Add(static_cast<int32>(it.entity(i).id()));
		});
}

void UFlecsSubsystem::Deinitialize()
{
	FWorldDelegates::OnWorldTickStart.Remove(TickDelegateHandle);
	if (EcsWorld) { delete EcsWorld; EcsWorld = nullptr; }
	Super::Deinitialize();
}

// FIX: Signature updated to match Unreal, Array pushes moved here
void UFlecsSubsystem::TickSimulation(UWorld* World, ELevelTick TickType, float DeltaTime)
{
	if (EcsWorld) 
	{ 
        // 1. Reset arrays ONCE per frame
		NiagaraPositions.Reset();
		NiagaraRotations.Reset();
		NiagaraIDs.Reset();

        // 2. Run the ECS simulation (This populates the arrays)
		EcsWorld->progress(DeltaTime); 

        // 3. Push to Niagara ONCE per frame
		if (ProjectileNiagaraComponent && NiagaraPositions.Num() > 0)
		{
			UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(ProjectileNiagaraComponent, FName("MassParticlePositions"), NiagaraPositions);
			UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(ProjectileNiagaraComponent, FName("MassParticleOrientations"), NiagaraRotations);
			UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(ProjectileNiagaraComponent, FName("MassParticleIDs"), NiagaraIDs);
		}
	}
}

void UFlecsSubsystem::SpawnFlecsProjectile(FVector SpawnLocation, FVector StartVelocity, float Damage, ETeamAffiliation Team, bool bPenetrates, bool bRicochets)
{
	if (!EcsWorld) return;

	flecs::entity e = EcsWorld->entity()
		.set<Position>({ SpawnLocation })
		.set<Velocity>({ StartVelocity })
		.set<DamagePayload>({ Damage })
		.set<Affiliation>({ Team })
		.add<ProjectileTag>();

	if (bPenetrates) e.add<CanPenetrate>();
	if (bRicochets) e.add<CanRicochet>();
}