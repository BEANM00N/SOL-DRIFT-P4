#include "SoldriftDamageLibrary.h"
#include "GameFramework/Actor.h"
#include "Engine/DamageEvents.h"

void USoldriftDamageLibrary::ApplySolDamage(AActor* DamagedActor, float BaseDamage, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass)
{
	// 1. Safety check: Don't do math if the target is dead/null or damage is zero
	if (!DamagedActor || BaseDamage <= 0.f)
	{
		return;
	}

	// 2. Package the hit result into an engine-readable Damage Event envelope
	// We pass the BaseDamage, the HitInfo, the direction the hit came from, and the DamageType
	FPointDamageEvent DamageEvent(BaseDamage, HitInfo, HitInfo.ImpactNormal, DamageTypeClass);

	// 3. Send it to the Actor!
	DamagedActor->TakeDamage(BaseDamage, DamageEvent, InstigatedBy, DamageCauser);
}