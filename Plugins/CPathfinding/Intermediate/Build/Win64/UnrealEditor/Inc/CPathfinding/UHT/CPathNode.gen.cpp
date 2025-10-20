// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPathNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPathNode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CPATHFINDING_API UEnum* Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum();
CPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FCPathNode();
CPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FCPathResult();
UPackage* Z_Construct_UPackage__Script_CPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCPathNode ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCPathNode;
class UScriptStruct* FCPathNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCPathNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCPathNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCPathNode, (UObject*)Z_Construct_UPackage__Script_CPathfinding(), TEXT("CPathNode"));
	}
	return Z_Registration_Info_UScriptStruct_FCPathNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCPathNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CPathNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "Category", "CPath" },
		{ "ModuleRelativePath", "Public/CPathNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "CPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Normalized vector pointing to next node. ZeroVector on last node.\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Normalized vector pointing to next node. ZeroVector on last node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCPathNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCPathNode_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCPathNode, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCPathNode_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCPathNode, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCPathNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCPathNode_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCPathNode_Statics::NewProp_Normal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCPathNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCPathNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CPathfinding,
	nullptr,
	&NewStructOps,
	"CPathNode",
	Z_Construct_UScriptStruct_FCPathNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCPathNode_Statics::PropPointers),
	sizeof(FCPathNode),
	alignof(FCPathNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCPathNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCPathNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCPathNode()
{
	if (!Z_Registration_Info_UScriptStruct_FCPathNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCPathNode.InnerSingleton, Z_Construct_UScriptStruct_FCPathNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCPathNode.InnerSingleton;
}
// ********** End ScriptStruct FCPathNode **********************************************************

// ********** Begin ScriptStruct FCPathResult ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCPathResult;
class UScriptStruct* FCPathResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCPathResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCPathResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCPathResult, (UObject*)Z_Construct_UPackage__Script_CPathfinding(), TEXT("CPathResult"));
	}
	return Z_Registration_Info_UScriptStruct_FCPathResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCPathResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data returned by FindPath call\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data returned by FindPath call" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCPathResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCPathResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CPathfinding,
	nullptr,
	&NewStructOps,
	"CPathResult",
	nullptr,
	0,
	sizeof(FCPathResult),
	alignof(FCPathResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCPathResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCPathResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCPathResult()
{
	if (!Z_Registration_Info_UScriptStruct_FCPathResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCPathResult.InnerSingleton, Z_Construct_UScriptStruct_FCPathResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCPathResult.InnerSingleton;
}
// ********** End ScriptStruct FCPathResult ********************************************************

// ********** Begin Enum BranchFailSuccessEnum *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_BranchFailSuccessEnum;
static UEnum* BranchFailSuccessEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_BranchFailSuccessEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_BranchFailSuccessEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum, (UObject*)Z_Construct_UPackage__Script_CPathfinding(), TEXT("BranchFailSuccessEnum"));
	}
	return Z_Registration_Info_UEnum_BranchFailSuccessEnum.OuterSingleton;
}
template<> CPATHFINDING_API UEnum* StaticEnum<BranchFailSuccessEnum>()
{
	return BranchFailSuccessEnum_StaticEnum();
}
struct Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failure.Name", "Failure" },
		{ "ModuleRelativePath", "Public/CPathNode.h" },
		{ "Success.Name", "Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Success", (int64)Success },
		{ "Failure", (int64)Failure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CPathfinding,
	nullptr,
	"BranchFailSuccessEnum",
	"BranchFailSuccessEnum",
	Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum()
{
	if (!Z_Registration_Info_UEnum_BranchFailSuccessEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_BranchFailSuccessEnum.InnerSingleton, Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_BranchFailSuccessEnum.InnerSingleton;
}
// ********** End Enum BranchFailSuccessEnum *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathNode_h__Script_CPathfinding_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ BranchFailSuccessEnum_StaticEnum, TEXT("BranchFailSuccessEnum"), &Z_Registration_Info_UEnum_BranchFailSuccessEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 701982543U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCPathNode::StaticStruct, Z_Construct_UScriptStruct_FCPathNode_Statics::NewStructOps, TEXT("CPathNode"), &Z_Registration_Info_UScriptStruct_FCPathNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCPathNode), 1717991457U) },
		{ FCPathResult::StaticStruct, Z_Construct_UScriptStruct_FCPathResult_Statics::NewStructOps, TEXT("CPathResult"), &Z_Registration_Info_UScriptStruct_FCPathResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCPathResult), 149891058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathNode_h__Script_CPathfinding_2174700406(TEXT("/Script/CPathfinding"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathNode_h__Script_CPathfinding_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathNode_h__Script_CPathfinding_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathNode_h__Script_CPathfinding_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathNode_h__Script_CPathfinding_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
