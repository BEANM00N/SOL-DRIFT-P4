#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/HitResult.h"
#include "SoldriftDamageLibrary.generated.h"

UCLASS()
class SOLDRIFT_API USoldriftDamageLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	/**
	 * Applies damage to an actor and passes the exact Hit Result data along with it.
	 */
	UFUNCTION(BlueprintCallable, Category = "Combat|Damage")
	static void ApplySolDamage(AActor* DamagedActor, float BaseDamage, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, TSubclassOf<class UDamageType> DamageTypeClass);
};