// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectileSim/MassProjectileHitInterface.h"
#include "Common/Misc/MSBPFunctionLibrary.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMassProjectileHitInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMassProjectileHitInterface();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMassProjectileHitInterface_NoRegister();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSEntityViewBPWrapper();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UMassProjectileHitInterface Function ProjectileHit *******************
struct MassProjectileHitInterface_eventProjectileHit_Parms
{
	FMSEntityViewBPWrapper Entity;
	FHitResult HitResult;
};
void IMassProjectileHitInterface::ProjectileHit(FMSEntityViewBPWrapper Entity, FHitResult HitResult)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ProjectileHit instead.");
}
static FName NAME_UMassProjectileHitInterface_ProjectileHit = FName(TEXT("ProjectileHit"));
void IMassProjectileHitInterface::Execute_ProjectileHit(UObject* O, FMSEntityViewBPWrapper Entity, FHitResult HitResult)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMassProjectileHitInterface::StaticClass()));
	MassProjectileHitInterface_eventProjectileHit_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMassProjectileHitInterface_ProjectileHit);
	if (Func)
	{
		Parms.Entity=Entity;
		Parms.HitResult=HitResult;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "ProjectileSim/MassProjectileHitInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassProjectileHitInterface_eventProjectileHit_Parms, Entity), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 4214274932
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassProjectileHitInterface_eventProjectileHit_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::NewProp_Entity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassProjectileHitInterface, nullptr, "ProjectileHit", Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::PropPointers), sizeof(MassProjectileHitInterface_eventProjectileHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MassProjectileHitInterface_eventProjectileHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Interface UMassProjectileHitInterface Function ProjectileHit *********************

// ********** Begin Interface UMassProjectileHitInterface ******************************************
void UMassProjectileHitInterface::StaticRegisterNativesUMassProjectileHitInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMassProjectileHitInterface;
UClass* UMassProjectileHitInterface::GetPrivateStaticClass()
{
	using TClass = UMassProjectileHitInterface;
	if (!Z_Registration_Info_UClass_UMassProjectileHitInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MassProjectileHitInterface"),
			Z_Registration_Info_UClass_UMassProjectileHitInterface.InnerSingleton,
			StaticRegisterNativesUMassProjectileHitInterface,
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
	return Z_Registration_Info_UClass_UMassProjectileHitInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassProjectileHitInterface_NoRegister()
{
	return UMassProjectileHitInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassProjectileHitInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ProjectileSim/MassProjectileHitInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassProjectileHitInterface_ProjectileHit, "ProjectileHit" }, // 2982026026
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMassProjectileHitInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassProjectileHitInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProjectileHitInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassProjectileHitInterface_Statics::ClassParams = {
	&UMassProjectileHitInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassProjectileHitInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassProjectileHitInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassProjectileHitInterface()
{
	if (!Z_Registration_Info_UClass_UMassProjectileHitInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassProjectileHitInterface.OuterSingleton, Z_Construct_UClass_UMassProjectileHitInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassProjectileHitInterface.OuterSingleton;
}
UMassProjectileHitInterface::UMassProjectileHitInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassProjectileHitInterface);
// ********** End Interface UMassProjectileHitInterface ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassProjectileHitInterface, UMassProjectileHitInterface::StaticClass, TEXT("UMassProjectileHitInterface"), &Z_Registration_Info_UClass_UMassProjectileHitInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassProjectileHitInterface), 955978725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h__Script_MassCommunitySample_2711410409(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
