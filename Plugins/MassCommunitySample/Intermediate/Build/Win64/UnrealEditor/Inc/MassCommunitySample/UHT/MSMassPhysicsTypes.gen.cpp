// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Physics/MSMassPhysicsTypes.h"
#include "PhysicsEngine/AggregateGeom.h"
#include "PhysicsEngine/BodyInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSMassPhysicsTypes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKAggregateGeom();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSChaosToMassTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSMassPhysicsFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSMassToChaosTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSSimulatesPhysicsTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSUpdateKinematicFromSimulationTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMSMassPhysicsFragment ********************************************
static_assert(std::is_polymorphic<FMSMassPhysicsFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMSMassPhysicsFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSMassPhysicsFragment;
class UScriptStruct* FMSMassPhysicsFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassPhysicsFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSMassPhysicsFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSMassPhysicsFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSMassPhysicsFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMSMassPhysicsFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSMassPhysicsFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handle to a physics thread particle\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysicsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle to a physics thread particle" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSMassPhysicsFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSMassPhysicsFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MSMassPhysicsFragment",
	nullptr,
	0,
	sizeof(FMSMassPhysicsFragment),
	alignof(FMSMassPhysicsFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSMassPhysicsFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSMassPhysicsFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSMassPhysicsFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassPhysicsFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSMassPhysicsFragment.InnerSingleton, Z_Construct_UScriptStruct_FMSMassPhysicsFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSMassPhysicsFragment.InnerSingleton;
}
// ********** End ScriptStruct FMSMassPhysicsFragment **********************************************

// ********** Begin ScriptStruct FSharedCollisionSettingsFragment **********************************
static_assert(std::is_polymorphic<FSharedCollisionSettingsFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FSharedCollisionSettingsFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSharedCollisionSettingsFragment;
class UScriptStruct* FSharedCollisionSettingsFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSharedCollisionSettingsFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSharedCollisionSettingsFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("SharedCollisionSettingsFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FSharedCollisionSettingsFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Imitates the collision shapes a static mesh would normally have\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysicsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Imitates the collision shapes a static mesh would normally have" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "Category", "SharedCollisionSettingsFragment" },
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysicsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[] = {
		{ "Category", "SharedCollisionSettingsFragment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// these arrays are all editfixed size... blegh\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysicsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "these arrays are all editfixed size... blegh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedCollisionSettingsFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedCollisionSettingsFragment, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 289277017
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedCollisionSettingsFragment, Geometry), Z_Construct_UScriptStruct_FKAggregateGeom, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Geometry_MetaData), NewProp_Geometry_MetaData) }; // 907291356
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::NewProp_BodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::NewProp_Geometry,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassSharedFragment,
	&NewStructOps,
	"SharedCollisionSettingsFragment",
	Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::PropPointers),
	sizeof(FSharedCollisionSettingsFragment),
	alignof(FSharedCollisionSettingsFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FSharedCollisionSettingsFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSharedCollisionSettingsFragment.InnerSingleton, Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSharedCollisionSettingsFragment.InnerSingleton;
}
// ********** End ScriptStruct FSharedCollisionSettingsFragment ************************************

// ********** Begin ScriptStruct FMSSimulatesPhysicsTag ********************************************
static_assert(std::is_polymorphic<FMSSimulatesPhysicsTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSSimulatesPhysicsTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSSimulatesPhysicsTag;
class UScriptStruct* FMSSimulatesPhysicsTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSSimulatesPhysicsTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSSimulatesPhysicsTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSSimulatesPhysicsTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSSimulatesPhysicsTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSSimulatesPhysicsTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSSimulatesPhysicsTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether we are kinematic or simulating physics\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysicsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether we are kinematic or simulating physics" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSSimulatesPhysicsTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSSimulatesPhysicsTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSSimulatesPhysicsTag",
	nullptr,
	0,
	sizeof(FMSSimulatesPhysicsTag),
	alignof(FMSSimulatesPhysicsTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSimulatesPhysicsTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSSimulatesPhysicsTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSSimulatesPhysicsTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSSimulatesPhysicsTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSSimulatesPhysicsTag.InnerSingleton, Z_Construct_UScriptStruct_FMSSimulatesPhysicsTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSSimulatesPhysicsTag.InnerSingleton;
}
// ********** End ScriptStruct FMSSimulatesPhysicsTag **********************************************

// ********** Begin ScriptStruct FMSUpdateKinematicFromSimulationTag *******************************
static_assert(std::is_polymorphic<FMSUpdateKinematicFromSimulationTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSUpdateKinematicFromSimulationTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSUpdateKinematicFromSimulationTag;
class UScriptStruct* FMSUpdateKinematicFromSimulationTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSUpdateKinematicFromSimulationTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSUpdateKinematicFromSimulationTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSUpdateKinematicFromSimulationTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSUpdateKinematicFromSimulationTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSUpdateKinematicFromSimulationTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSUpdateKinematicFromSimulationTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Inits new choas bodies with bUpdateKinematicFromSimulation = true\n * which is VERY NEW and is on main only as of writing?\n * I think what this does is do an actual solve to move the bodies around with the SetKinematicTarget stuff\n * \n */" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysicsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inits new choas bodies with bUpdateKinematicFromSimulation = true\n* which is VERY NEW and is on main only as of writing?\n* I think what this does is do an actual solve to move the bodies around with the SetKinematicTarget stuff" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSUpdateKinematicFromSimulationTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSUpdateKinematicFromSimulationTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSUpdateKinematicFromSimulationTag",
	nullptr,
	0,
	sizeof(FMSUpdateKinematicFromSimulationTag),
	alignof(FMSUpdateKinematicFromSimulationTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSUpdateKinematicFromSimulationTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSUpdateKinematicFromSimulationTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSUpdateKinematicFromSimulationTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSUpdateKinematicFromSimulationTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSUpdateKinematicFromSimulationTag.InnerSingleton, Z_Construct_UScriptStruct_FMSUpdateKinematicFromSimulationTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSUpdateKinematicFromSimulationTag.InnerSingleton;
}
// ********** End ScriptStruct FMSUpdateKinematicFromSimulationTag *********************************

// ********** Begin ScriptStruct FMSChaosToMassTag *************************************************
static_assert(std::is_polymorphic<FMSChaosToMassTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSChaosToMassTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSChaosToMassTag;
class UScriptStruct* FMSChaosToMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSChaosToMassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSChaosToMassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSChaosToMassTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSChaosToMassTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSChaosToMassTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSChaosToMassTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chaos moves our mass transform\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysicsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chaos moves our mass transform" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSChaosToMassTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSChaosToMassTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSChaosToMassTag",
	nullptr,
	0,
	sizeof(FMSChaosToMassTag),
	alignof(FMSChaosToMassTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSChaosToMassTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSChaosToMassTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSChaosToMassTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSChaosToMassTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSChaosToMassTag.InnerSingleton, Z_Construct_UScriptStruct_FMSChaosToMassTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSChaosToMassTag.InnerSingleton;
}
// ********** End ScriptStruct FMSChaosToMassTag ***************************************************

// ********** Begin ScriptStruct FMSMassToChaosTag *************************************************
static_assert(std::is_polymorphic<FMSMassToChaosTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSMassToChaosTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSMassToChaosTag;
class UScriptStruct* FMSMassToChaosTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassToChaosTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSMassToChaosTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSMassToChaosTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSMassToChaosTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSMassToChaosTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSMassToChaosTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mass moves our chaos transform (on the game thread...)\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysicsTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mass moves our chaos transform (on the game thread...)" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSMassToChaosTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSMassToChaosTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSMassToChaosTag",
	nullptr,
	0,
	sizeof(FMSMassToChaosTag),
	alignof(FMSMassToChaosTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSMassToChaosTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSMassToChaosTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSMassToChaosTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassToChaosTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSMassToChaosTag.InnerSingleton, Z_Construct_UScriptStruct_FMSMassToChaosTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSMassToChaosTag.InnerSingleton;
}
// ********** End ScriptStruct FMSMassToChaosTag ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassPhysicsTypes_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMSMassPhysicsFragment::StaticStruct, Z_Construct_UScriptStruct_FMSMassPhysicsFragment_Statics::NewStructOps, TEXT("MSMassPhysicsFragment"), &Z_Registration_Info_UScriptStruct_FMSMassPhysicsFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSMassPhysicsFragment), 4029481231U) },
		{ FSharedCollisionSettingsFragment::StaticStruct, Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment_Statics::NewStructOps, TEXT("SharedCollisionSettingsFragment"), &Z_Registration_Info_UScriptStruct_FSharedCollisionSettingsFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedCollisionSettingsFragment), 1203121588U) },
		{ FMSSimulatesPhysicsTag::StaticStruct, Z_Construct_UScriptStruct_FMSSimulatesPhysicsTag_Statics::NewStructOps, TEXT("MSSimulatesPhysicsTag"), &Z_Registration_Info_UScriptStruct_FMSSimulatesPhysicsTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSSimulatesPhysicsTag), 1175226779U) },
		{ FMSUpdateKinematicFromSimulationTag::StaticStruct, Z_Construct_UScriptStruct_FMSUpdateKinematicFromSimulationTag_Statics::NewStructOps, TEXT("MSUpdateKinematicFromSimulationTag"), &Z_Registration_Info_UScriptStruct_FMSUpdateKinematicFromSimulationTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSUpdateKinematicFromSimulationTag), 2509018364U) },
		{ FMSChaosToMassTag::StaticStruct, Z_Construct_UScriptStruct_FMSChaosToMassTag_Statics::NewStructOps, TEXT("MSChaosToMassTag"), &Z_Registration_Info_UScriptStruct_FMSChaosToMassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSChaosToMassTag), 2361758088U) },
		{ FMSMassToChaosTag::StaticStruct, Z_Construct_UScriptStruct_FMSMassToChaosTag_Statics::NewStructOps, TEXT("MSMassToChaosTag"), &Z_Registration_Info_UScriptStruct_FMSMassToChaosTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSMassToChaosTag), 3536734463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassPhysicsTypes_h__Script_MassCommunitySample_3837379273(TEXT("/Script/MassCommunitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassPhysicsTypes_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassPhysicsTypes_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
