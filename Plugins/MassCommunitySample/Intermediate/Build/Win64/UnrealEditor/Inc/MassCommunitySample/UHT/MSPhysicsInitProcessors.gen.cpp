// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Physics/MSPhysicsInitProcessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSPhysicsInitProcessors() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSPhysicsCleanupProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSPhysicsCleanupProcessor_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSPhysicsInitProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSPhysicsInitProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSPhysicsInitProcessor **************************************************
void UMSPhysicsInitProcessor::StaticRegisterNativesUMSPhysicsInitProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSPhysicsInitProcessor;
UClass* UMSPhysicsInitProcessor::GetPrivateStaticClass()
{
	using TClass = UMSPhysicsInitProcessor;
	if (!Z_Registration_Info_UClass_UMSPhysicsInitProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSPhysicsInitProcessor"),
			Z_Registration_Info_UClass_UMSPhysicsInitProcessor.InnerSingleton,
			StaticRegisterNativesUMSPhysicsInitProcessor,
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
	return Z_Registration_Info_UClass_UMSPhysicsInitProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSPhysicsInitProcessor_NoRegister()
{
	return UMSPhysicsInitProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSPhysicsInitProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Inits new physics objects to the chaos simulation when a FMSMassPhysicsFragment is added\n */" },
#endif
		{ "IncludePath", "Experimental/Physics/MSPhysicsInitProcessors.h" },
		{ "ModuleRelativePath", "Experimental/Physics/MSPhysicsInitProcessors.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inits new physics objects to the chaos simulation when a FMSMassPhysicsFragment is added" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSPhysicsInitProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSPhysicsInitProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSPhysicsInitProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSPhysicsInitProcessor_Statics::ClassParams = {
	&UMSPhysicsInitProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSPhysicsInitProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSPhysicsInitProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSPhysicsInitProcessor()
{
	if (!Z_Registration_Info_UClass_UMSPhysicsInitProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSPhysicsInitProcessor.OuterSingleton, Z_Construct_UClass_UMSPhysicsInitProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSPhysicsInitProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSPhysicsInitProcessor);
UMSPhysicsInitProcessor::~UMSPhysicsInitProcessor() {}
// ********** End Class UMSPhysicsInitProcessor ****************************************************

// ********** Begin Class UMSPhysicsCleanupProcessor ***********************************************
void UMSPhysicsCleanupProcessor::StaticRegisterNativesUMSPhysicsCleanupProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSPhysicsCleanupProcessor;
UClass* UMSPhysicsCleanupProcessor::GetPrivateStaticClass()
{
	using TClass = UMSPhysicsCleanupProcessor;
	if (!Z_Registration_Info_UClass_UMSPhysicsCleanupProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSPhysicsCleanupProcessor"),
			Z_Registration_Info_UClass_UMSPhysicsCleanupProcessor.InnerSingleton,
			StaticRegisterNativesUMSPhysicsCleanupProcessor,
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
	return Z_Registration_Info_UClass_UMSPhysicsCleanupProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSPhysicsCleanupProcessor_NoRegister()
{
	return UMSPhysicsCleanupProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSPhysicsCleanupProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Experimental/Physics/MSPhysicsInitProcessors.h" },
		{ "ModuleRelativePath", "Experimental/Physics/MSPhysicsInitProcessors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSPhysicsCleanupProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSPhysicsCleanupProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSPhysicsCleanupProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSPhysicsCleanupProcessor_Statics::ClassParams = {
	&UMSPhysicsCleanupProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSPhysicsCleanupProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSPhysicsCleanupProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSPhysicsCleanupProcessor()
{
	if (!Z_Registration_Info_UClass_UMSPhysicsCleanupProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSPhysicsCleanupProcessor.OuterSingleton, Z_Construct_UClass_UMSPhysicsCleanupProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSPhysicsCleanupProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSPhysicsCleanupProcessor);
UMSPhysicsCleanupProcessor::~UMSPhysicsCleanupProcessor() {}
// ********** End Class UMSPhysicsCleanupProcessor *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSPhysicsInitProcessors_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSPhysicsInitProcessor, UMSPhysicsInitProcessor::StaticClass, TEXT("UMSPhysicsInitProcessor"), &Z_Registration_Info_UClass_UMSPhysicsInitProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSPhysicsInitProcessor), 3472752391U) },
		{ Z_Construct_UClass_UMSPhysicsCleanupProcessor, UMSPhysicsCleanupProcessor::StaticClass, TEXT("UMSPhysicsCleanupProcessor"), &Z_Registration_Info_UClass_UMSPhysicsCleanupProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSPhysicsCleanupProcessor), 718867593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSPhysicsInitProcessors_h__Script_MassCommunitySample_2473150403(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSPhysicsInitProcessors_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSPhysicsInitProcessors_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
