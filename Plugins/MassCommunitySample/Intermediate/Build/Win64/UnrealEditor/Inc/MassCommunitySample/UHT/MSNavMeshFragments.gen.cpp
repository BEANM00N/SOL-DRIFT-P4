// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Navigation/MSNavMeshFragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSNavMeshFragments() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FNavMeshAIFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNavMeshAIFragment ************************************************
static_assert(std::is_polymorphic<FNavMeshAIFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FNavMeshAIFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNavMeshAIFragment;
class UScriptStruct* FNavMeshAIFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNavMeshAIFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNavMeshAIFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavMeshAIFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("NavMeshAIFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FNavMeshAIFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNavMeshAIFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Navigation/MSNavMeshFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavMeshAIFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavMeshAIFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"NavMeshAIFragment",
	nullptr,
	0,
	sizeof(FNavMeshAIFragment),
	alignof(FNavMeshAIFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavMeshAIFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavMeshAIFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavMeshAIFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FNavMeshAIFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNavMeshAIFragment.InnerSingleton, Z_Construct_UScriptStruct_FNavMeshAIFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNavMeshAIFragment.InnerSingleton;
}
// ********** End ScriptStruct FNavMeshAIFragment **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Navigation_MSNavMeshFragments_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavMeshAIFragment::StaticStruct, Z_Construct_UScriptStruct_FNavMeshAIFragment_Statics::NewStructOps, TEXT("NavMeshAIFragment"), &Z_Registration_Info_UScriptStruct_FNavMeshAIFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavMeshAIFragment), 13155197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Navigation_MSNavMeshFragments_h__Script_MassCommunitySample_2213189229(TEXT("/Script/MassCommunitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Navigation_MSNavMeshFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Navigation_MSNavMeshFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
