#pragma once
#include "CoreMinimal.h"
#include "CollisionQueryParams.h"
#include "MassEntityTypes.h"
#include  "MSProjectileFragments.generated.h"
 
/**
* Fragments	
**/
USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FDamageFragment : public FMassFragment
{
	GENERATED_BODY()

	/** The amount of damage this entity will apply. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float Damage = 0.0f;
};

USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSCollisionIgnoredActorsFragment : public FMassFragment
{
	GENERATED_BODY()

	TArray<AActor*,TInlineAllocator<2>> IgnoredActors;
};
//////////////////////////////////
UENUM(BlueprintType)
enum class EMSAffiliation : uint8
{
	Friendly,
	Enemy,
	All
};

USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FAffiliationFragment : public FMassFragment
{
	GENERATED_BODY()

	/** Defines the affiliation of this entity (e.g., for targeting). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Affiliation")
	EMSAffiliation Affiliation = EMSAffiliation::Enemy;
};
///////////////////////////////////////

UENUM(BlueprintType)
enum class EMSProjectileType : uint8
{
	Bullet,
	Shell,
	Missile,
	Plasma
};

USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSProjectileType : public FMassFragment
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Affiliation")
	EMSProjectileType Affiliation = EMSProjectileType::Bullet;
};


// This would arguably make more sense as a shared thing but it's only a byte...
USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSCollisionChannelFragment : public FMassFragment
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> Channel = ECC_Camera;
};

USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSProjectileRadiusFragment : public FMassFragment
{
	GENERATED_BODY()

	/** The radius of the projectile's collision sphere. 
	 * If 0, a simple line trace will be used.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	float Radius = 0.0f;
};
/**
* Tags	
**/

// A lot of these could use some data but for now I will just use them as flags

USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSLineTraceTag : public FMassTag
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSOctreeQueryTag : public FMassTag
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSProjectileFireHitEventTag : public FMassTag
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSProjectileStopOnHitTag : public FMassTag
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSProjectileRicochetTag : public FMassTag
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSProjectileTag : public FMassTag
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType)
struct MASSCOMMUNITYSAMPLE_API FMSPenetrateTag : public FMassTag
{
	GENERATED_BODY()
	
};


