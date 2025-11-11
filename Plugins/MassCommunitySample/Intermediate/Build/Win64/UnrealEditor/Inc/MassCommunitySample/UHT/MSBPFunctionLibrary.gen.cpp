// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Misc/MSBPFunctionLibrary.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSBPFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentComponent_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSBPFunctionLibrary();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSBPFunctionLibrary_NoRegister();
MASSCOMMUNITYSAMPLE_API UEnum* Z_Construct_UEnum_MassCommunitySample_EReturnSuccess();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSEntityViewBPWrapper();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMSEntityViewBPWrapper ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSEntityViewBPWrapper;
class UScriptStruct* FMSEntityViewBPWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSEntityViewBPWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSEntityViewBPWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSEntityViewBPWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_FMSEntityViewBPWrapper.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSEntityViewBPWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMassEntityView wrapper for for general blueprint use\n * This can be rather evil due to the fact that the EntityView is transient in representing the actual state\n * If you want to store an entity ID longer term you might be better off with the FMSEntityHandleBPWrapper\n */" },
#endif
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMassEntityView wrapper for for general blueprint use\nThis can be rather evil due to the fact that the EntityView is transient in representing the actual state\nIf you want to store an entity ID longer term you might be better off with the FMSEntityHandleBPWrapper" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSEntityViewBPWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSEntityViewBPWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	nullptr,
	&NewStructOps,
	"MSEntityViewBPWrapper",
	nullptr,
	0,
	sizeof(FMSEntityViewBPWrapper),
	alignof(FMSEntityViewBPWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSEntityViewBPWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSEntityViewBPWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_FMSEntityViewBPWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSEntityViewBPWrapper.InnerSingleton, Z_Construct_UScriptStruct_FMSEntityViewBPWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSEntityViewBPWrapper.InnerSingleton;
}
// ********** End ScriptStruct FMSEntityViewBPWrapper **********************************************

// ********** Begin ScriptStruct FMSEntityHandleBPWrapper ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSEntityHandleBPWrapper;
class UScriptStruct* FMSEntityHandleBPWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSEntityHandleBPWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSEntityHandleBPWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSEntityHandleBPWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_FMSEntityHandleBPWrapper.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An entity handle only BP wrapper.\n" },
#endif
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An entity handle only BP wrapper." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSEntityHandleBPWrapper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	nullptr,
	&NewStructOps,
	"MSEntityHandleBPWrapper",
	nullptr,
	0,
	sizeof(FMSEntityHandleBPWrapper),
	alignof(FMSEntityHandleBPWrapper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper()
{
	if (!Z_Registration_Info_UScriptStruct_FMSEntityHandleBPWrapper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSEntityHandleBPWrapper.InnerSingleton, Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSEntityHandleBPWrapper.InnerSingleton;
}
// ********** End ScriptStruct FMSEntityHandleBPWrapper ********************************************

// ********** Begin Enum EReturnSuccess ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReturnSuccess;
static UEnum* EReturnSuccess_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EReturnSuccess.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EReturnSuccess.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassCommunitySample_EReturnSuccess, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("EReturnSuccess"));
	}
	return Z_Registration_Info_UEnum_EReturnSuccess.OuterSingleton;
}
template<> MASSCOMMUNITYSAMPLE_API UEnum* StaticEnum<EReturnSuccess>()
{
	return EReturnSuccess_StaticEnum();
}
struct Z_Construct_UEnum_MassCommunitySample_EReturnSuccess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Failure.Name", "EReturnSuccess::Failure" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "Success.Name", "EReturnSuccess::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EReturnSuccess::Success", (int64)EReturnSuccess::Success },
		{ "EReturnSuccess::Failure", (int64)EReturnSuccess::Failure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassCommunitySample_EReturnSuccess_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassCommunitySample,
	nullptr,
	"EReturnSuccess",
	"EReturnSuccess",
	Z_Construct_UEnum_MassCommunitySample_EReturnSuccess_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassCommunitySample_EReturnSuccess_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassCommunitySample_EReturnSuccess_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassCommunitySample_EReturnSuccess_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassCommunitySample_EReturnSuccess()
{
	if (!Z_Registration_Info_UEnum_EReturnSuccess.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReturnSuccess.InnerSingleton, Z_Construct_UEnum_MassCommunitySample_EReturnSuccess_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EReturnSuccess.InnerSingleton;
}
// ********** End Enum EReturnSuccess **************************************************************

// ********** Begin Class UMSBPFunctionLibrary Function BreakIndexToInt ****************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics
{
	struct MSBPFunctionLibrary_eventBreakIndexToInt_Parms
	{
		FMSEntityViewBPWrapper InValue;
		int32 Index;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventBreakIndexToInt_Parms, InValue), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) }; // 4214274932
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventBreakIndexToInt_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "BreakIndexToInt", Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::MSBPFunctionLibrary_eventBreakIndexToInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::MSBPFunctionLibrary_eventBreakIndexToInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execBreakIndexToInt)
{
	P_GET_STRUCT_REF(FMSEntityViewBPWrapper,Z_Param_Out_InValue);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMSBPFunctionLibrary::BreakIndexToInt(Z_Param_Out_InValue,Z_Param_Out_Index);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function BreakIndexToInt ******************************

// ********** Begin Class UMSBPFunctionLibrary Function DestroyEntity ******************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics
{
	struct MSBPFunctionLibrary_eventDestroyEntity_Parms
	{
		FMSEntityViewBPWrapper EntityHandle;
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::NewProp_EntityHandle = { "EntityHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventDestroyEntity_Parms, EntityHandle), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityHandle_MetaData), NewProp_EntityHandle_MetaData) }; // 4214274932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventDestroyEntity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::NewProp_EntityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "DestroyEntity", Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::MSBPFunctionLibrary_eventDestroyEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::MSBPFunctionLibrary_eventDestroyEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execDestroyEntity)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_EntityHandle);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMSBPFunctionLibrary::DestroyEntity(Z_Param_EntityHandle,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function DestroyEntity ********************************

// ********** Begin Class UMSBPFunctionLibrary Function EntityHasFragment **************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics
{
	struct MSBPFunctionLibrary_eventEntityHasFragment_Parms
	{
		FMSEntityViewBPWrapper Entity;
		UScriptStruct* Fragment;
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if a given entity view has a fragment\n" },
#endif
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a given entity view has a fragment" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fragment_MetaData[] = {
		{ "MetaStruct", "/Script/MassEntity.MassFragment" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasFragment_Parms, Entity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasFragment_Parms, Fragment), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fragment_MetaData), NewProp_Fragment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasFragment_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MSBPFunctionLibrary_eventEntityHasFragment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSBPFunctionLibrary_eventEntityHasFragment_Parms), &Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "EntityHasFragment", Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::MSBPFunctionLibrary_eventEntityHasFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::MSBPFunctionLibrary_eventEntityHasFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execEntityHasFragment)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_Entity);
	P_GET_OBJECT(UScriptStruct,Z_Param_Fragment);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMSBPFunctionLibrary::EntityHasFragment(Z_Param_Entity,Z_Param_Fragment,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function EntityHasFragment ****************************

// ********** Begin Class UMSBPFunctionLibrary Function EntityHasFragment_OLD **********************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics
{
	struct MSBPFunctionLibrary_eventEntityHasFragment_OLD_Parms
	{
		FMSEntityViewBPWrapper Entity;
		FInstancedStruct Fragment;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "CustomStructureParam", "" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fragment;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasFragment_OLD_Parms, Entity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasFragment_OLD_Parms, Fragment), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
void Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MSBPFunctionLibrary_eventEntityHasFragment_OLD_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSBPFunctionLibrary_eventEntityHasFragment_OLD_Parms), &Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "EntityHasFragment_OLD", Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::MSBPFunctionLibrary_eventEntityHasFragment_OLD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::MSBPFunctionLibrary_eventEntityHasFragment_OLD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execEntityHasFragment_OLD)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_Entity);
	P_GET_STRUCT(FInstancedStruct,Z_Param_Fragment);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMSBPFunctionLibrary::EntityHasFragment_OLD(Z_Param_Entity,Z_Param_Fragment);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function EntityHasFragment_OLD ************************

// ********** Begin Class UMSBPFunctionLibrary Function EntityHasTag *******************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics
{
	struct MSBPFunctionLibrary_eventEntityHasTag_Parms
	{
		FMSEntityViewBPWrapper Entity;
		UScriptStruct* Tag;
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Check if a given entity view has a tag\n" },
#endif
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a given entity view has a tag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "MetaStruct", "/Script/MassEntity.MassTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasTag_Parms, Entity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasTag_Parms, Tag), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MSBPFunctionLibrary_eventEntityHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSBPFunctionLibrary_eventEntityHasTag_Parms), &Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "EntityHasTag", Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::MSBPFunctionLibrary_eventEntityHasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::MSBPFunctionLibrary_eventEntityHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execEntityHasTag)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_Entity);
	P_GET_OBJECT(UScriptStruct,Z_Param_Tag);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMSBPFunctionLibrary::EntityHasTag(Z_Param_Entity,Z_Param_Tag,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function EntityHasTag *********************************

// ********** Begin Class UMSBPFunctionLibrary Function EntityHasTag_OLD ***************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics
{
	struct MSBPFunctionLibrary_eventEntityHasTag_OLD_Parms
	{
		FMSEntityViewBPWrapper Entity;
		FInstancedStruct Fragment;
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasTag_OLD_Parms, Entity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasTag_OLD_Parms, Fragment), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventEntityHasTag_OLD_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MSBPFunctionLibrary_eventEntityHasTag_OLD_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSBPFunctionLibrary_eventEntityHasTag_OLD_Parms), &Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "EntityHasTag_OLD", Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::MSBPFunctionLibrary_eventEntityHasTag_OLD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::MSBPFunctionLibrary_eventEntityHasTag_OLD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execEntityHasTag_OLD)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_Entity);
	P_GET_STRUCT(FInstancedStruct,Z_Param_Fragment);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMSBPFunctionLibrary::EntityHasTag_OLD(Z_Param_Entity,Z_Param_Fragment,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function EntityHasTag_OLD *****************************

// ********** Begin Class UMSBPFunctionLibrary Function FindClosestHashGridEntityInBox *************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics
{
	struct MSBPFunctionLibrary_eventFindClosestHashGridEntityInBox_Parms
	{
		FVector Center;
		FVector Extents;
		FMSEntityViewBPWrapper Entity;
		const UObject* WorldContextObject;
		EReturnSuccess ReturnBranch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ExpandEnumAsExecs", "ReturnBranch" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnBranch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnBranch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventFindClosestHashGridEntityInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventFindClosestHashGridEntityInBox_Parms, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventFindClosestHashGridEntityInBox_Parms, Entity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventFindClosestHashGridEntityInBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_ReturnBranch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_ReturnBranch = { "ReturnBranch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventFindClosestHashGridEntityInBox_Parms, ReturnBranch), Z_Construct_UEnum_MassCommunitySample_EReturnSuccess, METADATA_PARAMS(0, nullptr) }; // 285403919
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_Extents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_ReturnBranch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::NewProp_ReturnBranch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "FindClosestHashGridEntityInBox", Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::MSBPFunctionLibrary_eventFindClosestHashGridEntityInBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::MSBPFunctionLibrary_eventFindClosestHashGridEntityInBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execFindClosestHashGridEntityInBox)
{
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_STRUCT(FVector,Z_Param_Extents);
	P_GET_STRUCT_REF(FMSEntityViewBPWrapper,Z_Param_Out_Entity);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EReturnSuccess,Z_Param_Out_ReturnBranch);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMSBPFunctionLibrary::FindClosestHashGridEntityInBox(Z_Param_Center,Z_Param_Extents,Z_Param_Out_Entity,Z_Param_WorldContextObject,(EReturnSuccess&)(Z_Param_Out_ReturnBranch));
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function FindClosestHashGridEntityInBox ***************

// ********** Begin Class UMSBPFunctionLibrary Function FindOctreeEntitiesInBox ********************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics
{
	struct MSBPFunctionLibrary_eventFindOctreeEntitiesInBox_Parms
	{
		FVector Center;
		FVector Extents;
		TArray<FMSEntityViewBPWrapper> Entities;
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventFindOctreeEntitiesInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventFindOctreeEntitiesInBox_Parms, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Extents_MetaData), NewProp_Extents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventFindOctreeEntitiesInBox_Parms, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventFindOctreeEntitiesInBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_Extents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_Entities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_Entities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "FindOctreeEntitiesInBox", Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::MSBPFunctionLibrary_eventFindOctreeEntitiesInBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::MSBPFunctionLibrary_eventFindOctreeEntitiesInBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execFindOctreeEntitiesInBox)
{
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_STRUCT(FVector,Z_Param_Extents);
	P_GET_TARRAY_REF(FMSEntityViewBPWrapper,Z_Param_Out_Entities);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMSBPFunctionLibrary::FindOctreeEntitiesInBox(Z_Param_Center,Z_Param_Extents,Z_Param_Out_Entities,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function FindOctreeEntitiesInBox **********************

// ********** Begin Class UMSBPFunctionLibrary Function GetEntityFragmentByType ********************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics
{
	struct MSBPFunctionLibrary_eventGetEntityFragmentByType_Parms
	{
		FMSEntityViewBPWrapper Entity;
		FInstancedStruct Fragment;
		const UObject* WorldContextObject;
		EReturnSuccess ReturnBranch;
		FInstancedStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * You may need to make a new fragment struct variable to pass in here to serve as the type\n\x09 * A better experience would probably require a custom k2 node thingy?\n\x09 */" },
#endif
		{ "ExpandEnumAsExecs", "ReturnBranch" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You may need to make a new fragment struct variable to pass in here to serve as the type\nA better experience would probably require a custom k2 node thingy?" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnBranch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnBranch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityFragmentByType_Parms, Entity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityFragmentByType_Parms, Fragment), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityFragmentByType_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_ReturnBranch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_ReturnBranch = { "ReturnBranch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityFragmentByType_Parms, ReturnBranch), Z_Construct_UEnum_MassCommunitySample_EReturnSuccess, METADATA_PARAMS(0, nullptr) }; // 285403919
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityFragmentByType_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_ReturnBranch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_ReturnBranch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "GetEntityFragmentByType", Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::MSBPFunctionLibrary_eventGetEntityFragmentByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::MSBPFunctionLibrary_eventGetEntityFragmentByType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execGetEntityFragmentByType)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_Entity);
	P_GET_STRUCT(FInstancedStruct,Z_Param_Fragment);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EReturnSuccess,Z_Param_Out_ReturnBranch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FInstancedStruct*)Z_Param__Result=UMSBPFunctionLibrary::GetEntityFragmentByType(Z_Param_Entity,Z_Param_Fragment,Z_Param_WorldContextObject,(EReturnSuccess&)(Z_Param_Out_ReturnBranch));
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function GetEntityFragmentByType **********************

// ********** Begin Class UMSBPFunctionLibrary Function GetEntityTransform *************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics
{
	struct MSBPFunctionLibrary_eventGetEntityTransform_Parms
	{
		FMSEntityViewBPWrapper EntityHandle;
		const UObject* WorldContextObject;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::NewProp_EntityHandle = { "EntityHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityTransform_Parms, EntityHandle), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityTransform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::NewProp_EntityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "GetEntityTransform", Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::MSBPFunctionLibrary_eventGetEntityTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::MSBPFunctionLibrary_eventGetEntityTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execGetEntityTransform)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_EntityHandle);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UMSBPFunctionLibrary::GetEntityTransform(Z_Param_EntityHandle,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function GetEntityTransform ***************************

// ********** Begin Class UMSBPFunctionLibrary Function GetEntityVelocity **************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics
{
	struct MSBPFunctionLibrary_eventGetEntityVelocity_Parms
	{
		FMSEntityViewBPWrapper EntityHandle;
		const UObject* WorldContextObject;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::NewProp_EntityHandle = { "EntityHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityVelocity_Parms, EntityHandle), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityVelocity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetEntityVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::NewProp_EntityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "GetEntityVelocity", Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::MSBPFunctionLibrary_eventGetEntityVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::MSBPFunctionLibrary_eventGetEntityVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execGetEntityVelocity)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_EntityHandle);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UMSBPFunctionLibrary::GetEntityVelocity(Z_Param_EntityHandle,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function GetEntityVelocity ****************************

// ********** Begin Class UMSBPFunctionLibrary Function GetMassAgentEntity *************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics
{
	struct MSBPFunctionLibrary_eventGetMassAgentEntity_Parms
	{
		FMSEntityViewBPWrapper OutEntity;
		UMassAgentComponent* Agent;
		const UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutEntity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_OutEntity = { "OutEntity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetMassAgentEntity_Parms, OutEntity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetMassAgentEntity_Parms, Agent), Z_Construct_UClass_UMassAgentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agent_MetaData), NewProp_Agent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetMassAgentEntity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MSBPFunctionLibrary_eventGetMassAgentEntity_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSBPFunctionLibrary_eventGetMassAgentEntity_Parms), &Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_OutEntity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_Agent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "GetMassAgentEntity", Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::MSBPFunctionLibrary_eventGetMassAgentEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::MSBPFunctionLibrary_eventGetMassAgentEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execGetMassAgentEntity)
{
	P_GET_STRUCT_REF(FMSEntityViewBPWrapper,Z_Param_Out_OutEntity);
	P_GET_OBJECT(UMassAgentComponent,Z_Param_Agent);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMSBPFunctionLibrary::GetMassAgentEntity(Z_Param_Out_OutEntity,Z_Param_Agent,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function GetMassAgentEntity ***************************

// ********** Begin Class UMSBPFunctionLibrary Function GetMassEntityCount *************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics
{
	struct MSBPFunctionLibrary_eventGetMassEntityCount_Parms
	{
		const UObject* WorldContextObject;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass|Utils" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetMassEntityCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventGetMassEntityCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "GetMassEntityCount", Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::MSBPFunctionLibrary_eventGetMassEntityCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::MSBPFunctionLibrary_eventGetMassEntityCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execGetMassEntityCount)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMSBPFunctionLibrary::GetMassEntityCount(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function GetMassEntityCount ***************************

// ********** Begin Class UMSBPFunctionLibrary Function IsEntityValid ******************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics
{
	struct MSBPFunctionLibrary_eventIsEntityValid_Parms
	{
		FMSEntityViewBPWrapper Entity;
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventIsEntityValid_Parms, Entity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventIsEntityValid_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MSBPFunctionLibrary_eventIsEntityValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MSBPFunctionLibrary_eventIsEntityValid_Parms), &Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "IsEntityValid", Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::MSBPFunctionLibrary_eventIsEntityValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::MSBPFunctionLibrary_eventIsEntityValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execIsEntityValid)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_Entity);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMSBPFunctionLibrary::IsEntityValid(Z_Param_Entity,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function IsEntityValid ********************************

// ********** Begin Class UMSBPFunctionLibrary Function SetEntityForce *****************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics
{
	struct MSBPFunctionLibrary_eventSetEntityForce_Parms
	{
		FMSEntityViewBPWrapper EntityHandle;
		FVector Force;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::NewProp_EntityHandle = { "EntityHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSetEntityForce_Parms, EntityHandle), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityHandle_MetaData), NewProp_EntityHandle_MetaData) }; // 4214274932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSetEntityForce_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::NewProp_EntityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "SetEntityForce", Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::MSBPFunctionLibrary_eventSetEntityForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::MSBPFunctionLibrary_eventSetEntityForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execSetEntityForce)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_EntityHandle);
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMSBPFunctionLibrary::SetEntityForce(Z_Param_EntityHandle,Z_Param_Force);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function SetEntityForce *******************************

// ********** Begin Class UMSBPFunctionLibrary Function SetEntityFragment **************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics
{
	struct MSBPFunctionLibrary_eventSetEntityFragment_Parms
	{
		FMSEntityViewBPWrapper Entity;
		FInstancedStruct Fragment;
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets an entity's fragment data or adds it if it's ins't present. This might need more testing...\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets an entity's fragment data or adds it if it's ins't present. This might need more testing..." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Fragment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSetEntityFragment_Parms, Entity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::NewProp_Fragment = { "Fragment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSetEntityFragment_Parms, Fragment), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSetEntityFragment_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::NewProp_Fragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "SetEntityFragment", Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::MSBPFunctionLibrary_eventSetEntityFragment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::MSBPFunctionLibrary_eventSetEntityFragment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execSetEntityFragment)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_Entity);
	P_GET_STRUCT(FInstancedStruct,Z_Param_Fragment);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMSBPFunctionLibrary::SetEntityFragment(Z_Param_Entity,Z_Param_Fragment,Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function SetEntityFragment ****************************

// ********** Begin Class UMSBPFunctionLibrary Function SetEntityTransform *************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics
{
	struct MSBPFunctionLibrary_eventSetEntityTransform_Parms
	{
		FMSEntityViewBPWrapper EntityHandle;
		FTransform Transform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::NewProp_EntityHandle = { "EntityHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSetEntityTransform_Parms, EntityHandle), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityHandle_MetaData), NewProp_EntityHandle_MetaData) }; // 4214274932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSetEntityTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::NewProp_EntityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "SetEntityTransform", Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::MSBPFunctionLibrary_eventSetEntityTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::MSBPFunctionLibrary_eventSetEntityTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execSetEntityTransform)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_EntityHandle);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMSBPFunctionLibrary::SetEntityTransform(Z_Param_EntityHandle,Z_Param_Transform);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function SetEntityTransform ***************************

// ********** Begin Class UMSBPFunctionLibrary Function SetEntityVelocity **************************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics
{
	struct MSBPFunctionLibrary_eventSetEntityVelocity_Parms
	{
		FMSEntityViewBPWrapper EntityHandle;
		FVector Velocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::NewProp_EntityHandle = { "EntityHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSetEntityVelocity_Parms, EntityHandle), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSetEntityVelocity_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::NewProp_EntityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::NewProp_Velocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "SetEntityVelocity", Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::MSBPFunctionLibrary_eventSetEntityVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::MSBPFunctionLibrary_eventSetEntityVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execSetEntityVelocity)
{
	P_GET_STRUCT(FMSEntityViewBPWrapper,Z_Param_EntityHandle);
	P_GET_STRUCT(FVector,Z_Param_Velocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMSBPFunctionLibrary::SetEntityVelocity(Z_Param_EntityHandle,Z_Param_Velocity);
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function SetEntityVelocity ****************************

// ********** Begin Class UMSBPFunctionLibrary Function SpawnEntityFromEntityConfig ****************
struct Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics
{
	struct MSBPFunctionLibrary_eventSpawnEntityFromEntityConfig_Parms
	{
		UMassEntityConfigAsset* MassEntityConfig;
		const UObject* WorldContextObject;
		EReturnSuccess ReturnBranch;
		FMSEntityViewBPWrapper ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ExpandEnumAsExecs", "ReturnBranch" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MassEntityConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnBranch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnBranch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_MassEntityConfig = { "MassEntityConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSpawnEntityFromEntityConfig_Parms, MassEntityConfig), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSpawnEntityFromEntityConfig_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_ReturnBranch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_ReturnBranch = { "ReturnBranch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSpawnEntityFromEntityConfig_Parms, ReturnBranch), Z_Construct_UEnum_MassCommunitySample_EReturnSuccess, METADATA_PARAMS(0, nullptr) }; // 285403919
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSBPFunctionLibrary_eventSpawnEntityFromEntityConfig_Parms, ReturnValue), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_MassEntityConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_ReturnBranch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_ReturnBranch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSBPFunctionLibrary, nullptr, "SpawnEntityFromEntityConfig", Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::MSBPFunctionLibrary_eventSpawnEntityFromEntityConfig_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::MSBPFunctionLibrary_eventSpawnEntityFromEntityConfig_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSBPFunctionLibrary::execSpawnEntityFromEntityConfig)
{
	P_GET_OBJECT(UMassEntityConfigAsset,Z_Param_MassEntityConfig);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM_REF(EReturnSuccess,Z_Param_Out_ReturnBranch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMSEntityViewBPWrapper*)Z_Param__Result=UMSBPFunctionLibrary::SpawnEntityFromEntityConfig(Z_Param_MassEntityConfig,Z_Param_WorldContextObject,(EReturnSuccess&)(Z_Param_Out_ReturnBranch));
	P_NATIVE_END;
}
// ********** End Class UMSBPFunctionLibrary Function SpawnEntityFromEntityConfig ******************

// ********** Begin Class UMSBPFunctionLibrary *****************************************************
void UMSBPFunctionLibrary::StaticRegisterNativesUMSBPFunctionLibrary()
{
	UClass* Class = UMSBPFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakIndexToInt", &UMSBPFunctionLibrary::execBreakIndexToInt },
		{ "DestroyEntity", &UMSBPFunctionLibrary::execDestroyEntity },
		{ "EntityHasFragment", &UMSBPFunctionLibrary::execEntityHasFragment },
		{ "EntityHasFragment_OLD", &UMSBPFunctionLibrary::execEntityHasFragment_OLD },
		{ "EntityHasTag", &UMSBPFunctionLibrary::execEntityHasTag },
		{ "EntityHasTag_OLD", &UMSBPFunctionLibrary::execEntityHasTag_OLD },
		{ "FindClosestHashGridEntityInBox", &UMSBPFunctionLibrary::execFindClosestHashGridEntityInBox },
		{ "FindOctreeEntitiesInBox", &UMSBPFunctionLibrary::execFindOctreeEntitiesInBox },
		{ "GetEntityFragmentByType", &UMSBPFunctionLibrary::execGetEntityFragmentByType },
		{ "GetEntityTransform", &UMSBPFunctionLibrary::execGetEntityTransform },
		{ "GetEntityVelocity", &UMSBPFunctionLibrary::execGetEntityVelocity },
		{ "GetMassAgentEntity", &UMSBPFunctionLibrary::execGetMassAgentEntity },
		{ "GetMassEntityCount", &UMSBPFunctionLibrary::execGetMassEntityCount },
		{ "IsEntityValid", &UMSBPFunctionLibrary::execIsEntityValid },
		{ "SetEntityForce", &UMSBPFunctionLibrary::execSetEntityForce },
		{ "SetEntityFragment", &UMSBPFunctionLibrary::execSetEntityFragment },
		{ "SetEntityTransform", &UMSBPFunctionLibrary::execSetEntityTransform },
		{ "SetEntityVelocity", &UMSBPFunctionLibrary::execSetEntityVelocity },
		{ "SpawnEntityFromEntityConfig", &UMSBPFunctionLibrary::execSpawnEntityFromEntityConfig },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSBPFunctionLibrary;
UClass* UMSBPFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UMSBPFunctionLibrary;
	if (!Z_Registration_Info_UClass_UMSBPFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSBPFunctionLibrary"),
			Z_Registration_Info_UClass_UMSBPFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUMSBPFunctionLibrary,
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
	return Z_Registration_Info_UClass_UMSBPFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSBPFunctionLibrary_NoRegister()
{
	return UMSBPFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSBPFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Misc/MSBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Common/Misc/MSBPFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_BreakIndexToInt, "BreakIndexToInt" }, // 994830285
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_DestroyEntity, "DestroyEntity" }, // 1495667519
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment, "EntityHasFragment" }, // 3607328003
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasFragment_OLD, "EntityHasFragment_OLD" }, // 978396762
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag, "EntityHasTag" }, // 2266987169
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_EntityHasTag_OLD, "EntityHasTag_OLD" }, // 4139458096
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_FindClosestHashGridEntityInBox, "FindClosestHashGridEntityInBox" }, // 2757836886
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_FindOctreeEntitiesInBox, "FindOctreeEntitiesInBox" }, // 2565789822
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityFragmentByType, "GetEntityFragmentByType" }, // 2679669555
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityTransform, "GetEntityTransform" }, // 3520520848
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_GetEntityVelocity, "GetEntityVelocity" }, // 93936264
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassAgentEntity, "GetMassAgentEntity" }, // 3143975735
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_GetMassEntityCount, "GetMassEntityCount" }, // 1308274362
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_IsEntityValid, "IsEntityValid" }, // 3098456863
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityForce, "SetEntityForce" }, // 1344640088
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityFragment, "SetEntityFragment" }, // 2673973419
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityTransform, "SetEntityTransform" }, // 1865745512
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_SetEntityVelocity, "SetEntityVelocity" }, // 2676942515
		{ &Z_Construct_UFunction_UMSBPFunctionLibrary_SpawnEntityFromEntityConfig, "SpawnEntityFromEntityConfig" }, // 1194746524
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSBPFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSBPFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSBPFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSBPFunctionLibrary_Statics::ClassParams = {
	&UMSBPFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSBPFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSBPFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSBPFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMSBPFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMSBPFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSBPFunctionLibrary.OuterSingleton;
}
UMSBPFunctionLibrary::UMSBPFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSBPFunctionLibrary);
UMSBPFunctionLibrary::~UMSBPFunctionLibrary() {}
// ********** End Class UMSBPFunctionLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h__Script_MassCommunitySample_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EReturnSuccess_StaticEnum, TEXT("EReturnSuccess"), &Z_Registration_Info_UEnum_EReturnSuccess, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 285403919U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMSEntityViewBPWrapper::StaticStruct, Z_Construct_UScriptStruct_FMSEntityViewBPWrapper_Statics::NewStructOps, TEXT("MSEntityViewBPWrapper"), &Z_Registration_Info_UScriptStruct_FMSEntityViewBPWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSEntityViewBPWrapper), 4214274932U) },
		{ FMSEntityHandleBPWrapper::StaticStruct, Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper_Statics::NewStructOps, TEXT("MSEntityHandleBPWrapper"), &Z_Registration_Info_UScriptStruct_FMSEntityHandleBPWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSEntityHandleBPWrapper), 4103997747U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSBPFunctionLibrary, UMSBPFunctionLibrary::StaticClass, TEXT("UMSBPFunctionLibrary"), &Z_Registration_Info_UClass_UMSBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSBPFunctionLibrary), 2777316667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h__Script_MassCommunitySample_3266582639(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h__Script_MassCommunitySample_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h__Script_MassCommunitySample_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h__Script_MassCommunitySample_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
