// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Representation/MSNiagaraSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSNiagaraSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_AMSNiagaraActor_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSNiagaraSubsystem();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSNiagaraSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSNiagaraSubsystem ******************************************************
void UMSNiagaraSubsystem::StaticRegisterNativesUMSNiagaraSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSNiagaraSubsystem;
UClass* UMSNiagaraSubsystem::GetPrivateStaticClass()
{
	using TClass = UMSNiagaraSubsystem;
	if (!Z_Registration_Info_UClass_UMSNiagaraSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSNiagaraSubsystem"),
			Z_Registration_Info_UClass_UMSNiagaraSubsystem.InnerSingleton,
			StaticRegisterNativesUMSNiagaraSubsystem,
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
	return Z_Registration_Info_UClass_UMSNiagaraSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSNiagaraSubsystem_NoRegister()
{
	return UMSNiagaraSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSNiagaraSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Representation/MSNiagaraSubsystem.h" },
		{ "ModuleRelativePath", "Representation/MSNiagaraSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreexistingSharedNiagaraActors_MetaData[] = {
		{ "ModuleRelativePath", "Representation/MSNiagaraSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreexistingSharedNiagaraActors_ValueProp;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PreexistingSharedNiagaraActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PreexistingSharedNiagaraActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSNiagaraSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSNiagaraSubsystem_Statics::NewProp_PreexistingSharedNiagaraActors_ValueProp = { "PreexistingSharedNiagaraActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AMSNiagaraActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMSNiagaraSubsystem_Statics::NewProp_PreexistingSharedNiagaraActors_Key_KeyProp = { "PreexistingSharedNiagaraActors_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMSNiagaraSubsystem_Statics::NewProp_PreexistingSharedNiagaraActors = { "PreexistingSharedNiagaraActors", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSNiagaraSubsystem, PreexistingSharedNiagaraActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreexistingSharedNiagaraActors_MetaData), NewProp_PreexistingSharedNiagaraActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSNiagaraSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSNiagaraSubsystem_Statics::NewProp_PreexistingSharedNiagaraActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSNiagaraSubsystem_Statics::NewProp_PreexistingSharedNiagaraActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSNiagaraSubsystem_Statics::NewProp_PreexistingSharedNiagaraActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSNiagaraSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSNiagaraSubsystem_Statics::ClassParams = {
	&UMSNiagaraSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSNiagaraSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSNiagaraSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSNiagaraSubsystem()
{
	if (!Z_Registration_Info_UClass_UMSNiagaraSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSNiagaraSubsystem.OuterSingleton, Z_Construct_UClass_UMSNiagaraSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSNiagaraSubsystem.OuterSingleton;
}
UMSNiagaraSubsystem::UMSNiagaraSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSNiagaraSubsystem);
UMSNiagaraSubsystem::~UMSNiagaraSubsystem() {}
// ********** End Class UMSNiagaraSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSNiagaraSubsystem_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSNiagaraSubsystem, UMSNiagaraSubsystem::StaticClass, TEXT("UMSNiagaraSubsystem"), &Z_Registration_Info_UClass_UMSNiagaraSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSNiagaraSubsystem), 3081823724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSNiagaraSubsystem_h__Script_MassCommunitySample_1268576756(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSNiagaraSubsystem_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSNiagaraSubsystem_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
