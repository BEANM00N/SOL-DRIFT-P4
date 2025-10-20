// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPathFindPath.h"
#include "CPathNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPathFindPath() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CPATHFINDING_API UClass* Z_Construct_UClass_ACPathVolume_NoRegister();
CPATHFINDING_API UClass* Z_Construct_UClass_UCPathAsyncFindPath();
CPATHFINDING_API UClass* Z_Construct_UClass_UCPathAsyncFindPath_NoRegister();
CPATHFINDING_API UEnum* Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason();
CPATHFINDING_API UFunction* Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature();
CPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FCPathNode();
CPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FCPathResult();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_CPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FResponseDelegate *****************************************************
struct Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics
{
	struct _Script_CPathfinding_eventResponseDelegate_Parms
	{
		TArray<FCPathNode> Path;
		TEnumAsByte<ECPathfindingFailReason> FailReason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPathFindPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCPathNode, METADATA_PARAMS(0, nullptr) }; // 1717991457
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CPathfinding_eventResponseDelegate_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) }; // 1717991457
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CPathfinding_eventResponseDelegate_Parms, FailReason), Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason, METADATA_PARAMS(0, nullptr) }; // 4250217323
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::NewProp_FailReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CPathfinding, nullptr, "ResponseDelegate__DelegateSignature", Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::_Script_CPathfinding_eventResponseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::_Script_CPathfinding_eventResponseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponseDelegate, TArray<FCPathNode> const& Path, ECPathfindingFailReason FailReason)
{
	struct _Script_CPathfinding_eventResponseDelegate_Parms
	{
		TArray<FCPathNode> Path;
		TEnumAsByte<ECPathfindingFailReason> FailReason;
	};
	_Script_CPathfinding_eventResponseDelegate_Parms Parms;
	Parms.Path=Path;
	Parms.FailReason=FailReason;
	ResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FResponseDelegate *******************************************************

// ********** Begin Class UCPathAsyncFindPath Function FindPathAsync *******************************
struct Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics
{
	struct CPathAsyncFindPath_eventFindPathAsync_Parms
	{
		ACPathVolume* Volume;
		FVector StartLocation;
		FVector EndLocation;
		int32 SmoothingPasses;
		int32 UserData;
		float TimeLimit;
		UCPathAsyncFindPath* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "CPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// On success, returns a path from Start to End location. Both start and end must be inside the given Volume.\n// If start or end is unreachable (or time limit was exceeded), returns nothing.\n// SmoothingPasses - During a smoothing pass, every other node is potentially removed, as long as there is an empty space to the next one.\n// With SmoothingPasses=0, the path will be very jagged since the graph is Discrete.\n// With SmoothingPasses > 2 there is a potential loss of data, especially if the CalcFitness method has been overriden\n" },
#endif
		{ "CPP_Default_SmoothingPasses", "2" },
		{ "CPP_Default_TimeLimit", "0.200000" },
		{ "CPP_Default_UserData", "0" },
		{ "ModuleRelativePath", "Public/CPathFindPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "On success, returns a path from Start to End location. Both start and end must be inside the given Volume.\nIf start or end is unreachable (or time limit was exceeded), returns nothing.\nSmoothingPasses - During a smoothing pass, every other node is potentially removed, as long as there is an empty space to the next one.\nWith SmoothingPasses=0, the path will be very jagged since the graph is Discrete.\nWith SmoothingPasses > 2 there is a potential loss of data, especially if the CalcFitness method has been overriden" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingPasses;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathAsyncFindPath_eventFindPathAsync_Parms, Volume), Z_Construct_UClass_ACPathVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathAsyncFindPath_eventFindPathAsync_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathAsyncFindPath_eventFindPathAsync_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_SmoothingPasses = { "SmoothingPasses", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathAsyncFindPath_eventFindPathAsync_Parms, SmoothingPasses), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathAsyncFindPath_eventFindPathAsync_Parms, UserData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathAsyncFindPath_eventFindPathAsync_Parms, TimeLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathAsyncFindPath_eventFindPathAsync_Parms, ReturnValue), Z_Construct_UClass_UCPathAsyncFindPath_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_SmoothingPasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_UserData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_TimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPathAsyncFindPath, nullptr, "FindPathAsync", Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::CPathAsyncFindPath_eventFindPathAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::CPathAsyncFindPath_eventFindPathAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPathAsyncFindPath::execFindPathAsync)
{
	P_GET_OBJECT(ACPathVolume,Z_Param_Volume);
	P_GET_STRUCT(FVector,Z_Param_StartLocation);
	P_GET_STRUCT(FVector,Z_Param_EndLocation);
	P_GET_PROPERTY(FIntProperty,Z_Param_SmoothingPasses);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeLimit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCPathAsyncFindPath**)Z_Param__Result=UCPathAsyncFindPath::FindPathAsync(Z_Param_Volume,Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_SmoothingPasses,Z_Param_UserData,Z_Param_TimeLimit);
	P_NATIVE_END;
}
// ********** End Class UCPathAsyncFindPath Function FindPathAsync *********************************

// ********** Begin Class UCPathAsyncFindPath Function OnPathFound *********************************
struct Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics
{
	struct CPathAsyncFindPath_eventOnPathFound_Parms
	{
		FCPathResult PathResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPathFindPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::NewProp_PathResult = { "PathResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathAsyncFindPath_eventOnPathFound_Parms, PathResult), Z_Construct_UScriptStruct_FCPathResult, METADATA_PARAMS(0, nullptr) }; // 149891058
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::NewProp_PathResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPathAsyncFindPath, nullptr, "OnPathFound", Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::CPathAsyncFindPath_eventOnPathFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::CPathAsyncFindPath_eventOnPathFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPathAsyncFindPath::execOnPathFound)
{
	P_GET_STRUCT_REF(FCPathResult,Z_Param_Out_PathResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPathFound(Z_Param_Out_PathResult);
	P_NATIVE_END;
}
// ********** End Class UCPathAsyncFindPath Function OnPathFound ***********************************

// ********** Begin Class UCPathAsyncFindPath ******************************************************
void UCPathAsyncFindPath::StaticRegisterNativesUCPathAsyncFindPath()
{
	UClass* Class = UCPathAsyncFindPath::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindPathAsync", &UCPathAsyncFindPath::execFindPathAsync },
		{ "OnPathFound", &UCPathAsyncFindPath::execOnPathFound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPathAsyncFindPath;
UClass* UCPathAsyncFindPath::GetPrivateStaticClass()
{
	using TClass = UCPathAsyncFindPath;
	if (!Z_Registration_Info_UClass_UCPathAsyncFindPath.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPathAsyncFindPath"),
			Z_Registration_Info_UClass_UCPathAsyncFindPath.InnerSingleton,
			StaticRegisterNativesUCPathAsyncFindPath,
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
	return Z_Registration_Info_UClass_UCPathAsyncFindPath.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPathAsyncFindPath_NoRegister()
{
	return UCPathAsyncFindPath::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPathAsyncFindPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n This is the class that creates the FindPathAsync node in Blueprints\n */" },
#endif
		{ "IncludePath", "CPathFindPath.h" },
		{ "ModuleRelativePath", "Public/CPathFindPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is the class that creates the FindPathAsync node in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPathFindPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/CPathFindPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPathAsyncFindPath_FindPathAsync, "FindPathAsync" }, // 1692608806
		{ &Z_Construct_UFunction_UCPathAsyncFindPath_OnPathFound, "OnPathFound" }, // 220488010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPathAsyncFindPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCPathAsyncFindPath_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPathAsyncFindPath, Success), Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Success_MetaData), NewProp_Success_MetaData) }; // 2968993893
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCPathAsyncFindPath_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPathAsyncFindPath, Failure), Z_Construct_UDelegateFunction_CPathfinding_ResponseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Failure_MetaData), NewProp_Failure_MetaData) }; // 2968993893
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPathAsyncFindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPathAsyncFindPath_Statics::NewProp_Success,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPathAsyncFindPath_Statics::NewProp_Failure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPathAsyncFindPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPathAsyncFindPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPathfinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPathAsyncFindPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPathAsyncFindPath_Statics::ClassParams = {
	&UCPathAsyncFindPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPathAsyncFindPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPathAsyncFindPath_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPathAsyncFindPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPathAsyncFindPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPathAsyncFindPath()
{
	if (!Z_Registration_Info_UClass_UCPathAsyncFindPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPathAsyncFindPath.OuterSingleton, Z_Construct_UClass_UCPathAsyncFindPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPathAsyncFindPath.OuterSingleton;
}
UCPathAsyncFindPath::UCPathAsyncFindPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPathAsyncFindPath);
UCPathAsyncFindPath::~UCPathAsyncFindPath() {}
// ********** End Class UCPathAsyncFindPath ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h__Script_CPathfinding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPathAsyncFindPath, UCPathAsyncFindPath::StaticClass, TEXT("UCPathAsyncFindPath"), &Z_Registration_Info_UClass_UCPathAsyncFindPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPathAsyncFindPath), 59482786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h__Script_CPathfinding_273006249(TEXT("/Script/CPathfinding"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h__Script_CPathfinding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h__Script_CPathfinding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
