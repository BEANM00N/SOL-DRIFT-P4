// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Physics/MSMassCollision.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSMassCollision() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSHitResultFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSSharedStaticMesh();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMSSharedStaticMesh ***********************************************
static_assert(std::is_polymorphic<FMSSharedStaticMesh>() == std::is_polymorphic<FMassConstSharedFragment>(), "USTRUCT FMSSharedStaticMesh cannot be polymorphic unless super FMassConstSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSSharedStaticMesh;
class UScriptStruct* FMSSharedStaticMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSSharedStaticMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSSharedStaticMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSSharedStaticMesh, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSSharedStaticMesh"));
	}
	return Z_Registration_Info_UScriptStruct_FMSSharedStaticMesh.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Experimental/Physics/MSMassCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "MSSharedStaticMesh" },
		{ "ModuleRelativePath", "Experimental/Physics/MSMassCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSSharedStaticMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSSharedStaticMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::NewProp_StaticMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassConstSharedFragment,
	&NewStructOps,
	"MSSharedStaticMesh",
	Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::PropPointers),
	sizeof(FMSSharedStaticMesh),
	alignof(FMSSharedStaticMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSSharedStaticMesh()
{
	if (!Z_Registration_Info_UScriptStruct_FMSSharedStaticMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSSharedStaticMesh.InnerSingleton, Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSSharedStaticMesh.InnerSingleton;
}
// ********** End ScriptStruct FMSSharedStaticMesh *************************************************

// ********** Begin ScriptStruct FMSHitResultFragment **********************************************
static_assert(std::is_polymorphic<FMSHitResultFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMSHitResultFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSHitResultFragment;
class UScriptStruct* FMSHitResultFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSHitResultFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSHitResultFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSHitResultFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSHitResultFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMSHitResultFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSHitResultFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Fragment data about THIS mass entity hitting something else\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSMassCollision.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fragment data about THIS mass entity hitting something else" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "Category", "MSHitResultFragment" },
		{ "ModuleRelativePath", "Experimental/Physics/MSMassCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSHitResultFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSHitResultFragment, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MSHitResultFragment",
	Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::PropPointers),
	sizeof(FMSHitResultFragment),
	alignof(FMSHitResultFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSHitResultFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMSHitResultFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSHitResultFragment.InnerSingleton, Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSHitResultFragment.InnerSingleton;
}
// ********** End ScriptStruct FMSHitResultFragment ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassCollision_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMSSharedStaticMesh::StaticStruct, Z_Construct_UScriptStruct_FMSSharedStaticMesh_Statics::NewStructOps, TEXT("MSSharedStaticMesh"), &Z_Registration_Info_UScriptStruct_FMSSharedStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSSharedStaticMesh), 1586069186U) },
		{ FMSHitResultFragment::StaticStruct, Z_Construct_UScriptStruct_FMSHitResultFragment_Statics::NewStructOps, TEXT("MSHitResultFragment"), &Z_Registration_Info_UScriptStruct_FMSHitResultFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSHitResultFragment), 2568008827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassCollision_h__Script_MassCommunitySample_3449535845(TEXT("/Script/MassCommunitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassCollision_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassCollision_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
