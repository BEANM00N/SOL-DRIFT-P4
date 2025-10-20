// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PjcSubsystem.h"
#include "PjcTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePjcSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
PJC_API UClass* Z_Construct_UClass_UPjcSubsystem();
PJC_API UClass* Z_Construct_UClass_UPjcSubsystem_NoRegister();
PJC_API UScriptStruct* Z_Construct_UScriptStruct_FPjcAssetIndirectInfo();
UPackage* Z_Construct_UPackage__Script_Pjc();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPjcSubsystem Function AssetIsBlueprint **********************************
struct Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventAssetIsBlueprint_Parms
	{
		FAssetData InAsset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Checks if given asset is blueprint or not\n\x09 * @param InAsset FAssetData\n\x09 * @return bool\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Checks if given asset is blueprint or not\n@param InAsset FAssetData\n@return bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventAssetIsBlueprint_Parms, InAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAsset_MetaData), NewProp_InAsset_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PjcSubsystem_eventAssetIsBlueprint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventAssetIsBlueprint_Parms), &Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::NewProp_InAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "AssetIsBlueprint", Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::PjcSubsystem_eventAssetIsBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::PjcSubsystem_eventAssetIsBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execAssetIsBlueprint)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPjcSubsystem::AssetIsBlueprint(Z_Param_Out_InAsset);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function AssetIsBlueprint ************************************

// ********** Begin Class UPjcSubsystem Function AssetIsCircular ***********************************
struct Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventAssetIsCircular_Parms
	{
		FAssetData InAsset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Checks if given asset has circular dependencies or not\n\x09 * @param InAsset FAssetData\n\x09 * @return bool\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Checks if given asset has circular dependencies or not\n@param InAsset FAssetData\n@return bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventAssetIsCircular_Parms, InAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAsset_MetaData), NewProp_InAsset_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PjcSubsystem_eventAssetIsCircular_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventAssetIsCircular_Parms), &Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::NewProp_InAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "AssetIsCircular", Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::PjcSubsystem_eventAssetIsCircular_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::PjcSubsystem_eventAssetIsCircular_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execAssetIsCircular)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPjcSubsystem::AssetIsCircular(Z_Param_Out_InAsset);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function AssetIsCircular *************************************

// ********** Begin Class UPjcSubsystem Function AssetIsExtReferenced ******************************
struct Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventAssetIsExtReferenced_Parms
	{
		FAssetData InAsset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Checks if given asset has external referencers outside Content folder or not\n\x09 * @param InAsset FAssetData\n\x09 * @return bool\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Checks if given asset has external referencers outside Content folder or not\n@param InAsset FAssetData\n@return bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventAssetIsExtReferenced_Parms, InAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAsset_MetaData), NewProp_InAsset_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PjcSubsystem_eventAssetIsExtReferenced_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventAssetIsExtReferenced_Parms), &Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::NewProp_InAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "AssetIsExtReferenced", Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::PjcSubsystem_eventAssetIsExtReferenced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::PjcSubsystem_eventAssetIsExtReferenced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execAssetIsExtReferenced)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPjcSubsystem::AssetIsExtReferenced(Z_Param_Out_InAsset);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function AssetIsExtReferenced ********************************

// ********** Begin Class UPjcSubsystem Function DeleteAssetsUnused ********************************
struct Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics
{
	struct PjcSubsystem_eventDeleteAssetsUnused_Parms
	{
		bool bShowSlowTask;
		bool bShowEditorNotification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Delete all unused assets in project. This does not delete excluded assets.\n\x09 * @param bShowSlowTask bool\n\x09 * @param bShowEditorNotification bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowEditorNotification", "false" },
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Delete all unused assets in project. This does not delete excluded assets.\n@param bShowSlowTask bool\n@param bShowEditorNotification bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEditorNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static void NewProp_bShowEditorNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEditorNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventDeleteAssetsUnused_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventDeleteAssetsUnused_Parms), &Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::NewProp_bShowEditorNotification_SetBit(void* Obj)
{
	((PjcSubsystem_eventDeleteAssetsUnused_Parms*)Obj)->bShowEditorNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::NewProp_bShowEditorNotification = { "bShowEditorNotification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventDeleteAssetsUnused_Parms), &Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::NewProp_bShowEditorNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEditorNotification_MetaData), NewProp_bShowEditorNotification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::NewProp_bShowSlowTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::NewProp_bShowEditorNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "DeleteAssetsUnused", Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::PjcSubsystem_eventDeleteAssetsUnused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::PjcSubsystem_eventDeleteAssetsUnused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execDeleteAssetsUnused)
{
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_GET_UBOOL(Z_Param_bShowEditorNotification);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::DeleteAssetsUnused(Z_Param_bShowSlowTask,Z_Param_bShowEditorNotification);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function DeleteAssetsUnused **********************************

// ********** Begin Class UPjcSubsystem Function DeleteFilesCorrupted ******************************
struct Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics
{
	struct PjcSubsystem_eventDeleteFilesCorrupted_Parms
	{
		bool bShowSlowTask;
		bool bShowEditorNotification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Delete all corrupted asset files in project\n\x09 * @param bShowSlowTask bool\n\x09 * @param bShowEditorNotification bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowEditorNotification", "false" },
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Delete all corrupted asset files in project\n@param bShowSlowTask bool\n@param bShowEditorNotification bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEditorNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static void NewProp_bShowEditorNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEditorNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventDeleteFilesCorrupted_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventDeleteFilesCorrupted_Parms), &Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::NewProp_bShowEditorNotification_SetBit(void* Obj)
{
	((PjcSubsystem_eventDeleteFilesCorrupted_Parms*)Obj)->bShowEditorNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::NewProp_bShowEditorNotification = { "bShowEditorNotification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventDeleteFilesCorrupted_Parms), &Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::NewProp_bShowEditorNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEditorNotification_MetaData), NewProp_bShowEditorNotification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::NewProp_bShowSlowTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::NewProp_bShowEditorNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "DeleteFilesCorrupted", Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::PjcSubsystem_eventDeleteFilesCorrupted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::PjcSubsystem_eventDeleteFilesCorrupted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execDeleteFilesCorrupted)
{
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_GET_UBOOL(Z_Param_bShowEditorNotification);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::DeleteFilesCorrupted(Z_Param_bShowSlowTask,Z_Param_bShowEditorNotification);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function DeleteFilesCorrupted ********************************

// ********** Begin Class UPjcSubsystem Function DeleteFilesExternal *******************************
struct Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics
{
	struct PjcSubsystem_eventDeleteFilesExternal_Parms
	{
		bool bShowSlowTask;
		bool bShowEditorNotification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Delete all external files in project. This does not delete excluded files.\n\x09 * @param bShowSlowTask bool\n\x09 * @param bShowEditorNotification bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowEditorNotification", "false" },
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Delete all external files in project. This does not delete excluded files.\n@param bShowSlowTask bool\n@param bShowEditorNotification bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEditorNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static void NewProp_bShowEditorNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEditorNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventDeleteFilesExternal_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventDeleteFilesExternal_Parms), &Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::NewProp_bShowEditorNotification_SetBit(void* Obj)
{
	((PjcSubsystem_eventDeleteFilesExternal_Parms*)Obj)->bShowEditorNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::NewProp_bShowEditorNotification = { "bShowEditorNotification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventDeleteFilesExternal_Parms), &Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::NewProp_bShowEditorNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEditorNotification_MetaData), NewProp_bShowEditorNotification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::NewProp_bShowSlowTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::NewProp_bShowEditorNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "DeleteFilesExternal", Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::PjcSubsystem_eventDeleteFilesExternal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::PjcSubsystem_eventDeleteFilesExternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execDeleteFilesExternal)
{
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_GET_UBOOL(Z_Param_bShowEditorNotification);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::DeleteFilesExternal(Z_Param_bShowSlowTask,Z_Param_bShowEditorNotification);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function DeleteFilesExternal *********************************

// ********** Begin Class UPjcSubsystem Function DeleteFoldersEmpty ********************************
struct Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics
{
	struct PjcSubsystem_eventDeleteFoldersEmpty_Parms
	{
		bool bShowSlowTask;
		bool bShowEditorNotification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Delete all empty folders in project\n\x09 * @param bShowSlowTask bool\n\x09 * @param bShowEditorNotification bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowEditorNotification", "false" },
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Delete all empty folders in project\n@param bShowSlowTask bool\n@param bShowEditorNotification bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowEditorNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static void NewProp_bShowEditorNotification_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEditorNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventDeleteFoldersEmpty_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventDeleteFoldersEmpty_Parms), &Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::NewProp_bShowEditorNotification_SetBit(void* Obj)
{
	((PjcSubsystem_eventDeleteFoldersEmpty_Parms*)Obj)->bShowEditorNotification = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::NewProp_bShowEditorNotification = { "bShowEditorNotification", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventDeleteFoldersEmpty_Parms), &Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::NewProp_bShowEditorNotification_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowEditorNotification_MetaData), NewProp_bShowEditorNotification_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::NewProp_bShowSlowTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::NewProp_bShowEditorNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "DeleteFoldersEmpty", Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::PjcSubsystem_eventDeleteFoldersEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::PjcSubsystem_eventDeleteFoldersEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execDeleteFoldersEmpty)
{
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_GET_UBOOL(Z_Param_bShowEditorNotification);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::DeleteFoldersEmpty(Z_Param_bShowSlowTask,Z_Param_bShowEditorNotification);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function DeleteFoldersEmpty **********************************

// ********** Begin Class UPjcSubsystem Function EditorIsInPlayMode ********************************
struct Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics
{
	struct PjcSubsystem_eventEditorIsInPlayMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Checks if editor is in play mode or simulation or not\n\x09 * @return bool\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Checks if editor is in play mode or simulation or not\n@return bool" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PjcSubsystem_eventEditorIsInPlayMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventEditorIsInPlayMode_Parms), &Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "EditorIsInPlayMode", Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::PjcSubsystem_eventEditorIsInPlayMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::PjcSubsystem_eventEditorIsInPlayMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execEditorIsInPlayMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPjcSubsystem::EditorIsInPlayMode();
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function EditorIsInPlayMode **********************************

// ********** Begin Class UPjcSubsystem Function FixProjectRedirectors *****************************
struct Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventFixProjectRedirectors_Parms
	{
		TArray<FAssetData> Redirectors;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Fixup given redirector assets\n\x09 * @param Redirectors TArray<FAssetData>\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Fixup given redirector assets\n@param Redirectors TArray<FAssetData>\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Redirectors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Redirectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Redirectors;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::NewProp_Redirectors_Inner = { "Redirectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::NewProp_Redirectors = { "Redirectors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventFixProjectRedirectors_Parms, Redirectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Redirectors_MetaData), NewProp_Redirectors_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventFixProjectRedirectors_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventFixProjectRedirectors_Parms), &Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::NewProp_Redirectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::NewProp_Redirectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "FixProjectRedirectors", Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::PjcSubsystem_eventFixProjectRedirectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::PjcSubsystem_eventFixProjectRedirectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execFixProjectRedirectors)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Redirectors);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::FixProjectRedirectors(Z_Param_Out_Redirectors,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function FixProjectRedirectors *******************************

// ********** Begin Class UPjcSubsystem Function GetAssetExactClassName ****************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetExactClassName_Parms
	{
		FAssetData InAsset;
		FTopLevelAssetPath ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns asset exact class name, if its blueprint it will return generated class name\n\x09 * @param InAsset FAssetData\n\x09 * @return FName \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns asset exact class name, if its blueprint it will return generated class name\n@param InAsset FAssetData\n@return FName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetExactClassName_Parms, InAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAsset_MetaData), NewProp_InAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetExactClassName_Parms, ReturnValue), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::NewProp_InAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetExactClassName", Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::PjcSubsystem_eventGetAssetExactClassName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::PjcSubsystem_eventGetAssetExactClassName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetExactClassName)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTopLevelAssetPath*)Z_Param__Result=UPjcSubsystem::GetAssetExactClassName(Z_Param_Out_InAsset);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetExactClassName ******************************

// ********** Begin Class UPjcSubsystem Function GetAssetsAll **************************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsAll_Parms
	{
		TArray<FAssetData> Assets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all assets in project (particularly Content folder)\n\x09 * @param Assets TArray<FAssetData>\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all assets in project (particularly Content folder)\n@param Assets TArray<FAssetData>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsAll_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::NewProp_Assets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsAll", Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::PjcSubsystem_eventGetAssetsAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::PjcSubsystem_eventGetAssetsAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsAll)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetAssetsAll(Z_Param_Out_Assets);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsAll ****************************************

// ********** Begin Class UPjcSubsystem Function GetAssetsCircular *********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsCircular_Parms
	{
		TArray<FAssetData> Assets;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns assets that have circular dependencies\n\x09 * @param Assets TArray<FAssetData>\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns assets that have circular dependencies\n@param Assets TArray<FAssetData>\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsCircular_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetAssetsCircular_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetAssetsCircular_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsCircular", Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::PjcSubsystem_eventGetAssetsCircular_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::PjcSubsystem_eventGetAssetsCircular_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsCircular)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetAssetsCircular(Z_Param_Out_Assets,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsCircular ***********************************

// ********** Begin Class UPjcSubsystem Function GetAssetsEditor ***********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsEditor_Parms
	{
		TArray<FAssetData> Assets;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns assets that are editor specific. Like Tutorial asset, EditorUtilityBlueprint or EditorUtilityWidgets.\n\x09 * @param Assets TArray<FAssetData>\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns assets that are editor specific. Like Tutorial asset, EditorUtilityBlueprint or EditorUtilityWidgets.\n@param Assets TArray<FAssetData>\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsEditor_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetAssetsEditor_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetAssetsEditor_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsEditor", Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::PjcSubsystem_eventGetAssetsEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::PjcSubsystem_eventGetAssetsEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsEditor)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetAssetsEditor(Z_Param_Out_Assets,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsEditor *************************************

// ********** Begin Class UPjcSubsystem Function GetAssetsExcluded *********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsExcluded_Parms
	{
		TArray<FAssetData> Assets;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all excluded assets in project\n\x09 * @param Assets TArray<FAssetData>\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all excluded assets in project\n@param Assets TArray<FAssetData>\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsExcluded_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetAssetsExcluded_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetAssetsExcluded_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsExcluded", Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::PjcSubsystem_eventGetAssetsExcluded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::PjcSubsystem_eventGetAssetsExcluded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsExcluded)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetAssetsExcluded(Z_Param_Out_Assets,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsExcluded ***********************************

// ********** Begin Class UPjcSubsystem Function GetAssetsExtReferenced ****************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsExtReferenced_Parms
	{
		TArray<FAssetData> Assets;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all assets that have external referencers outside Content folder\n\x09 * @param Assets TArray<FAssetData>\n\x09 *  @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all assets that have external referencers outside Content folder\n@param Assets TArray<FAssetData>\n @param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsExtReferenced_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetAssetsExtReferenced_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetAssetsExtReferenced_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsExtReferenced", Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::PjcSubsystem_eventGetAssetsExtReferenced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::PjcSubsystem_eventGetAssetsExtReferenced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsExtReferenced)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetAssetsExtReferenced(Z_Param_Out_Assets,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsExtReferenced ******************************

// ********** Begin Class UPjcSubsystem Function GetAssetsIndirect *********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsIndirect_Parms
	{
		TArray<FAssetData> Assets;
		TArray<FPjcAssetIndirectInfo> AssetsIndirectInfos;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns assets that used in source code or config files indirectly.\n\x09 * @param Assets TArray<FAssetData> - Assets\n\x09 * @param AssetsIndirectInfos TArray<FPjcAssetIndirectInfo> - Assets and their usage information\n\x09 * @param bShowSlowTask bool - Show slow task progress bar or not\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns assets that used in source code or config files indirectly.\n@param Assets TArray<FAssetData> - Assets\n@param AssetsIndirectInfos TArray<FPjcAssetIndirectInfo> - Assets and their usage information\n@param bShowSlowTask bool - Show slow task progress bar or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetsIndirectInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetsIndirectInfos;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsIndirect_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_AssetsIndirectInfos_Inner = { "AssetsIndirectInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPjcAssetIndirectInfo, METADATA_PARAMS(0, nullptr) }; // 1501831047
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_AssetsIndirectInfos = { "AssetsIndirectInfos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsIndirect_Parms, AssetsIndirectInfos), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1501831047
void Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetAssetsIndirect_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetAssetsIndirect_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_AssetsIndirectInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_AssetsIndirectInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsIndirect", Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::PjcSubsystem_eventGetAssetsIndirect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::PjcSubsystem_eventGetAssetsIndirect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsIndirect)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_GET_TARRAY_REF(FPjcAssetIndirectInfo,Z_Param_Out_AssetsIndirectInfos);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetAssetsIndirect(Z_Param_Out_Assets,Z_Param_Out_AssetsIndirectInfos,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsIndirect ***********************************

// ********** Begin Class UPjcSubsystem Function GetAssetSize **************************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetSize_Parms
	{
		FAssetData InAsset;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns given asset size on disk in bytes\n\x09 * @param InAsset FAssetData\n\x09 * @return int64\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns given asset size on disk in bytes\n@param InAsset FAssetData\n@return int64" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAsset;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetSize_Parms, InAsset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAsset_MetaData), NewProp_InAsset_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::NewProp_InAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetSize", Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::PjcSubsystem_eventGetAssetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::PjcSubsystem_eventGetAssetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetSize)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_InAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UPjcSubsystem::GetAssetSize(Z_Param_Out_InAsset);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetSize ****************************************

// ********** Begin Class UPjcSubsystem Function GetAssetsPrimary **********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsPrimary_Parms
	{
		TArray<FAssetData> Assets;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all primary and derived from primary assets in project. See AssetManager Settings for more info.\n\x09 * @param Assets TArray<FAssetData>\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all primary and derived from primary assets in project. See AssetManager Settings for more info.\n@param Assets TArray<FAssetData>\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsPrimary_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetAssetsPrimary_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetAssetsPrimary_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsPrimary", Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::PjcSubsystem_eventGetAssetsPrimary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::PjcSubsystem_eventGetAssetsPrimary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsPrimary)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetAssetsPrimary(Z_Param_Out_Assets,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsPrimary ************************************

// ********** Begin Class UPjcSubsystem Function GetAssetsTotalSize ********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsTotalSize_Parms
	{
		TArray<FAssetData> InAssets;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns total size of given assets in bytes\n\x09 * @param InAssets TArray<FAssetData>\n\x09 * @return int64\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns total size of given assets in bytes\n@param InAssets TArray<FAssetData>\n@return int64" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InAssets;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::NewProp_InAssets_Inner = { "InAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::NewProp_InAssets = { "InAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsTotalSize_Parms, InAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAssets_MetaData), NewProp_InAssets_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsTotalSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::NewProp_InAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::NewProp_InAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsTotalSize", Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::PjcSubsystem_eventGetAssetsTotalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::PjcSubsystem_eventGetAssetsTotalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsTotalSize)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_InAssets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UPjcSubsystem::GetAssetsTotalSize(Z_Param_Out_InAssets);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsTotalSize **********************************

// ********** Begin Class UPjcSubsystem Function GetAssetsUnused ***********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsUnused_Parms
	{
		TArray<FAssetData> Assets;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all unused assets in project\n\x09 * @param Assets TArray<FAssetData>\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all unused assets in project\n@param Assets TArray<FAssetData>\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsUnused_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetAssetsUnused_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetAssetsUnused_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsUnused", Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::PjcSubsystem_eventGetAssetsUnused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::PjcSubsystem_eventGetAssetsUnused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsUnused)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetAssetsUnused(Z_Param_Out_Assets,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsUnused *************************************

// ********** Begin Class UPjcSubsystem Function GetAssetsUsed *************************************
struct Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetAssetsUsed_Parms
	{
		TArray<FAssetData> Assets;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all used assets in project\n\x09 * @param Assets TArray<FAssetData>\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all used assets in project\n@param Assets TArray<FAssetData>\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetAssetsUsed_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetAssetsUsed_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetAssetsUsed_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetAssetsUsed", Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::PjcSubsystem_eventGetAssetsUsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::PjcSubsystem_eventGetAssetsUsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetAssetsUsed)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetAssetsUsed(Z_Param_Out_Assets,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetAssetsUsed ***************************************

// ********** Begin Class UPjcSubsystem Function GetClassNamesEditor *******************************
struct Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetClassNamesEditor_Parms
	{
		TSet<FTopLevelAssetPath> ClassNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all editor assets class names\n\x09 * @param ClassNames TSet<FName>\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all editor assets class names\n@param ClassNames TSet<FName>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClassNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::NewProp_ClassNames_ElementProp = { "ClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FTopLevelAssetPath>, "The structure 'FTopLevelAssetPath' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::NewProp_ClassNames = { "ClassNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetClassNamesEditor_Parms, ClassNames), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::NewProp_ClassNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::NewProp_ClassNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetClassNamesEditor", Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::PjcSubsystem_eventGetClassNamesEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::PjcSubsystem_eventGetClassNamesEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetClassNamesEditor)
{
	P_GET_TSET_REF(FTopLevelAssetPath,Z_Param_Out_ClassNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetClassNamesEditor(Z_Param_Out_ClassNames);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetClassNamesEditor *********************************

// ********** Begin Class UPjcSubsystem Function GetClassNamesExcluded *****************************
struct Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetClassNamesExcluded_Parms
	{
		TSet<FTopLevelAssetPath> ClassNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all excluded assets class names\n\x09 * @param ClassNames TSet<FName>\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all excluded assets class names\n@param ClassNames TSet<FName>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClassNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::NewProp_ClassNames_ElementProp = { "ClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FTopLevelAssetPath>, "The structure 'FTopLevelAssetPath' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::NewProp_ClassNames = { "ClassNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetClassNamesExcluded_Parms, ClassNames), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::NewProp_ClassNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::NewProp_ClassNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetClassNamesExcluded", Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::PjcSubsystem_eventGetClassNamesExcluded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::PjcSubsystem_eventGetClassNamesExcluded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetClassNamesExcluded)
{
	P_GET_TSET_REF(FTopLevelAssetPath,Z_Param_Out_ClassNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetClassNamesExcluded(Z_Param_Out_ClassNames);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetClassNamesExcluded *******************************

// ********** Begin Class UPjcSubsystem Function GetClassNamesPrimary ******************************
struct Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetClassNamesPrimary_Parms
	{
		TSet<FTopLevelAssetPath> ClassNames;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all primary assets class names\n\x09 * @param ClassNames TSet<FName>\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all primary assets class names\n@param ClassNames TSet<FName>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassNames_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ClassNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::NewProp_ClassNames_ElementProp = { "ClassNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FTopLevelAssetPath>, "The structure 'FTopLevelAssetPath' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::NewProp_ClassNames = { "ClassNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetClassNamesPrimary_Parms, ClassNames), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::NewProp_ClassNames_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::NewProp_ClassNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetClassNamesPrimary", Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::PjcSubsystem_eventGetClassNamesPrimary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::PjcSubsystem_eventGetClassNamesPrimary_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetClassNamesPrimary)
{
	P_GET_TSET_REF(FTopLevelAssetPath,Z_Param_Out_ClassNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetClassNamesPrimary(Z_Param_Out_ClassNames);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetClassNamesPrimary ********************************

// ********** Begin Class UPjcSubsystem Function GetFiles ******************************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics
{
	struct PjcSubsystem_eventGetFiles_Parms
	{
		FString InSearchPath;
		bool bSearchRecursive;
		TArray<FString> OutFiles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns list of files inside given path with specified settings\n\x09 * @param InSearchPath FString\n\x09 * @param bSearchRecursive bool\n\x09 * @param OutFiles\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns list of files inside given path with specified settings\n@param InSearchPath FString\n@param bSearchRecursive bool\n@param OutFiles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSearchPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSearchRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSearchPath;
	static void NewProp_bSearchRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchRecursive;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_InSearchPath = { "InSearchPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFiles_Parms, InSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSearchPath_MetaData), NewProp_InSearchPath_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_bSearchRecursive_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetFiles_Parms*)Obj)->bSearchRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_bSearchRecursive = { "bSearchRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetFiles_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_bSearchRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSearchRecursive_MetaData), NewProp_bSearchRecursive_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_OutFiles_Inner = { "OutFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_OutFiles = { "OutFiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFiles_Parms, OutFiles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_InSearchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_bSearchRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_OutFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::NewProp_OutFiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFiles", Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::PjcSubsystem_eventGetFiles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::PjcSubsystem_eventGetFiles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFiles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFiles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFiles)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSearchPath);
	P_GET_UBOOL(Z_Param_bSearchRecursive);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetFiles(Z_Param_InSearchPath,Z_Param_bSearchRecursive,Z_Param_Out_OutFiles);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFiles ********************************************

// ********** Begin Class UPjcSubsystem Function GetFilesByExt *************************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics
{
	struct PjcSubsystem_eventGetFilesByExt_Parms
	{
		FString InSearchPath;
		bool bSearchRecursive;
		bool bExtSearchInvert;
		TSet<FString> InExtensions;
		TArray<FString> OutFiles;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns list of files inside given path with specified file extension settings\n\x09 * @param InSearchPath FString\n\x09 * @param bSearchRecursive bool\n\x09 * @param bExtSearchInvert bool\n\x09 * @param InExtensions TSet<FString>\n\x09 * @param OutFiles\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns list of files inside given path with specified file extension settings\n@param InSearchPath FString\n@param bSearchRecursive bool\n@param bExtSearchInvert bool\n@param InExtensions TSet<FString>\n@param OutFiles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSearchPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSearchRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtSearchInvert_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InExtensions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSearchPath;
	static void NewProp_bSearchRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchRecursive;
	static void NewProp_bExtSearchInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtSearchInvert;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InExtensions_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InExtensions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFiles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_InSearchPath = { "InSearchPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFilesByExt_Parms, InSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSearchPath_MetaData), NewProp_InSearchPath_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_bSearchRecursive_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetFilesByExt_Parms*)Obj)->bSearchRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_bSearchRecursive = { "bSearchRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetFilesByExt_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_bSearchRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSearchRecursive_MetaData), NewProp_bSearchRecursive_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_bExtSearchInvert_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetFilesByExt_Parms*)Obj)->bExtSearchInvert = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_bExtSearchInvert = { "bExtSearchInvert", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetFilesByExt_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_bExtSearchInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtSearchInvert_MetaData), NewProp_bExtSearchInvert_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_InExtensions_ElementProp = { "InExtensions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_InExtensions = { "InExtensions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFilesByExt_Parms, InExtensions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InExtensions_MetaData), NewProp_InExtensions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_OutFiles_Inner = { "OutFiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_OutFiles = { "OutFiles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFilesByExt_Parms, OutFiles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_InSearchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_bSearchRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_bExtSearchInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_InExtensions_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_InExtensions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_OutFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::NewProp_OutFiles,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFilesByExt", Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::PjcSubsystem_eventGetFilesByExt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::PjcSubsystem_eventGetFilesByExt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFilesByExt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSearchPath);
	P_GET_UBOOL(Z_Param_bSearchRecursive);
	P_GET_UBOOL(Z_Param_bExtSearchInvert);
	P_GET_TSET_REF(FString,Z_Param_Out_InExtensions);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFiles);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetFilesByExt(Z_Param_InSearchPath,Z_Param_bSearchRecursive,Z_Param_bExtSearchInvert,Z_Param_Out_InExtensions,Z_Param_Out_OutFiles);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFilesByExt ***************************************

// ********** Begin Class UPjcSubsystem Function GetFilesCorrupted *********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics
{
	struct PjcSubsystem_eventGetFilesCorrupted_Parms
	{
		TArray<FString> Files;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all corrupted asset files in project\n\x09 * @param Files\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all corrupted asset files in project\n@param Files\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFilesCorrupted_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetFilesCorrupted_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetFilesCorrupted_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::NewProp_Files_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::NewProp_Files,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFilesCorrupted", Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::PjcSubsystem_eventGetFilesCorrupted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::PjcSubsystem_eventGetFilesCorrupted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFilesCorrupted)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetFilesCorrupted(Z_Param_Out_Files,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFilesCorrupted ***********************************

// ********** Begin Class UPjcSubsystem Function GetFilesExternalAll *******************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics
{
	struct PjcSubsystem_eventGetFilesExternalAll_Parms
	{
		TArray<FString> Files;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all external files in project. Files that dont .uasset or .umap extensions\n\x09 * @param Files\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all external files in project. Files that dont .uasset or .umap extensions\n@param Files" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFilesExternalAll_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::NewProp_Files_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::NewProp_Files,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFilesExternalAll", Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::PjcSubsystem_eventGetFilesExternalAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::PjcSubsystem_eventGetFilesExternalAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFilesExternalAll)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetFilesExternalAll(Z_Param_Out_Files);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFilesExternalAll *********************************

// ********** Begin Class UPjcSubsystem Function GetFilesExternalExcluded **************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics
{
	struct PjcSubsystem_eventGetFilesExternalExcluded_Parms
	{
		TArray<FString> Files;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all external files that has been excluded\n\x09 * @param Files\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all external files that has been excluded\n@param Files\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFilesExternalExcluded_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetFilesExternalExcluded_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetFilesExternalExcluded_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::NewProp_Files_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::NewProp_Files,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFilesExternalExcluded", Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::PjcSubsystem_eventGetFilesExternalExcluded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::PjcSubsystem_eventGetFilesExternalExcluded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFilesExternalExcluded)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetFilesExternalExcluded(Z_Param_Out_Files,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFilesExternalExcluded ****************************

// ********** Begin Class UPjcSubsystem Function GetFilesExternalFiltered **************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics
{
	struct PjcSubsystem_eventGetFilesExternalFiltered_Parms
	{
		TArray<FString> Files;
		bool bShowSlowTask;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all external files minus excluded files\n\x09 * @param Files\n\x09 * @param bShowSlowTask bool\n\x09 */" },
#endif
		{ "CPP_Default_bShowSlowTask", "true" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all external files minus excluded files\n@param Files\n@param bShowSlowTask bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowSlowTask_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
	static void NewProp_bShowSlowTask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSlowTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFilesExternalFiltered_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::NewProp_bShowSlowTask_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetFilesExternalFiltered_Parms*)Obj)->bShowSlowTask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::NewProp_bShowSlowTask = { "bShowSlowTask", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetFilesExternalFiltered_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::NewProp_bShowSlowTask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowSlowTask_MetaData), NewProp_bShowSlowTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::NewProp_Files_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::NewProp_Files,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::NewProp_bShowSlowTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFilesExternalFiltered", Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::PjcSubsystem_eventGetFilesExternalFiltered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::PjcSubsystem_eventGetFilesExternalFiltered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFilesExternalFiltered)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
	P_GET_UBOOL(Z_Param_bShowSlowTask);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetFilesExternalFiltered(Z_Param_Out_Files,Z_Param_bShowSlowTask);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFilesExternalFiltered ****************************

// ********** Begin Class UPjcSubsystem Function GetFileSize ***************************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics
{
	struct PjcSubsystem_eventGetFileSize_Parms
	{
		FString InFile;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns size of given file in bytes\n\x09 * @param InFile FString\n\x09 * @return int64\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns size of given file in bytes\n@param InFile FString\n@return int64" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFile;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::NewProp_InFile = { "InFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFileSize_Parms, InFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFile_MetaData), NewProp_InFile_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFileSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::NewProp_InFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFileSize", Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::PjcSubsystem_eventGetFileSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::PjcSubsystem_eventGetFileSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFileSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFileSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFileSize)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UPjcSubsystem::GetFileSize(Z_Param_InFile);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFileSize *****************************************

// ********** Begin Class UPjcSubsystem Function GetFilesTotalSize *********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics
{
	struct PjcSubsystem_eventGetFilesTotalSize_Parms
	{
		TArray<FString> Files;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns total size of given files in bytes\n\x09 * @param Files TArray<FString>\n\x09 * @return int64\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns total size of given files in bytes\n@param Files TArray<FString>\n@return int64" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Files_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Files_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Files;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::NewProp_Files_Inner = { "Files", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::NewProp_Files = { "Files", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFilesTotalSize_Parms, Files), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Files_MetaData), NewProp_Files_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFilesTotalSize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::NewProp_Files_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::NewProp_Files,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFilesTotalSize", Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::PjcSubsystem_eventGetFilesTotalSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::PjcSubsystem_eventGetFilesTotalSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFilesTotalSize)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Files);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=UPjcSubsystem::GetFilesTotalSize(Z_Param_Out_Files);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFilesTotalSize ***********************************

// ********** Begin Class UPjcSubsystem Function GetFolders ****************************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics
{
	struct PjcSubsystem_eventGetFolders_Parms
	{
		FString InSearchPath;
		bool bSearchRecursive;
		TArray<FString> OutFolders;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all subfolders in given path\n\x09 * @param InSearchPath FString\n\x09 * @param bSearchRecursive bool\n\x09 * @param OutFolders\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all subfolders in given path\n@param InSearchPath FString\n@param bSearchRecursive bool\n@param OutFolders" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSearchPath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSearchRecursive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InSearchPath;
	static void NewProp_bSearchRecursive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchRecursive;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutFolders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_InSearchPath = { "InSearchPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFolders_Parms, InSearchPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSearchPath_MetaData), NewProp_InSearchPath_MetaData) };
void Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_bSearchRecursive_SetBit(void* Obj)
{
	((PjcSubsystem_eventGetFolders_Parms*)Obj)->bSearchRecursive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_bSearchRecursive = { "bSearchRecursive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventGetFolders_Parms), &Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_bSearchRecursive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSearchRecursive_MetaData), NewProp_bSearchRecursive_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_OutFolders_Inner = { "OutFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_OutFolders = { "OutFolders", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFolders_Parms, OutFolders), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_InSearchPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_bSearchRecursive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_OutFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::NewProp_OutFolders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFolders", Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::PjcSubsystem_eventGetFolders_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::PjcSubsystem_eventGetFolders_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFolders()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFolders_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFolders)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InSearchPath);
	P_GET_UBOOL(Z_Param_bSearchRecursive);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutFolders);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetFolders(Z_Param_InSearchPath,Z_Param_bSearchRecursive,Z_Param_Out_OutFolders);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFolders ******************************************

// ********** Begin Class UPjcSubsystem Function GetFoldersEmpty ***********************************
struct Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics
{
	struct PjcSubsystem_eventGetFoldersEmpty_Parms
	{
		TArray<FString> Folders;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all empty folders in project\n\x09 * @param Folders TSet<FString>\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all empty folders in project\n@param Folders TSet<FString>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Folders;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::NewProp_Folders_Inner = { "Folders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::NewProp_Folders = { "Folders", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetFoldersEmpty_Parms, Folders), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::NewProp_Folders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::NewProp_Folders,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetFoldersEmpty", Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::PjcSubsystem_eventGetFoldersEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::PjcSubsystem_eventGetFoldersEmpty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetFoldersEmpty)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Folders);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetFoldersEmpty(Z_Param_Out_Folders);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetFoldersEmpty *************************************

// ********** Begin Class UPjcSubsystem Function GetProjectRedirectors *****************************
struct Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct PjcSubsystem_eventGetProjectRedirectors_Parms
	{
		TArray<FAssetData> Redirectors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Returns all redirectors in project\n\x09 * @param Redirectors TArray<FAssetData>\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Returns all redirectors in project\n@param Redirectors TArray<FAssetData>" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Redirectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Redirectors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::NewProp_Redirectors_Inner = { "Redirectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::NewProp_Redirectors = { "Redirectors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventGetProjectRedirectors_Parms, Redirectors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::NewProp_Redirectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::NewProp_Redirectors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "GetProjectRedirectors", Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::PjcSubsystem_eventGetProjectRedirectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::PjcSubsystem_eventGetProjectRedirectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execGetProjectRedirectors)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Redirectors);
	P_FINISH;
	P_NATIVE_BEGIN;
	UPjcSubsystem::GetProjectRedirectors(Z_Param_Out_Redirectors);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function GetProjectRedirectors *******************************

// ********** Begin Class UPjcSubsystem Function PathConvertToAbsolute *****************************
struct Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics
{
	struct PjcSubsystem_eventPathConvertToAbsolute_Parms
	{
		FString InPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Convert given path to absolute\n\x09 * @param InPath FString\n\x09 * @return FString\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Convert given path to absolute\n@param InPath FString\n@return FString" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventPathConvertToAbsolute_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventPathConvertToAbsolute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "PathConvertToAbsolute", Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::PjcSubsystem_eventPathConvertToAbsolute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::PjcSubsystem_eventPathConvertToAbsolute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execPathConvertToAbsolute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPjcSubsystem::PathConvertToAbsolute(Z_Param_InPath);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function PathConvertToAbsolute *******************************

// ********** Begin Class UPjcSubsystem Function PathConvertToObjectPath ***************************
struct Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics
{
	struct PjcSubsystem_eventPathConvertToObjectPath_Parms
	{
		FString InPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Convert given path to object path \n\x09 * @param InPath FString\n\x09 * @return FString\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Convert given path to object path\n@param InPath FString\n@return FString" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventPathConvertToObjectPath_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventPathConvertToObjectPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "PathConvertToObjectPath", Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::PjcSubsystem_eventPathConvertToObjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::PjcSubsystem_eventPathConvertToObjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execPathConvertToObjectPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPjcSubsystem::PathConvertToObjectPath(Z_Param_InPath);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function PathConvertToObjectPath *****************************

// ********** Begin Class UPjcSubsystem Function PathConvertToRelative *****************************
struct Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics
{
	struct PjcSubsystem_eventPathConvertToRelative_Parms
	{
		FString InPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Convert given path relative to Content folder\n\x09 * @param InPath FString\n\x09 * @return FString\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Convert given path relative to Content folder\n@param InPath FString\n@return FString" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventPathConvertToRelative_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventPathConvertToRelative_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "PathConvertToRelative", Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::PjcSubsystem_eventPathConvertToRelative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::PjcSubsystem_eventPathConvertToRelative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execPathConvertToRelative)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPjcSubsystem::PathConvertToRelative(Z_Param_InPath);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function PathConvertToRelative *******************************

// ********** Begin Class UPjcSubsystem Function PathNormalize *************************************
struct Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics
{
	struct PjcSubsystem_eventPathNormalize_Parms
	{
		FString InPath;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Path" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Normalize given path\n\x09 * @param InPath FString\n\x09 * @return FString\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Normalize given path\n@param InPath FString\n@return FString" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventPathNormalize_Parms, InPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPath_MetaData), NewProp_InPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PjcSubsystem_eventPathNormalize_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::NewProp_InPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "PathNormalize", Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::PjcSubsystem_eventPathNormalize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::PjcSubsystem_eventPathNormalize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_PathNormalize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_PathNormalize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execPathNormalize)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UPjcSubsystem::PathNormalize(Z_Param_InPath);
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function PathNormalize ***************************************

// ********** Begin Class UPjcSubsystem Function ProjectHasRedirectors *****************************
struct Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics
{
	struct PjcSubsystem_eventProjectHasRedirectors_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ProjectCleanerSubsystem|Lib_Asset" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief Checks if project contains any redirector asset\n\x09 * @return bool\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief Checks if project contains any redirector asset\n@return bool" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PjcSubsystem_eventProjectHasRedirectors_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PjcSubsystem_eventProjectHasRedirectors_Parms), &Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPjcSubsystem, nullptr, "ProjectHasRedirectors", Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::PjcSubsystem_eventProjectHasRedirectors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::PjcSubsystem_eventProjectHasRedirectors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPjcSubsystem::execProjectHasRedirectors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UPjcSubsystem::ProjectHasRedirectors();
	P_NATIVE_END;
}
// ********** End Class UPjcSubsystem Function ProjectHasRedirectors *******************************

// ********** Begin Class UPjcSubsystem ************************************************************
void UPjcSubsystem::StaticRegisterNativesUPjcSubsystem()
{
	UClass* Class = UPjcSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssetIsBlueprint", &UPjcSubsystem::execAssetIsBlueprint },
		{ "AssetIsCircular", &UPjcSubsystem::execAssetIsCircular },
		{ "AssetIsExtReferenced", &UPjcSubsystem::execAssetIsExtReferenced },
		{ "DeleteAssetsUnused", &UPjcSubsystem::execDeleteAssetsUnused },
		{ "DeleteFilesCorrupted", &UPjcSubsystem::execDeleteFilesCorrupted },
		{ "DeleteFilesExternal", &UPjcSubsystem::execDeleteFilesExternal },
		{ "DeleteFoldersEmpty", &UPjcSubsystem::execDeleteFoldersEmpty },
		{ "EditorIsInPlayMode", &UPjcSubsystem::execEditorIsInPlayMode },
		{ "FixProjectRedirectors", &UPjcSubsystem::execFixProjectRedirectors },
		{ "GetAssetExactClassName", &UPjcSubsystem::execGetAssetExactClassName },
		{ "GetAssetsAll", &UPjcSubsystem::execGetAssetsAll },
		{ "GetAssetsCircular", &UPjcSubsystem::execGetAssetsCircular },
		{ "GetAssetsEditor", &UPjcSubsystem::execGetAssetsEditor },
		{ "GetAssetsExcluded", &UPjcSubsystem::execGetAssetsExcluded },
		{ "GetAssetsExtReferenced", &UPjcSubsystem::execGetAssetsExtReferenced },
		{ "GetAssetsIndirect", &UPjcSubsystem::execGetAssetsIndirect },
		{ "GetAssetSize", &UPjcSubsystem::execGetAssetSize },
		{ "GetAssetsPrimary", &UPjcSubsystem::execGetAssetsPrimary },
		{ "GetAssetsTotalSize", &UPjcSubsystem::execGetAssetsTotalSize },
		{ "GetAssetsUnused", &UPjcSubsystem::execGetAssetsUnused },
		{ "GetAssetsUsed", &UPjcSubsystem::execGetAssetsUsed },
		{ "GetClassNamesEditor", &UPjcSubsystem::execGetClassNamesEditor },
		{ "GetClassNamesExcluded", &UPjcSubsystem::execGetClassNamesExcluded },
		{ "GetClassNamesPrimary", &UPjcSubsystem::execGetClassNamesPrimary },
		{ "GetFiles", &UPjcSubsystem::execGetFiles },
		{ "GetFilesByExt", &UPjcSubsystem::execGetFilesByExt },
		{ "GetFilesCorrupted", &UPjcSubsystem::execGetFilesCorrupted },
		{ "GetFilesExternalAll", &UPjcSubsystem::execGetFilesExternalAll },
		{ "GetFilesExternalExcluded", &UPjcSubsystem::execGetFilesExternalExcluded },
		{ "GetFilesExternalFiltered", &UPjcSubsystem::execGetFilesExternalFiltered },
		{ "GetFileSize", &UPjcSubsystem::execGetFileSize },
		{ "GetFilesTotalSize", &UPjcSubsystem::execGetFilesTotalSize },
		{ "GetFolders", &UPjcSubsystem::execGetFolders },
		{ "GetFoldersEmpty", &UPjcSubsystem::execGetFoldersEmpty },
		{ "GetProjectRedirectors", &UPjcSubsystem::execGetProjectRedirectors },
		{ "PathConvertToAbsolute", &UPjcSubsystem::execPathConvertToAbsolute },
		{ "PathConvertToObjectPath", &UPjcSubsystem::execPathConvertToObjectPath },
		{ "PathConvertToRelative", &UPjcSubsystem::execPathConvertToRelative },
		{ "PathNormalize", &UPjcSubsystem::execPathNormalize },
		{ "ProjectHasRedirectors", &UPjcSubsystem::execProjectHasRedirectors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPjcSubsystem;
UClass* UPjcSubsystem::GetPrivateStaticClass()
{
	using TClass = UPjcSubsystem;
	if (!Z_Registration_Info_UClass_UPjcSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PjcSubsystem"),
			Z_Registration_Info_UClass_UPjcSubsystem.InnerSingleton,
			StaticRegisterNativesUPjcSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPjcSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UPjcSubsystem_NoRegister()
{
	return UPjcSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPjcSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "ProjectCleanerSubsystem" },
		{ "IncludePath", "PjcSubsystem.h" },
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFilesExternal_MetaData[] = {
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFoldersEmpty_MetaData[] = {
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFoldersExcluded_MetaData[] = {
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFoldersUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFoldersEngine_MetaData[] = {
		{ "ModuleRelativePath", "Public/PjcSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShowFilesExternal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFilesExternal;
	static void NewProp_bShowFoldersEmpty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFoldersEmpty;
	static void NewProp_bShowFoldersExcluded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFoldersExcluded;
	static void NewProp_bShowFoldersUsed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFoldersUsed;
	static void NewProp_bShowFoldersEngine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFoldersEngine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPjcSubsystem_AssetIsBlueprint, "AssetIsBlueprint" }, // 1499323125
		{ &Z_Construct_UFunction_UPjcSubsystem_AssetIsCircular, "AssetIsCircular" }, // 1631358445
		{ &Z_Construct_UFunction_UPjcSubsystem_AssetIsExtReferenced, "AssetIsExtReferenced" }, // 918830197
		{ &Z_Construct_UFunction_UPjcSubsystem_DeleteAssetsUnused, "DeleteAssetsUnused" }, // 300694993
		{ &Z_Construct_UFunction_UPjcSubsystem_DeleteFilesCorrupted, "DeleteFilesCorrupted" }, // 2698817954
		{ &Z_Construct_UFunction_UPjcSubsystem_DeleteFilesExternal, "DeleteFilesExternal" }, // 656594949
		{ &Z_Construct_UFunction_UPjcSubsystem_DeleteFoldersEmpty, "DeleteFoldersEmpty" }, // 2712914637
		{ &Z_Construct_UFunction_UPjcSubsystem_EditorIsInPlayMode, "EditorIsInPlayMode" }, // 2435177877
		{ &Z_Construct_UFunction_UPjcSubsystem_FixProjectRedirectors, "FixProjectRedirectors" }, // 3418562855
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetExactClassName, "GetAssetExactClassName" }, // 3113385383
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsAll, "GetAssetsAll" }, // 2047665455
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsCircular, "GetAssetsCircular" }, // 4079322716
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsEditor, "GetAssetsEditor" }, // 1592623692
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsExcluded, "GetAssetsExcluded" }, // 1294947428
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsExtReferenced, "GetAssetsExtReferenced" }, // 3096528263
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsIndirect, "GetAssetsIndirect" }, // 147598583
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetSize, "GetAssetSize" }, // 2353465661
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsPrimary, "GetAssetsPrimary" }, // 322290209
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsTotalSize, "GetAssetsTotalSize" }, // 3501529976
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsUnused, "GetAssetsUnused" }, // 3548410264
		{ &Z_Construct_UFunction_UPjcSubsystem_GetAssetsUsed, "GetAssetsUsed" }, // 113518596
		{ &Z_Construct_UFunction_UPjcSubsystem_GetClassNamesEditor, "GetClassNamesEditor" }, // 3674155950
		{ &Z_Construct_UFunction_UPjcSubsystem_GetClassNamesExcluded, "GetClassNamesExcluded" }, // 2734249639
		{ &Z_Construct_UFunction_UPjcSubsystem_GetClassNamesPrimary, "GetClassNamesPrimary" }, // 2139170911
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFiles, "GetFiles" }, // 3264679562
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFilesByExt, "GetFilesByExt" }, // 1863018830
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFilesCorrupted, "GetFilesCorrupted" }, // 4030259493
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalAll, "GetFilesExternalAll" }, // 4262814194
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalExcluded, "GetFilesExternalExcluded" }, // 834120985
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFilesExternalFiltered, "GetFilesExternalFiltered" }, // 4184121395
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFileSize, "GetFileSize" }, // 2532207850
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFilesTotalSize, "GetFilesTotalSize" }, // 218682236
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFolders, "GetFolders" }, // 2542505
		{ &Z_Construct_UFunction_UPjcSubsystem_GetFoldersEmpty, "GetFoldersEmpty" }, // 556227201
		{ &Z_Construct_UFunction_UPjcSubsystem_GetProjectRedirectors, "GetProjectRedirectors" }, // 3153003871
		{ &Z_Construct_UFunction_UPjcSubsystem_PathConvertToAbsolute, "PathConvertToAbsolute" }, // 3732895891
		{ &Z_Construct_UFunction_UPjcSubsystem_PathConvertToObjectPath, "PathConvertToObjectPath" }, // 2622287405
		{ &Z_Construct_UFunction_UPjcSubsystem_PathConvertToRelative, "PathConvertToRelative" }, // 3345863919
		{ &Z_Construct_UFunction_UPjcSubsystem_PathNormalize, "PathNormalize" }, // 1850608768
		{ &Z_Construct_UFunction_UPjcSubsystem_ProjectHasRedirectors, "ProjectHasRedirectors" }, // 2829922664
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPjcSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFilesExternal_SetBit(void* Obj)
{
	((UPjcSubsystem*)Obj)->bShowFilesExternal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFilesExternal = { "bShowFilesExternal", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPjcSubsystem), &Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFilesExternal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFilesExternal_MetaData), NewProp_bShowFilesExternal_MetaData) };
void Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersEmpty_SetBit(void* Obj)
{
	((UPjcSubsystem*)Obj)->bShowFoldersEmpty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersEmpty = { "bShowFoldersEmpty", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPjcSubsystem), &Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersEmpty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFoldersEmpty_MetaData), NewProp_bShowFoldersEmpty_MetaData) };
void Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersExcluded_SetBit(void* Obj)
{
	((UPjcSubsystem*)Obj)->bShowFoldersExcluded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersExcluded = { "bShowFoldersExcluded", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPjcSubsystem), &Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersExcluded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFoldersExcluded_MetaData), NewProp_bShowFoldersExcluded_MetaData) };
void Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersUsed_SetBit(void* Obj)
{
	((UPjcSubsystem*)Obj)->bShowFoldersUsed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersUsed = { "bShowFoldersUsed", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPjcSubsystem), &Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersUsed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFoldersUsed_MetaData), NewProp_bShowFoldersUsed_MetaData) };
void Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersEngine_SetBit(void* Obj)
{
	((UPjcSubsystem*)Obj)->bShowFoldersEngine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersEngine = { "bShowFoldersEngine", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPjcSubsystem), &Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersEngine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFoldersEngine_MetaData), NewProp_bShowFoldersEngine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPjcSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFilesExternal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersEmpty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersExcluded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcSubsystem_Statics::NewProp_bShowFoldersEngine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPjcSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_Pjc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPjcSubsystem_Statics::ClassParams = {
	&UPjcSubsystem::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPjcSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPjcSubsystem_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UPjcSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPjcSubsystem()
{
	if (!Z_Registration_Info_UClass_UPjcSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPjcSubsystem.OuterSingleton, Z_Construct_UClass_UPjcSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPjcSubsystem.OuterSingleton;
}
UPjcSubsystem::UPjcSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPjcSubsystem);
UPjcSubsystem::~UPjcSubsystem() {}
// ********** End Class UPjcSubsystem **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h__Script_Pjc_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPjcSubsystem, UPjcSubsystem::StaticClass, TEXT("UPjcSubsystem"), &Z_Registration_Info_UClass_UPjcSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPjcSubsystem), 2810868103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h__Script_Pjc_609290254(TEXT("/Script/Pjc"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h__Script_Pjc_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h__Script_Pjc_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
