// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstancePreset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubstancePreset() {}

// ********** Begin Cross Module References ********************************************************
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstancePreset();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSubstancePreset **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSubstancePreset;
class UScriptStruct* FSubstancePreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSubstancePreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSubstancePreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstancePreset, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstancePreset"));
	}
	return Z_Registration_Info_UScriptStruct_FSubstancePreset.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSubstancePreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SubstancePreset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedPresetString_MetaData[] = {
		{ "Comment", "// Used to serialize the preset\n" },
		{ "ModuleRelativePath", "Classes/SubstancePreset.h" },
		{ "ToolTip", "Used to serialize the preset" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SavedPresetString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstancePreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewProp_SavedPresetString = { "SavedPresetString", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstancePreset, SavedPresetString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedPresetString_MetaData), NewProp_SavedPresetString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstancePreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewProp_SavedPresetString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstancePreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstancePreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	&NewStructOps,
	"SubstancePreset",
	Z_Construct_UScriptStruct_FSubstancePreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstancePreset_Statics::PropPointers),
	sizeof(FSubstancePreset),
	alignof(FSubstancePreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstancePreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubstancePreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubstancePreset()
{
	if (!Z_Registration_Info_UScriptStruct_FSubstancePreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSubstancePreset.InnerSingleton, Z_Construct_UScriptStruct_FSubstancePreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSubstancePreset.InnerSingleton;
}
// ********** End ScriptStruct FSubstancePreset ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstancePreset_h__Script_SubstanceCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubstancePreset::StaticStruct, Z_Construct_UScriptStruct_FSubstancePreset_Statics::NewStructOps, TEXT("SubstancePreset"), &Z_Registration_Info_UScriptStruct_FSubstancePreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstancePreset), 2740209611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstancePreset_h__Script_SubstanceCore_1857351805(TEXT("/Script/SubstanceCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstancePreset_h__Script_SubstanceCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstancePreset_h__Script_SubstanceCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
