// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Navigation/MSNavMeshMoveTask.h"
#include "MassNavigationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSNavMeshMoveTask() {}

// ********** Begin Cross Module References ********************************************************
MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeTaskBase();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius();
MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassTargetLocation();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMSMassFindNavMeshPathTargetInstanceData **************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData;
class UScriptStruct* FMSMassFindNavMeshPathTargetInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSMassFindNavMeshPathTargetInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Navigation/MSNavMeshMoveTask.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTargetLocation_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Experimental/Navigation/MSNavMeshMoveTask.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveTargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSMassFindNavMeshPathTargetInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::NewProp_MoveTargetLocation = { "MoveTargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSMassFindNavMeshPathTargetInstanceData, MoveTargetLocation), Z_Construct_UScriptStruct_FMassTargetLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTargetLocation_MetaData), NewProp_MoveTargetLocation_MetaData) }; // 3297882087
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::NewProp_MoveTargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	nullptr,
	&NewStructOps,
	"MSMassFindNavMeshPathTargetInstanceData",
	Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::PropPointers),
	sizeof(FMSMassFindNavMeshPathTargetInstanceData),
	alignof(FMSMassFindNavMeshPathTargetInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData.InnerSingleton;
}
// ********** End ScriptStruct FMSMassFindNavMeshPathTargetInstanceData ****************************

// ********** Begin ScriptStruct FMSMassFindNavMeshPathWanderTargetInRadius ************************
static_assert(std::is_polymorphic<FMSMassFindNavMeshPathWanderTargetInRadius>() == std::is_polymorphic<FMassStateTreeTaskBase>(), "USTRUCT FMSMassFindNavMeshPathWanderTargetInRadius cannot be polymorphic unless super FMassStateTreeTaskBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius;
class UScriptStruct* FMSMassFindNavMeshPathWanderTargetInRadius::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSMassFindNavMeshPathWanderTargetInRadius"));
	}
	return Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A simple example of how to execute a navmesh query inside of state tree to produce data for a MassTargetLocation\n" },
#endif
		{ "DisplayName", "Find NavMesh Wander Target In Radius" },
		{ "ModuleRelativePath", "Experimental/Navigation/MSNavMeshMoveTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple example of how to execute a navmesh query inside of state tree to produce data for a MassTargetLocation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "MSMassFindNavMeshPathWanderTargetInRadius" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far to search for a random point\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Navigation/MSNavMeshMoveTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far to search for a random point" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSMassFindNavMeshPathWanderTargetInRadius>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSMassFindNavMeshPathWanderTargetInRadius, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassStateTreeTaskBase,
	&NewStructOps,
	"MSMassFindNavMeshPathWanderTargetInRadius",
	Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::PropPointers),
	sizeof(FMSMassFindNavMeshPathWanderTargetInRadius),
	alignof(FMSMassFindNavMeshPathWanderTargetInRadius),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius.InnerSingleton, Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius.InnerSingleton;
}
// ********** End ScriptStruct FMSMassFindNavMeshPathWanderTargetInRadius **************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Navigation_MSNavMeshMoveTask_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMSMassFindNavMeshPathTargetInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData_Statics::NewStructOps, TEXT("MSMassFindNavMeshPathTargetInstanceData"), &Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathTargetInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSMassFindNavMeshPathTargetInstanceData), 1881631477U) },
		{ FMSMassFindNavMeshPathWanderTargetInRadius::StaticStruct, Z_Construct_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius_Statics::NewStructOps, TEXT("MSMassFindNavMeshPathWanderTargetInRadius"), &Z_Registration_Info_UScriptStruct_FMSMassFindNavMeshPathWanderTargetInRadius, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSMassFindNavMeshPathWanderTargetInRadius), 3460817266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Navigation_MSNavMeshMoveTask_h__Script_MassCommunitySample_925408662(TEXT("/Script/MassCommunitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Navigation_MSNavMeshMoveTask_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Navigation_MSNavMeshMoveTask_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
