// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectileSim/Fragments/MSProjectileFragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSProjectileFragments() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
MASSCOMMUNITYSAMPLE_API UEnum* Z_Construct_UEnum_MassCommunitySample_EMSAffiliation();
MASSCOMMUNITYSAMPLE_API UEnum* Z_Construct_UEnum_MassCommunitySample_EMSProjectileType();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAffiliationFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSCollisionChannelFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSCollisionIgnoredActorsFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSLineTraceTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSOctreeQueryTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSPenetrateTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileFireHitEventTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileRadiusFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileRicochetTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileStopOnHitTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileType();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDamageFragment ***************************************************
static_assert(std::is_polymorphic<FDamageFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FDamageFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDamageFragment;
class UScriptStruct* FDamageFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDamageFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDamageFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("DamageFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FDamageFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDamageFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Fragments\x09\n**/" },
#endif
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fragments" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The amount of damage this entity will apply. */" },
#endif
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of damage this entity will apply." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageFragment_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDamageFragment, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageFragment_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"DamageFragment",
	Z_Construct_UScriptStruct_FDamageFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageFragment_Statics::PropPointers),
	sizeof(FDamageFragment),
	alignof(FDamageFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDamageFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDamageFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FDamageFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDamageFragment.InnerSingleton, Z_Construct_UScriptStruct_FDamageFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDamageFragment.InnerSingleton;
}
// ********** End ScriptStruct FDamageFragment *****************************************************

// ********** Begin ScriptStruct FMSCollisionIgnoredActorsFragment *********************************
static_assert(std::is_polymorphic<FMSCollisionIgnoredActorsFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMSCollisionIgnoredActorsFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSCollisionIgnoredActorsFragment;
class UScriptStruct* FMSCollisionIgnoredActorsFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSCollisionIgnoredActorsFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSCollisionIgnoredActorsFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSCollisionIgnoredActorsFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSCollisionIgnoredActorsFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMSCollisionIgnoredActorsFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSCollisionIgnoredActorsFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSCollisionIgnoredActorsFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSCollisionIgnoredActorsFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MSCollisionIgnoredActorsFragment",
	nullptr,
	0,
	sizeof(FMSCollisionIgnoredActorsFragment),
	alignof(FMSCollisionIgnoredActorsFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSCollisionIgnoredActorsFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSCollisionIgnoredActorsFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSCollisionIgnoredActorsFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMSCollisionIgnoredActorsFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSCollisionIgnoredActorsFragment.InnerSingleton, Z_Construct_UScriptStruct_FMSCollisionIgnoredActorsFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSCollisionIgnoredActorsFragment.InnerSingleton;
}
// ********** End ScriptStruct FMSCollisionIgnoredActorsFragment ***********************************

// ********** Begin Enum EMSAffiliation ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMSAffiliation;
static UEnum* EMSAffiliation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMSAffiliation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMSAffiliation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassCommunitySample_EMSAffiliation, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("EMSAffiliation"));
	}
	return Z_Registration_Info_UEnum_EMSAffiliation.OuterSingleton;
}
template<> MASSCOMMUNITYSAMPLE_API UEnum* StaticEnum<EMSAffiliation>()
{
	return EMSAffiliation_StaticEnum();
}
struct Z_Construct_UEnum_MassCommunitySample_EMSAffiliation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Comment", "//////////////////////////////////\n" },
		{ "All.Name", "EMSAffiliation::All" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////\n" },
#endif
		{ "Enemy.Comment", "//////////////////////////////////\n" },
		{ "Enemy.Name", "EMSAffiliation::Enemy" },
		{ "Friendly.Comment", "//////////////////////////////////\n" },
		{ "Friendly.Name", "EMSAffiliation::Friendly" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMSAffiliation::Friendly", (int64)EMSAffiliation::Friendly },
		{ "EMSAffiliation::Enemy", (int64)EMSAffiliation::Enemy },
		{ "EMSAffiliation::All", (int64)EMSAffiliation::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassCommunitySample_EMSAffiliation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassCommunitySample,
	nullptr,
	"EMSAffiliation",
	"EMSAffiliation",
	Z_Construct_UEnum_MassCommunitySample_EMSAffiliation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassCommunitySample_EMSAffiliation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassCommunitySample_EMSAffiliation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassCommunitySample_EMSAffiliation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassCommunitySample_EMSAffiliation()
{
	if (!Z_Registration_Info_UEnum_EMSAffiliation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMSAffiliation.InnerSingleton, Z_Construct_UEnum_MassCommunitySample_EMSAffiliation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMSAffiliation.InnerSingleton;
}
// ********** End Enum EMSAffiliation **************************************************************

// ********** Begin ScriptStruct FAffiliationFragment **********************************************
static_assert(std::is_polymorphic<FAffiliationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FAffiliationFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAffiliationFragment;
class UScriptStruct* FAffiliationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAffiliationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAffiliationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAffiliationFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("AffiliationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FAffiliationFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAffiliationFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Affiliation_MetaData[] = {
		{ "Category", "Affiliation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines the affiliation of this entity (e.g., for targeting). */" },
#endif
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the affiliation of this entity (e.g., for targeting)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Affiliation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Affiliation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAffiliationFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAffiliationFragment_Statics::NewProp_Affiliation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAffiliationFragment_Statics::NewProp_Affiliation = { "Affiliation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAffiliationFragment, Affiliation), Z_Construct_UEnum_MassCommunitySample_EMSAffiliation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Affiliation_MetaData), NewProp_Affiliation_MetaData) }; // 3816050378
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAffiliationFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAffiliationFragment_Statics::NewProp_Affiliation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAffiliationFragment_Statics::NewProp_Affiliation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAffiliationFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAffiliationFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"AffiliationFragment",
	Z_Construct_UScriptStruct_FAffiliationFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAffiliationFragment_Statics::PropPointers),
	sizeof(FAffiliationFragment),
	alignof(FAffiliationFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAffiliationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAffiliationFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAffiliationFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FAffiliationFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAffiliationFragment.InnerSingleton, Z_Construct_UScriptStruct_FAffiliationFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAffiliationFragment.InnerSingleton;
}
// ********** End ScriptStruct FAffiliationFragment ************************************************

// ********** Begin Enum EMSProjectileType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMSProjectileType;
static UEnum* EMSProjectileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMSProjectileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMSProjectileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassCommunitySample_EMSProjectileType, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("EMSProjectileType"));
	}
	return Z_Registration_Info_UEnum_EMSProjectileType.OuterSingleton;
}
template<> MASSCOMMUNITYSAMPLE_API UEnum* StaticEnum<EMSProjectileType>()
{
	return EMSProjectileType_StaticEnum();
}
struct Z_Construct_UEnum_MassCommunitySample_EMSProjectileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bullet.Comment", "///////////////////////////////////////\n" },
		{ "Bullet.Name", "EMSProjectileType::Bullet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////\n" },
#endif
		{ "Missile.Comment", "///////////////////////////////////////\n" },
		{ "Missile.Name", "EMSProjectileType::Missile" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
		{ "Plasma.Comment", "///////////////////////////////////////\n" },
		{ "Plasma.Name", "EMSProjectileType::Plasma" },
		{ "Shell.Comment", "///////////////////////////////////////\n" },
		{ "Shell.Name", "EMSProjectileType::Shell" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMSProjectileType::Bullet", (int64)EMSProjectileType::Bullet },
		{ "EMSProjectileType::Shell", (int64)EMSProjectileType::Shell },
		{ "EMSProjectileType::Missile", (int64)EMSProjectileType::Missile },
		{ "EMSProjectileType::Plasma", (int64)EMSProjectileType::Plasma },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassCommunitySample_EMSProjectileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassCommunitySample,
	nullptr,
	"EMSProjectileType",
	"EMSProjectileType",
	Z_Construct_UEnum_MassCommunitySample_EMSProjectileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassCommunitySample_EMSProjectileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassCommunitySample_EMSProjectileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassCommunitySample_EMSProjectileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassCommunitySample_EMSProjectileType()
{
	if (!Z_Registration_Info_UEnum_EMSProjectileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMSProjectileType.InnerSingleton, Z_Construct_UEnum_MassCommunitySample_EMSProjectileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMSProjectileType.InnerSingleton;
}
// ********** End Enum EMSProjectileType ***********************************************************

// ********** Begin ScriptStruct FMSProjectileType *************************************************
static_assert(std::is_polymorphic<FMSProjectileType>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMSProjectileType cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSProjectileType;
class UScriptStruct* FMSProjectileType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSProjectileType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSProjectileType, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSProjectileType"));
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileType.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSProjectileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Affiliation_MetaData[] = {
		{ "Category", "Affiliation" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Affiliation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Affiliation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSProjectileType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMSProjectileType_Statics::NewProp_Affiliation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMSProjectileType_Statics::NewProp_Affiliation = { "Affiliation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSProjectileType, Affiliation), Z_Construct_UEnum_MassCommunitySample_EMSProjectileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Affiliation_MetaData), NewProp_Affiliation_MetaData) }; // 2121092020
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSProjectileType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSProjectileType_Statics::NewProp_Affiliation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSProjectileType_Statics::NewProp_Affiliation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSProjectileType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MSProjectileType",
	Z_Construct_UScriptStruct_FMSProjectileType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileType_Statics::PropPointers),
	sizeof(FMSProjectileType),
	alignof(FMSProjectileType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSProjectileType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileType()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSProjectileType.InnerSingleton, Z_Construct_UScriptStruct_FMSProjectileType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileType.InnerSingleton;
}
// ********** End ScriptStruct FMSProjectileType ***************************************************

// ********** Begin ScriptStruct FMSCollisionChannelFragment ***************************************
static_assert(std::is_polymorphic<FMSCollisionChannelFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMSCollisionChannelFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSCollisionChannelFragment;
class UScriptStruct* FMSCollisionChannelFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSCollisionChannelFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSCollisionChannelFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSCollisionChannelFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSCollisionChannelFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMSCollisionChannelFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This would arguably make more sense as a shared thing but it's only a byte...\n" },
#endif
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This would arguably make more sense as a shared thing but it's only a byte..." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "MSCollisionChannelFragment" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSCollisionChannelFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSCollisionChannelFragment, Channel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::NewProp_Channel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MSCollisionChannelFragment",
	Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::PropPointers),
	sizeof(FMSCollisionChannelFragment),
	alignof(FMSCollisionChannelFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSCollisionChannelFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMSCollisionChannelFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSCollisionChannelFragment.InnerSingleton, Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSCollisionChannelFragment.InnerSingleton;
}
// ********** End ScriptStruct FMSCollisionChannelFragment *****************************************

// ********** Begin ScriptStruct FMSProjectileRadiusFragment ***************************************
static_assert(std::is_polymorphic<FMSProjectileRadiusFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMSProjectileRadiusFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSProjectileRadiusFragment;
class UScriptStruct* FMSProjectileRadiusFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileRadiusFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSProjectileRadiusFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSProjectileRadiusFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSProjectileRadiusFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileRadiusFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The radius of the projectile's collision sphere. \n\x09 * If 0, a simple line trace will be used.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The radius of the projectile's collision sphere.\nIf 0, a simple line trace will be used." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSProjectileRadiusFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSProjectileRadiusFragment, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MSProjectileRadiusFragment",
	Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::PropPointers),
	sizeof(FMSProjectileRadiusFragment),
	alignof(FMSProjectileRadiusFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileRadiusFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileRadiusFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSProjectileRadiusFragment.InnerSingleton, Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileRadiusFragment.InnerSingleton;
}
// ********** End ScriptStruct FMSProjectileRadiusFragment *****************************************

// ********** Begin ScriptStruct FMSLineTraceTag ***************************************************
static_assert(std::is_polymorphic<FMSLineTraceTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSLineTraceTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSLineTraceTag;
class UScriptStruct* FMSLineTraceTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSLineTraceTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSLineTraceTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSLineTraceTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSLineTraceTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSLineTraceTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSLineTraceTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Tags\x09\n**/// A lot of these could use some data but for now I will just use them as flags\n" },
#endif
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags\n// A lot of these could use some data but for now I will just use them as flags" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSLineTraceTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSLineTraceTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSLineTraceTag",
	nullptr,
	0,
	sizeof(FMSLineTraceTag),
	alignof(FMSLineTraceTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSLineTraceTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSLineTraceTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSLineTraceTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSLineTraceTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSLineTraceTag.InnerSingleton, Z_Construct_UScriptStruct_FMSLineTraceTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSLineTraceTag.InnerSingleton;
}
// ********** End ScriptStruct FMSLineTraceTag *****************************************************

// ********** Begin ScriptStruct FMSOctreeQueryTag *************************************************
static_assert(std::is_polymorphic<FMSOctreeQueryTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSOctreeQueryTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSOctreeQueryTag;
class UScriptStruct* FMSOctreeQueryTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSOctreeQueryTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSOctreeQueryTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSOctreeQueryTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSOctreeQueryTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSOctreeQueryTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSOctreeQueryTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSOctreeQueryTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSOctreeQueryTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSOctreeQueryTag",
	nullptr,
	0,
	sizeof(FMSOctreeQueryTag),
	alignof(FMSOctreeQueryTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSOctreeQueryTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSOctreeQueryTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSOctreeQueryTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSOctreeQueryTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSOctreeQueryTag.InnerSingleton, Z_Construct_UScriptStruct_FMSOctreeQueryTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSOctreeQueryTag.InnerSingleton;
}
// ********** End ScriptStruct FMSOctreeQueryTag ***************************************************

// ********** Begin ScriptStruct FMSProjectileFireHitEventTag **************************************
static_assert(std::is_polymorphic<FMSProjectileFireHitEventTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSProjectileFireHitEventTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSProjectileFireHitEventTag;
class UScriptStruct* FMSProjectileFireHitEventTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileFireHitEventTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSProjectileFireHitEventTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSProjectileFireHitEventTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSProjectileFireHitEventTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileFireHitEventTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSProjectileFireHitEventTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSProjectileFireHitEventTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSProjectileFireHitEventTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSProjectileFireHitEventTag",
	nullptr,
	0,
	sizeof(FMSProjectileFireHitEventTag),
	alignof(FMSProjectileFireHitEventTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileFireHitEventTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSProjectileFireHitEventTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileFireHitEventTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileFireHitEventTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSProjectileFireHitEventTag.InnerSingleton, Z_Construct_UScriptStruct_FMSProjectileFireHitEventTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileFireHitEventTag.InnerSingleton;
}
// ********** End ScriptStruct FMSProjectileFireHitEventTag ****************************************

// ********** Begin ScriptStruct FMSProjectileStopOnHitTag *****************************************
static_assert(std::is_polymorphic<FMSProjectileStopOnHitTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSProjectileStopOnHitTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSProjectileStopOnHitTag;
class UScriptStruct* FMSProjectileStopOnHitTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileStopOnHitTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSProjectileStopOnHitTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSProjectileStopOnHitTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSProjectileStopOnHitTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileStopOnHitTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSProjectileStopOnHitTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSProjectileStopOnHitTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSProjectileStopOnHitTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSProjectileStopOnHitTag",
	nullptr,
	0,
	sizeof(FMSProjectileStopOnHitTag),
	alignof(FMSProjectileStopOnHitTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileStopOnHitTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSProjectileStopOnHitTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileStopOnHitTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileStopOnHitTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSProjectileStopOnHitTag.InnerSingleton, Z_Construct_UScriptStruct_FMSProjectileStopOnHitTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileStopOnHitTag.InnerSingleton;
}
// ********** End ScriptStruct FMSProjectileStopOnHitTag *******************************************

// ********** Begin ScriptStruct FMSProjectileRicochetTag ******************************************
static_assert(std::is_polymorphic<FMSProjectileRicochetTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSProjectileRicochetTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSProjectileRicochetTag;
class UScriptStruct* FMSProjectileRicochetTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileRicochetTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSProjectileRicochetTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSProjectileRicochetTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSProjectileRicochetTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileRicochetTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSProjectileRicochetTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSProjectileRicochetTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSProjectileRicochetTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSProjectileRicochetTag",
	nullptr,
	0,
	sizeof(FMSProjectileRicochetTag),
	alignof(FMSProjectileRicochetTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileRicochetTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSProjectileRicochetTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileRicochetTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileRicochetTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSProjectileRicochetTag.InnerSingleton, Z_Construct_UScriptStruct_FMSProjectileRicochetTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileRicochetTag.InnerSingleton;
}
// ********** End ScriptStruct FMSProjectileRicochetTag ********************************************

// ********** Begin ScriptStruct FMSProjectileTag **************************************************
static_assert(std::is_polymorphic<FMSProjectileTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSProjectileTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSProjectileTag;
class UScriptStruct* FMSProjectileTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSProjectileTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSProjectileTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSProjectileTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSProjectileTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSProjectileTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSProjectileTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSProjectileTag",
	nullptr,
	0,
	sizeof(FMSProjectileTag),
	alignof(FMSProjectileTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSProjectileTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSProjectileTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSProjectileTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSProjectileTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSProjectileTag.InnerSingleton, Z_Construct_UScriptStruct_FMSProjectileTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSProjectileTag.InnerSingleton;
}
// ********** End ScriptStruct FMSProjectileTag ****************************************************

// ********** Begin ScriptStruct FMSPenetrateTag ***************************************************
static_assert(std::is_polymorphic<FMSPenetrateTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSPenetrateTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSPenetrateTag;
class UScriptStruct* FMSPenetrateTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSPenetrateTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSPenetrateTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSPenetrateTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSPenetrateTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSPenetrateTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSPenetrateTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/Fragments/MSProjectileFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSPenetrateTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSPenetrateTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSPenetrateTag",
	nullptr,
	0,
	sizeof(FMSPenetrateTag),
	alignof(FMSPenetrateTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSPenetrateTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSPenetrateTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSPenetrateTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSPenetrateTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSPenetrateTag.InnerSingleton, Z_Construct_UScriptStruct_FMSPenetrateTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSPenetrateTag.InnerSingleton;
}
// ********** End ScriptStruct FMSPenetrateTag *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Fragments_MSProjectileFragments_h__Script_MassCommunitySample_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMSAffiliation_StaticEnum, TEXT("EMSAffiliation"), &Z_Registration_Info_UEnum_EMSAffiliation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3816050378U) },
		{ EMSProjectileType_StaticEnum, TEXT("EMSProjectileType"), &Z_Registration_Info_UEnum_EMSProjectileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2121092020U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDamageFragment::StaticStruct, Z_Construct_UScriptStruct_FDamageFragment_Statics::NewStructOps, TEXT("DamageFragment"), &Z_Registration_Info_UScriptStruct_FDamageFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageFragment), 2779567274U) },
		{ FMSCollisionIgnoredActorsFragment::StaticStruct, Z_Construct_UScriptStruct_FMSCollisionIgnoredActorsFragment_Statics::NewStructOps, TEXT("MSCollisionIgnoredActorsFragment"), &Z_Registration_Info_UScriptStruct_FMSCollisionIgnoredActorsFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSCollisionIgnoredActorsFragment), 2265340690U) },
		{ FAffiliationFragment::StaticStruct, Z_Construct_UScriptStruct_FAffiliationFragment_Statics::NewStructOps, TEXT("AffiliationFragment"), &Z_Registration_Info_UScriptStruct_FAffiliationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAffiliationFragment), 2863263164U) },
		{ FMSProjectileType::StaticStruct, Z_Construct_UScriptStruct_FMSProjectileType_Statics::NewStructOps, TEXT("MSProjectileType"), &Z_Registration_Info_UScriptStruct_FMSProjectileType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSProjectileType), 3645865043U) },
		{ FMSCollisionChannelFragment::StaticStruct, Z_Construct_UScriptStruct_FMSCollisionChannelFragment_Statics::NewStructOps, TEXT("MSCollisionChannelFragment"), &Z_Registration_Info_UScriptStruct_FMSCollisionChannelFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSCollisionChannelFragment), 2013069109U) },
		{ FMSProjectileRadiusFragment::StaticStruct, Z_Construct_UScriptStruct_FMSProjectileRadiusFragment_Statics::NewStructOps, TEXT("MSProjectileRadiusFragment"), &Z_Registration_Info_UScriptStruct_FMSProjectileRadiusFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSProjectileRadiusFragment), 2941248964U) },
		{ FMSLineTraceTag::StaticStruct, Z_Construct_UScriptStruct_FMSLineTraceTag_Statics::NewStructOps, TEXT("MSLineTraceTag"), &Z_Registration_Info_UScriptStruct_FMSLineTraceTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSLineTraceTag), 2531904836U) },
		{ FMSOctreeQueryTag::StaticStruct, Z_Construct_UScriptStruct_FMSOctreeQueryTag_Statics::NewStructOps, TEXT("MSOctreeQueryTag"), &Z_Registration_Info_UScriptStruct_FMSOctreeQueryTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSOctreeQueryTag), 3673995750U) },
		{ FMSProjectileFireHitEventTag::StaticStruct, Z_Construct_UScriptStruct_FMSProjectileFireHitEventTag_Statics::NewStructOps, TEXT("MSProjectileFireHitEventTag"), &Z_Registration_Info_UScriptStruct_FMSProjectileFireHitEventTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSProjectileFireHitEventTag), 1853007901U) },
		{ FMSProjectileStopOnHitTag::StaticStruct, Z_Construct_UScriptStruct_FMSProjectileStopOnHitTag_Statics::NewStructOps, TEXT("MSProjectileStopOnHitTag"), &Z_Registration_Info_UScriptStruct_FMSProjectileStopOnHitTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSProjectileStopOnHitTag), 1926454609U) },
		{ FMSProjectileRicochetTag::StaticStruct, Z_Construct_UScriptStruct_FMSProjectileRicochetTag_Statics::NewStructOps, TEXT("MSProjectileRicochetTag"), &Z_Registration_Info_UScriptStruct_FMSProjectileRicochetTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSProjectileRicochetTag), 4090095359U) },
		{ FMSProjectileTag::StaticStruct, Z_Construct_UScriptStruct_FMSProjectileTag_Statics::NewStructOps, TEXT("MSProjectileTag"), &Z_Registration_Info_UScriptStruct_FMSProjectileTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSProjectileTag), 2998630606U) },
		{ FMSPenetrateTag::StaticStruct, Z_Construct_UScriptStruct_FMSPenetrateTag_Statics::NewStructOps, TEXT("MSPenetrateTag"), &Z_Registration_Info_UScriptStruct_FMSPenetrateTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSPenetrateTag), 3136797414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Fragments_MSProjectileFragments_h__Script_MassCommunitySample_142485091(TEXT("/Script/MassCommunitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Fragments_MSProjectileFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Fragments_MSProjectileFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Fragments_MSProjectileFragments_h__Script_MassCommunitySample_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Fragments_MSProjectileFragments_h__Script_MassCommunitySample_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
