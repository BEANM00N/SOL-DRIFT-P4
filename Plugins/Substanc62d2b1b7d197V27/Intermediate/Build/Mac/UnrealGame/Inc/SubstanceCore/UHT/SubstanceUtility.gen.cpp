// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceUtility.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubstanceUtility() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility_NoRegister();
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize();
SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESubstanceTextureSize *****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceTextureSize;
static UEnum* ESubstanceTextureSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubstanceTextureSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubstanceTextureSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceTextureSize"));
	}
	return Z_Registration_Info_UEnum_ESubstanceTextureSize.OuterSingleton;
}
template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceTextureSize>()
{
	return ESubstanceTextureSize_StaticEnum();
}
struct Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ERL_1024.DisplayName", "1024" },
		{ "ERL_1024.Name", "ERL_1024" },
		{ "ERL_128.DisplayName", "128" },
		{ "ERL_128.Name", "ERL_128" },
		{ "ERL_16.DisplayName", "16" },
		{ "ERL_16.Name", "ERL_16" },
		{ "ERL_2048.DisplayName", "2048" },
		{ "ERL_2048.Name", "ERL_2048" },
		{ "ERL_256.DisplayName", "256" },
		{ "ERL_256.Name", "ERL_256" },
		{ "ERL_32.DisplayName", "32" },
		{ "ERL_32.Name", "ERL_32" },
		{ "ERL_4096.DisplayName", "4096" },
		{ "ERL_4096.Name", "ERL_4096" },
		{ "ERL_512.DisplayName", "512" },
		{ "ERL_512.Name", "ERL_512" },
		{ "ERL_64.DisplayName", "64" },
		{ "ERL_64.Name", "ERL_64" },
		{ "ERL_8192.DisplayName", "8192" },
		{ "ERL_8192.Name", "ERL_8192" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERL_16", (int64)ERL_16 },
		{ "ERL_32", (int64)ERL_32 },
		{ "ERL_64", (int64)ERL_64 },
		{ "ERL_128", (int64)ERL_128 },
		{ "ERL_256", (int64)ERL_256 },
		{ "ERL_512", (int64)ERL_512 },
		{ "ERL_1024", (int64)ERL_1024 },
		{ "ERL_2048", (int64)ERL_2048 },
		{ "ERL_4096", (int64)ERL_4096 },
		{ "ERL_8192", (int64)ERL_8192 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	"ESubstanceTextureSize",
	"ESubstanceTextureSize",
	Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize()
{
	if (!Z_Registration_Info_UEnum_ESubstanceTextureSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceTextureSize.InnerSingleton, Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubstanceTextureSize.InnerSingleton;
}
// ********** End Enum ESubstanceTextureSize *******************************************************

// ********** Begin ScriptStruct FSubstanceConnection **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSubstanceConnection;
class UScriptStruct* FSubstanceConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSubstanceConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSubstanceConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceConnection, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceConnection"));
	}
	return Z_Registration_Info_UScriptStruct_FSubstanceConnection.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSubstanceConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputIdentifier_MetaData[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputImageIdentifier_MetaData[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutputIdentifier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputImageIdentifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceConnection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_OutputIdentifier = { "OutputIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceConnection, OutputIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputIdentifier_MetaData), NewProp_OutputIdentifier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_InputImageIdentifier = { "InputImageIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubstanceConnection, InputImageIdentifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputImageIdentifier_MetaData), NewProp_InputImageIdentifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_OutputIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_InputImageIdentifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceConnection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	&NewStructOps,
	"SubstanceConnection",
	Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers),
	sizeof(FSubstanceConnection),
	alignof(FSubstanceConnection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubstanceConnection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection()
{
	if (!Z_Registration_Info_UScriptStruct_FSubstanceConnection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSubstanceConnection.InnerSingleton, Z_Construct_UScriptStruct_FSubstanceConnection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSubstanceConnection.InnerSingleton;
}
// ********** End ScriptStruct FSubstanceConnection ************************************************

// ********** Begin Class USubstanceUtility Function AsyncRendering ********************************
struct Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics
{
	struct SubstanceUtility_eventAsyncRendering_Parms
	{
		USubstanceGraphInstance* InstancesToRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance|Render" },
		{ "Comment", "/* Queue a Substance Graph Instance in the renderer */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Queue a Substance Graph Instance in the renderer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancesToRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::NewProp_InstancesToRender = { "InstancesToRender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventAsyncRendering_Parms, InstancesToRender), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::NewProp_InstancesToRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "AsyncRendering", Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::SubstanceUtility_eventAsyncRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::SubstanceUtility_eventAsyncRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_AsyncRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execAsyncRendering)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::AsyncRendering(Z_Param_InstancesToRender);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function AsyncRendering **********************************

// ********** Begin Class USubstanceUtility Function ClearCache ************************************
struct Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance|Memory" },
		{ "Comment", "/* Clear Substance Memory Cache */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Clear Substance Memory Cache" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "ClearCache", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USubstanceUtility_ClearCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execClearCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::ClearCache();
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function ClearCache **************************************

// ********** Begin Class USubstanceUtility Function CopyInputParameters ***************************
struct Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics
{
	struct SubstanceUtility_eventCopyInputParameters_Parms
	{
		USubstanceGraphInstance* SourceGraphInstance;
		USubstanceGraphInstance* DestGraphInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Copy the inputs values from a Substance Graph Instance to another one */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Copy the inputs values from a Substance Graph Instance to another one" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceGraphInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestGraphInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_SourceGraphInstance = { "SourceGraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCopyInputParameters_Parms, SourceGraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_DestGraphInstance = { "DestGraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCopyInputParameters_Parms, DestGraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_SourceGraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_DestGraphInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "CopyInputParameters", Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::SubstanceUtility_eventCopyInputParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::SubstanceUtility_eventCopyInputParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_CopyInputParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execCopyInputParameters)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_SourceGraphInstance);
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_DestGraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::CopyInputParameters(Z_Param_SourceGraphInstance,Z_Param_DestGraphInstance);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function CopyInputParameters *****************************

// ********** Begin Class USubstanceUtility Function CreateAggregateSubstanceFactory ***************
struct Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics
{
	struct SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms
	{
		USubstanceInstanceFactory* OutputFactory;
		int32 OutputFactoryGraphIndex;
		USubstanceInstanceFactory* InputFactory;
		int32 InputFactoryGraphIndex;
		TArray<FSubstanceConnection> Connections;
		USubstanceInstanceFactory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Create an aggregate substance factory by fusing output images from one substance to the input images of another substance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Create an aggregate substance factory by fusing output images from one substance to the input images of another substance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputFactory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputFactoryGraphIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputFactory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InputFactoryGraphIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactory = { "OutputFactory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, OutputFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactoryGraphIndex = { "OutputFactoryGraphIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, OutputFactoryGraphIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactory = { "InputFactory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, InputFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactoryGraphIndex = { "InputFactoryGraphIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, InputFactoryGraphIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubstanceConnection, METADATA_PARAMS(0, nullptr) }; // 2905893847
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) }; // 2905893847
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, ReturnValue), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactoryGraphIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactoryGraphIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "CreateAggregateSubstanceFactory", Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execCreateAggregateSubstanceFactory)
{
	P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_OutputFactory);
	P_GET_PROPERTY(FIntProperty,Z_Param_OutputFactoryGraphIndex);
	P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_InputFactory);
	P_GET_PROPERTY(FIntProperty,Z_Param_InputFactoryGraphIndex);
	P_GET_TARRAY_REF(FSubstanceConnection,Z_Param_Out_Connections);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubstanceInstanceFactory**)Z_Param__Result=USubstanceUtility::CreateAggregateSubstanceFactory(Z_Param_OutputFactory,Z_Param_OutputFactoryGraphIndex,Z_Param_InputFactory,Z_Param_InputFactoryGraphIndex,Z_Param_Out_Connections);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function CreateAggregateSubstanceFactory *****************

// ********** Begin Class USubstanceUtility Function CreateGraphInstance ***************************
struct Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics
{
	struct SubstanceUtility_eventCreateGraphInstance_Parms
	{
		UObject* WorldContextObject;
		USubstanceInstanceFactory* Factory;
		int32 GraphDescIndex;
		UMaterial* ParentMaterial;
		FString InstanceName;
		USubstanceGraphInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Create a dynamic Substance Graph Instance (no outputs enabled by default) */" },
		{ "CPP_Default_InstanceName", "" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Create a dynamic Substance Graph Instance (no outputs enabled by default)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Factory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GraphDescIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, Factory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_GraphDescIndex = { "GraphDescIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, GraphDescIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, ParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, InstanceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_Factory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_GraphDescIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ParentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_InstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "CreateGraphInstance", Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::SubstanceUtility_eventCreateGraphInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::SubstanceUtility_eventCreateGraphInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execCreateGraphInstance)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_Factory);
	P_GET_PROPERTY(FIntProperty,Z_Param_GraphDescIndex);
	P_GET_OBJECT(UMaterial,Z_Param_ParentMaterial);
	P_GET_PROPERTY(FStrProperty,Z_Param_InstanceName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::CreateGraphInstance(Z_Param_WorldContextObject,Z_Param_Factory,Z_Param_GraphDescIndex,Z_Param_ParentMaterial,Z_Param_InstanceName);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function CreateGraphInstance *****************************

// ********** Begin Class USubstanceUtility Function DisableInstanceOutputs ************************
struct Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics
{
	struct SubstanceUtility_eventDisableInstanceOutputs_Parms
	{
		UObject* WorldContextObject;
		USubstanceGraphInstance* GraphInstance;
		TArray<int32> OutputIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Disable the textures of a Substance Graph Instance (disable its outputs) using the output indices */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Disable the textures of a Substance Graph Instance (disable its outputs) using the output indices" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices_Inner = { "OutputIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices = { "OutputIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, OutputIndices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "DisableInstanceOutputs", Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::SubstanceUtility_eventDisableInstanceOutputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::SubstanceUtility_eventDisableInstanceOutputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execDisableInstanceOutputs)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_GET_TARRAY(int32,Z_Param_OutputIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::DisableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function DisableInstanceOutputs **************************

// ********** Begin Class USubstanceUtility Function DuplicateGraphInstance ************************
struct Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics
{
	struct SubstanceUtility_eventDuplicateGraphInstance_Parms
	{
		UObject* WorldContextObject;
		USubstanceGraphInstance* GraphInstance;
		USubstanceGraphInstance* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Create a copy of Substance Graph Instance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Create a copy of Substance Graph Instance" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "DuplicateGraphInstance", Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::SubstanceUtility_eventDuplicateGraphInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::SubstanceUtility_eventDuplicateGraphInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execDuplicateGraphInstance)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::DuplicateGraphInstance(Z_Param_WorldContextObject,Z_Param_GraphInstance);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function DuplicateGraphInstance **************************

// ********** Begin Class USubstanceUtility Function EnableInstanceOutputs *************************
struct Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics
{
	struct SubstanceUtility_eventEnableInstanceOutputs_Parms
	{
		UObject* WorldContextObject;
		USubstanceGraphInstance* GraphInstance;
		TArray<int32> OutputIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Create the textures of a Substance Graph Instance (enable its outputs) using the output indices */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Create the textures of a Substance Graph Instance (enable its outputs) using the output indices" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices_Inner = { "OutputIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices = { "OutputIndices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, OutputIndices), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "EnableInstanceOutputs", Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::SubstanceUtility_eventEnableInstanceOutputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::SubstanceUtility_eventEnableInstanceOutputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execEnableInstanceOutputs)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_GET_TARRAY(int32,Z_Param_OutputIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::EnableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function EnableInstanceOutputs ***************************

// ********** Begin Class USubstanceUtility Function GetFactoryName ********************************
struct Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics
{
	struct SubstanceUtility_eventGetFactoryName_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the name of the factory that created this instance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the name of the factory that created this instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetFactoryName_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetFactoryName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetFactoryName", Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::SubstanceUtility_eventGetFactoryName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::SubstanceUtility_eventGetFactoryName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetFactoryName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetFactoryName)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USubstanceUtility::GetFactoryName(Z_Param_GraphInstance);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function GetFactoryName **********************************

// ********** Begin Class USubstanceUtility Function GetGraphName **********************************
struct Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics
{
	struct SubstanceUtility_eventGetGraphName_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the original graph name */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the original graph name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetGraphName_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetGraphName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetGraphName", Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::SubstanceUtility_eventGetGraphName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::SubstanceUtility_eventGetGraphName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetGraphName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetGraphName)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USubstanceUtility::GetGraphName(Z_Param_GraphInstance);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function GetGraphName ************************************

// ********** Begin Class USubstanceUtility Function GetSubstanceIncludedMaterials *****************
struct Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics
{
	struct SubstanceUtility_eventGetSubstanceIncludedMaterials_Parms
	{
		TArray<UMaterial*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Returns an array of the material templates included with the substance plugin (may return none if the editor has not fully loaded yet) */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Returns an array of the material templates included with the substance plugin (may return none if the editor has not fully loaded yet)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceIncludedMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstanceIncludedMaterials", Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::SubstanceUtility_eventGetSubstanceIncludedMaterials_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::SubstanceUtility_eventGetSubstanceIncludedMaterials_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetSubstanceIncludedMaterials)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMaterial*>*)Z_Param__Result=USubstanceUtility::GetSubstanceIncludedMaterials();
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function GetSubstanceIncludedMaterials *******************

// ********** Begin Class USubstanceUtility Function GetSubstanceLoadingProgress *******************
struct Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics
{
	struct SubstanceUtility_eventGetSubstanceLoadingProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the current rendering progress of the Substances currently loaded ([0, 1.0]) */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the current rendering progress of the Substances currently loaded ([0, 1.0])" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceLoadingProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstanceLoadingProgress", Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::SubstanceUtility_eventGetSubstanceLoadingProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::SubstanceUtility_eventGetSubstanceLoadingProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetSubstanceLoadingProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USubstanceUtility::GetSubstanceLoadingProgress();
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function GetSubstanceLoadingProgress *********************

// ********** Begin Class USubstanceUtility Function GetSubstances *********************************
struct Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics
{
	struct SubstanceUtility_eventGetSubstances_Parms
	{
		UMaterialInterface* Material;
		TArray<USubstanceGraphInstance*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the list of Substance Graph Instances used by a material */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the list of Substance Graph Instances used by a material" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstances_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstances", Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::SubstanceUtility_eventGetSubstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::SubstanceUtility_eventGetSubstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetSubstances)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<USubstanceGraphInstance*>*)Z_Param__Result=USubstanceUtility::GetSubstances(Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function GetSubstances ***********************************

// ********** Begin Class USubstanceUtility Function GetSubstanceTextures **************************
struct Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics
{
	struct SubstanceUtility_eventGetSubstanceTextures_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		TArray<UTexture2D*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the textures (from enabled outputs) of a Substance Graph Instance*/" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the textures (from enabled outputs) of a Substance Graph Instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceTextures_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceTextures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstanceTextures", Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::SubstanceUtility_eventGetSubstanceTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::SubstanceUtility_eventGetSubstanceTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execGetSubstanceTextures)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UTexture2D*>*)Z_Param__Result=USubstanceUtility::GetSubstanceTextures(Z_Param_GraphInstance);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function GetSubstanceTextures ****************************

// ********** Begin Class USubstanceUtility Function ResetInputParameters **************************
struct Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics
{
	struct SubstanceUtility_eventResetInputParameters_Parms
	{
		USubstanceGraphInstance* GraphInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Reset the input values of a Substance Graph Instance to their default values */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Reset the input values of a Substance Graph Instance to their default values" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventResetInputParameters_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::NewProp_GraphInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "ResetInputParameters", Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::SubstanceUtility_eventResetInputParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::SubstanceUtility_eventResetInputParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_ResetInputParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execResetInputParameters)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::ResetInputParameters(Z_Param_GraphInstance);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function ResetInputParameters ****************************

// ********** Begin Class USubstanceUtility Function SetGraphInstanceOutputSize ********************
struct Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics
{
	struct SubstanceUtility_eventSetGraphInstanceOutputSize_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		TEnumAsByte<ESubstanceTextureSize> Width;
		TEnumAsByte<ESubstanceTextureSize> Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Set the output size input of the specified GraphInstance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Set the output size input of the specified GraphInstance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Width;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, Width), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, METADATA_PARAMS(0, nullptr) }; // 856619931
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, Height), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, METADATA_PARAMS(0, nullptr) }; // 856619931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "SetGraphInstanceOutputSize", Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::SubstanceUtility_eventSetGraphInstanceOutputSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::SubstanceUtility_eventSetGraphInstanceOutputSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execSetGraphInstanceOutputSize)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_GET_PROPERTY(FByteProperty,Z_Param_Width);
	P_GET_PROPERTY(FByteProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::SetGraphInstanceOutputSize(Z_Param_GraphInstance,ESubstanceTextureSize(Z_Param_Width),ESubstanceTextureSize(Z_Param_Height));
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function SetGraphInstanceOutputSize **********************

// ********** Begin Class USubstanceUtility Function SetGraphInstanceOutputSizeInt *****************
struct Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics
{
	struct SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms
	{
		USubstanceGraphInstance* GraphInstance;
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Set the output size input of the specified GraphInstance */" },
		{ "DisplayName", "Set GraphInstance Output Size (Int)" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Set the output size input of the specified GraphInstance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_GraphInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "SetGraphInstanceOutputSizeInt", Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execSetGraphInstanceOutputSizeInt)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::SetGraphInstanceOutputSizeInt(Z_Param_GraphInstance,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function SetGraphInstanceOutputSizeInt *******************

// ********** Begin Class USubstanceUtility Function SyncRendering *********************************
struct Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics
{
	struct SubstanceUtility_eventSyncRendering_Parms
	{
		USubstanceGraphInstance* InstancesToRender;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance|Render" },
		{ "Comment", "/* Start the synchronous rendering of a Substance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Start the synchronous rendering of a Substance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancesToRender;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::NewProp_InstancesToRender = { "InstancesToRender", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceUtility_eventSyncRendering_Parms, InstancesToRender), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::NewProp_InstancesToRender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "SyncRendering", Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::SubstanceUtility_eventSyncRendering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::SubstanceUtility_eventSyncRendering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceUtility_SyncRendering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceUtility::execSyncRendering)
{
	P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender);
	P_FINISH;
	P_NATIVE_BEGIN;
	USubstanceUtility::SyncRendering(Z_Param_InstancesToRender);
	P_NATIVE_END;
}
// ********** End Class USubstanceUtility Function SyncRendering ***********************************

// ********** Begin Class USubstanceUtility ********************************************************
void USubstanceUtility::StaticRegisterNativesUSubstanceUtility()
{
	UClass* Class = USubstanceUtility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncRendering", &USubstanceUtility::execAsyncRendering },
		{ "ClearCache", &USubstanceUtility::execClearCache },
		{ "CopyInputParameters", &USubstanceUtility::execCopyInputParameters },
		{ "CreateAggregateSubstanceFactory", &USubstanceUtility::execCreateAggregateSubstanceFactory },
		{ "CreateGraphInstance", &USubstanceUtility::execCreateGraphInstance },
		{ "DisableInstanceOutputs", &USubstanceUtility::execDisableInstanceOutputs },
		{ "DuplicateGraphInstance", &USubstanceUtility::execDuplicateGraphInstance },
		{ "EnableInstanceOutputs", &USubstanceUtility::execEnableInstanceOutputs },
		{ "GetFactoryName", &USubstanceUtility::execGetFactoryName },
		{ "GetGraphName", &USubstanceUtility::execGetGraphName },
		{ "GetSubstanceIncludedMaterials", &USubstanceUtility::execGetSubstanceIncludedMaterials },
		{ "GetSubstanceLoadingProgress", &USubstanceUtility::execGetSubstanceLoadingProgress },
		{ "GetSubstances", &USubstanceUtility::execGetSubstances },
		{ "GetSubstanceTextures", &USubstanceUtility::execGetSubstanceTextures },
		{ "ResetInputParameters", &USubstanceUtility::execResetInputParameters },
		{ "SetGraphInstanceOutputSize", &USubstanceUtility::execSetGraphInstanceOutputSize },
		{ "SetGraphInstanceOutputSizeInt", &USubstanceUtility::execSetGraphInstanceOutputSizeInt },
		{ "SyncRendering", &USubstanceUtility::execSyncRendering },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubstanceUtility;
UClass* USubstanceUtility::GetPrivateStaticClass()
{
	using TClass = USubstanceUtility;
	if (!Z_Registration_Info_UClass_USubstanceUtility.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubstanceUtility"),
			Z_Registration_Info_UClass_USubstanceUtility.InnerSingleton,
			StaticRegisterNativesUSubstanceUtility,
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
	return Z_Registration_Info_UClass_USubstanceUtility.InnerSingleton;
}
UClass* Z_Construct_UClass_USubstanceUtility_NoRegister()
{
	return USubstanceUtility::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubstanceUtility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubstanceUtility.h" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceUtility_AsyncRendering, "AsyncRendering" }, // 1083352738
		{ &Z_Construct_UFunction_USubstanceUtility_ClearCache, "ClearCache" }, // 1224339797
		{ &Z_Construct_UFunction_USubstanceUtility_CopyInputParameters, "CopyInputParameters" }, // 1403031280
		{ &Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory, "CreateAggregateSubstanceFactory" }, // 1473935335
		{ &Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance, "CreateGraphInstance" }, // 2229015573
		{ &Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs, "DisableInstanceOutputs" }, // 2293207556
		{ &Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance, "DuplicateGraphInstance" }, // 1870165560
		{ &Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs, "EnableInstanceOutputs" }, // 2194781394
		{ &Z_Construct_UFunction_USubstanceUtility_GetFactoryName, "GetFactoryName" }, // 821826906
		{ &Z_Construct_UFunction_USubstanceUtility_GetGraphName, "GetGraphName" }, // 65829240
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceIncludedMaterials, "GetSubstanceIncludedMaterials" }, // 1958579843
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress, "GetSubstanceLoadingProgress" }, // 3096078136
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstances, "GetSubstances" }, // 2562877485
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures, "GetSubstanceTextures" }, // 2317581316
		{ &Z_Construct_UFunction_USubstanceUtility_ResetInputParameters, "ResetInputParameters" }, // 775220847
		{ &Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize, "SetGraphInstanceOutputSize" }, // 4140124915
		{ &Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt, "SetGraphInstanceOutputSizeInt" }, // 1546725532
		{ &Z_Construct_UFunction_USubstanceUtility_SyncRendering, "SyncRendering" }, // 1588447748
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceUtility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubstanceUtility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceUtility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceUtility_Statics::ClassParams = {
	&USubstanceUtility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceUtility_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceUtility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceUtility()
{
	if (!Z_Registration_Info_UClass_USubstanceUtility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceUtility.OuterSingleton, Z_Construct_UClass_USubstanceUtility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceUtility.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceUtility);
USubstanceUtility::~USubstanceUtility() {}
// ********** End Class USubstanceUtility **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h__Script_SubstanceCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubstanceTextureSize_StaticEnum, TEXT("ESubstanceTextureSize"), &Z_Registration_Info_UEnum_ESubstanceTextureSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 856619931U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubstanceConnection::StaticStruct, Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewStructOps, TEXT("SubstanceConnection"), &Z_Registration_Info_UScriptStruct_FSubstanceConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubstanceConnection), 2905893847U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceUtility, USubstanceUtility::StaticClass, TEXT("USubstanceUtility"), &Z_Registration_Info_UClass_USubstanceUtility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceUtility), 334032404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h__Script_SubstanceCore_3931818598(TEXT("/Script/SubstanceCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h__Script_SubstanceCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h__Script_SubstanceCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h__Script_SubstanceCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h__Script_SubstanceCore_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h__Script_SubstanceCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h__Script_SubstanceCore_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
