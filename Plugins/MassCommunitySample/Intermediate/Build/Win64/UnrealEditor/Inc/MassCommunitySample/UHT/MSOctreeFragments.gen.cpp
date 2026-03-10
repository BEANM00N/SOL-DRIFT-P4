// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Fragments/MSOctreeFragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSOctreeFragments() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSInOctreeGridTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSOctreeFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSSharedBaseBounds();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMSOctreeFragment *************************************************
static_assert(std::is_polymorphic<FMSOctreeFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMSOctreeFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSOctreeFragment;
class UScriptStruct* FMSOctreeFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSOctreeFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSOctreeFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSOctreeFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSOctreeFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMSOctreeFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSOctreeFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This entity's start location on our octree this frame\n" },
#endif
		{ "ModuleRelativePath", "Common/Fragments/MSOctreeFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This entity's start location on our octree this frame" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSOctreeFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSOctreeFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MSOctreeFragment",
	nullptr,
	0,
	sizeof(FMSOctreeFragment),
	alignof(FMSOctreeFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSOctreeFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSOctreeFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSOctreeFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMSOctreeFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSOctreeFragment.InnerSingleton, Z_Construct_UScriptStruct_FMSOctreeFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSOctreeFragment.InnerSingleton;
}
// ********** End ScriptStruct FMSOctreeFragment ***************************************************

// ********** Begin ScriptStruct FMSInOctreeGridTag ************************************************
static_assert(std::is_polymorphic<FMSInOctreeGridTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSInOctreeGridTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSInOctreeGridTag;
class UScriptStruct* FMSInOctreeGridTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSInOctreeGridTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSInOctreeGridTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSInOctreeGridTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSInOctreeGridTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSInOctreeGridTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSInOctreeGridTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// To indicate the entity is in the octree, it should be added internally by an observer  \n" },
#endif
		{ "ModuleRelativePath", "Common/Fragments/MSOctreeFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To indicate the entity is in the octree, it should be added internally by an observer" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSInOctreeGridTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSInOctreeGridTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSInOctreeGridTag",
	nullptr,
	0,
	sizeof(FMSInOctreeGridTag),
	alignof(FMSInOctreeGridTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSInOctreeGridTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSInOctreeGridTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSInOctreeGridTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSInOctreeGridTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSInOctreeGridTag.InnerSingleton, Z_Construct_UScriptStruct_FMSInOctreeGridTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSInOctreeGridTag.InnerSingleton;
}
// ********** End ScriptStruct FMSInOctreeGridTag **************************************************

// ********** Begin ScriptStruct FMSSharedBaseBounds ***********************************************
static_assert(std::is_polymorphic<FMSSharedBaseBounds>() == std::is_polymorphic<FMassConstSharedFragment>(), "USTRUCT FMSSharedBaseBounds cannot be polymorphic unless super FMassConstSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSSharedBaseBounds;
class UScriptStruct* FMSSharedBaseBounds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSSharedBaseBounds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSSharedBaseBounds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSSharedBaseBounds, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSSharedBaseBounds"));
	}
	return Z_Registration_Info_UScriptStruct_FMSSharedBaseBounds.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// experimental, using it to set pivot offsets to the octree for now\n" },
#endif
		{ "ModuleRelativePath", "Common/Fragments/MSOctreeFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "experimental, using it to set pivot offsets to the octree for now" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxSphereBounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This must hash unique or this will hash collide? I need to figure that out..\n" },
#endif
		{ "ModuleRelativePath", "Common/Fragments/MSOctreeFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This must hash unique or this will hash collide? I need to figure that out.." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxSphereBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSSharedBaseBounds>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::NewProp_BoxSphereBounds = { "BoxSphereBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSSharedBaseBounds, BoxSphereBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxSphereBounds_MetaData), NewProp_BoxSphereBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::NewProp_BoxSphereBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassConstSharedFragment,
	&NewStructOps,
	"MSSharedBaseBounds",
	Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::PropPointers),
	sizeof(FMSSharedBaseBounds),
	alignof(FMSSharedBaseBounds),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSSharedBaseBounds()
{
	if (!Z_Registration_Info_UScriptStruct_FMSSharedBaseBounds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSSharedBaseBounds.InnerSingleton, Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSSharedBaseBounds.InnerSingleton;
}
// ********** End ScriptStruct FMSSharedBaseBounds *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Fragments_MSOctreeFragments_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMSOctreeFragment::StaticStruct, Z_Construct_UScriptStruct_FMSOctreeFragment_Statics::NewStructOps, TEXT("MSOctreeFragment"), &Z_Registration_Info_UScriptStruct_FMSOctreeFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSOctreeFragment), 1623522345U) },
		{ FMSInOctreeGridTag::StaticStruct, Z_Construct_UScriptStruct_FMSInOctreeGridTag_Statics::NewStructOps, TEXT("MSInOctreeGridTag"), &Z_Registration_Info_UScriptStruct_FMSInOctreeGridTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSInOctreeGridTag), 2023674268U) },
		{ FMSSharedBaseBounds::StaticStruct, Z_Construct_UScriptStruct_FMSSharedBaseBounds_Statics::NewStructOps, TEXT("MSSharedBaseBounds"), &Z_Registration_Info_UScriptStruct_FMSSharedBaseBounds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSSharedBaseBounds), 426855983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Fragments_MSOctreeFragments_h__Script_MassCommunitySample_662997964(TEXT("/Script/MassCommunitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Fragments_MSOctreeFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Fragments_MSOctreeFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
