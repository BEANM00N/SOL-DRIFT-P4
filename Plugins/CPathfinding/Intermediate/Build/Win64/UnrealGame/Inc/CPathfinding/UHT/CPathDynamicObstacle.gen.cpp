// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPathDynamicObstacle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPathDynamicObstacle() {}

// ********** Begin Cross Module References ********************************************************
CPATHFINDING_API UClass* Z_Construct_UClass_UCPathDynamicObstacle();
CPATHFINDING_API UClass* Z_Construct_UClass_UCPathDynamicObstacle_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_CPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPathDynamicObstacle Function OnBeginOverlap ****************************
struct Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics
{
	struct CPathDynamicObstacle_eventOnBeginOverlap_Parms
	{
		AActor* Owner;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPathDynamicObstacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathDynamicObstacle_eventOnBeginOverlap_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathDynamicObstacle_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPathDynamicObstacle, nullptr, "OnBeginOverlap", Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::CPathDynamicObstacle_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::CPathDynamicObstacle_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPathDynamicObstacle::execOnBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_Owner,Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class UCPathDynamicObstacle Function OnBeginOverlap ******************************

// ********** Begin Class UCPathDynamicObstacle Function OnEndOverlap ******************************
struct Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics
{
	struct CPathDynamicObstacle_eventOnEndOverlap_Parms
	{
		AActor* Owner;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPathDynamicObstacle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathDynamicObstacle_eventOnEndOverlap_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathDynamicObstacle_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPathDynamicObstacle, nullptr, "OnEndOverlap", Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::CPathDynamicObstacle_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::CPathDynamicObstacle_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCPathDynamicObstacle::execOnEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_Owner,Z_Param_OtherActor);
	P_NATIVE_END;
}
// ********** End Class UCPathDynamicObstacle Function OnEndOverlap ********************************

// ********** Begin Class UCPathDynamicObstacle ****************************************************
void UCPathDynamicObstacle::StaticRegisterNativesUCPathDynamicObstacle()
{
	UClass* Class = UCPathDynamicObstacle::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBeginOverlap", &UCPathDynamicObstacle::execOnBeginOverlap },
		{ "OnEndOverlap", &UCPathDynamicObstacle::execOnEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPathDynamicObstacle;
UClass* UCPathDynamicObstacle::GetPrivateStaticClass()
{
	using TClass = UCPathDynamicObstacle;
	if (!Z_Registration_Info_UClass_UCPathDynamicObstacle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPathDynamicObstacle"),
			Z_Registration_Info_UClass_UCPathDynamicObstacle.InnerSingleton,
			StaticRegisterNativesUCPathDynamicObstacle,
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
	return Z_Registration_Info_UClass_UCPathDynamicObstacle.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPathDynamicObstacle_NoRegister()
{
	return UCPathDynamicObstacle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPathDynamicObstacle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Make sure this actor's collision has Generate Overlaps turned on.\n// Owning actor must be movable.\n// For better performance, call Deactivate() on this component once you dont need it to be updated anymore.\n// bAutoActivate should be left unckecked for this component.\n" },
#endif
		{ "IncludePath", "CPathDynamicObstacle.h" },
		{ "ModuleRelativePath", "Public/CPathDynamicObstacle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Make sure this actor's collision has Generate Overlaps turned on.\nOwning actor must be movable.\nFor better performance, call Deactivate() on this component once you dont need it to be updated anymore.\nbAutoActivate should be left unckecked for this component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappigVolumes_MetaData[] = {
		{ "Category", "CPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CPathVolumes that consider this actor an obstacle.\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathDynamicObstacle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CPathVolumes that consider this actor an obstacle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnBeginPlay_MetaData[] = {
		{ "Category", "CPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If this actor gets spawned inside a CPathVolume, it will tell the volume about it.\n// If this is left unchecked, you must make sure that this actor spawns outside of a CPathVolume, or do it manually.\n// If you spawn CPathVolume AFTEr this actor, you will need to handle overlaps manually.\n// In case of Level Streaming, CPathVolume should be placed on the same level as each actor it's supposed to track.\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathDynamicObstacle.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this actor gets spawned inside a CPathVolume, it will tell the volume about it.\nIf this is left unchecked, you must make sure that this actor spawns outside of a CPathVolume, or do it manually.\nIf you spawn CPathVolume AFTEr this actor, you will need to handle overlaps manually.\nIn case of Level Streaming, CPathVolume should be placed on the same level as each actor it's supposed to track." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappigVolumes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OverlappigVolumes;
	static void NewProp_ActivateOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateOnBeginPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPathDynamicObstacle_OnBeginOverlap, "OnBeginOverlap" }, // 330705056
		{ &Z_Construct_UFunction_UCPathDynamicObstacle_OnEndOverlap, "OnEndOverlap" }, // 4132840003
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPathDynamicObstacle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCPathDynamicObstacle_Statics::NewProp_OverlappigVolumes_ElementProp = { "OverlappigVolumes", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCPathDynamicObstacle_Statics::NewProp_OverlappigVolumes = { "OverlappigVolumes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCPathDynamicObstacle, OverlappigVolumes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappigVolumes_MetaData), NewProp_OverlappigVolumes_MetaData) };
void Z_Construct_UClass_UCPathDynamicObstacle_Statics::NewProp_ActivateOnBeginPlay_SetBit(void* Obj)
{
	((UCPathDynamicObstacle*)Obj)->ActivateOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPathDynamicObstacle_Statics::NewProp_ActivateOnBeginPlay = { "ActivateOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPathDynamicObstacle), &Z_Construct_UClass_UCPathDynamicObstacle_Statics::NewProp_ActivateOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnBeginPlay_MetaData), NewProp_ActivateOnBeginPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPathDynamicObstacle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPathDynamicObstacle_Statics::NewProp_OverlappigVolumes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPathDynamicObstacle_Statics::NewProp_OverlappigVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPathDynamicObstacle_Statics::NewProp_ActivateOnBeginPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPathDynamicObstacle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPathDynamicObstacle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CPathfinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPathDynamicObstacle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPathDynamicObstacle_Statics::ClassParams = {
	&UCPathDynamicObstacle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPathDynamicObstacle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPathDynamicObstacle_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPathDynamicObstacle_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPathDynamicObstacle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPathDynamicObstacle()
{
	if (!Z_Registration_Info_UClass_UCPathDynamicObstacle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPathDynamicObstacle.OuterSingleton, Z_Construct_UClass_UCPathDynamicObstacle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPathDynamicObstacle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPathDynamicObstacle);
UCPathDynamicObstacle::~UCPathDynamicObstacle() {}
// ********** End Class UCPathDynamicObstacle ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h__Script_CPathfinding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPathDynamicObstacle, UCPathDynamicObstacle::StaticClass, TEXT("UCPathDynamicObstacle"), &Z_Registration_Info_UClass_UCPathDynamicObstacle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPathDynamicObstacle), 924198207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h__Script_CPathfinding_1995226742(TEXT("/Script/CPathfinding"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h__Script_CPathfinding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h__Script_CPathfinding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
