// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Representation/Processors/ISMPerInstanceDataProcessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeISMPerInstanceDataProcessors() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UismPerInstanceDataUpdater();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UismPerInstanceDataUpdater_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UismPerInstanceDataUpdater ***********************************************
void UismPerInstanceDataUpdater::StaticRegisterNativesUismPerInstanceDataUpdater()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UismPerInstanceDataUpdater;
UClass* UismPerInstanceDataUpdater::GetPrivateStaticClass()
{
	using TClass = UismPerInstanceDataUpdater;
	if (!Z_Registration_Info_UClass_UismPerInstanceDataUpdater.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ismPerInstanceDataUpdater"),
			Z_Registration_Info_UClass_UismPerInstanceDataUpdater.InnerSingleton,
			StaticRegisterNativesUismPerInstanceDataUpdater,
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
	return Z_Registration_Info_UClass_UismPerInstanceDataUpdater.InnerSingleton;
}
UClass* Z_Construct_UClass_UismPerInstanceDataUpdater_NoRegister()
{
	return UismPerInstanceDataUpdater::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UismPerInstanceDataUpdater_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Representation/Processors/ISMPerInstanceDataProcessors.h" },
		{ "ModuleRelativePath", "Representation/Processors/ISMPerInstanceDataProcessors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UismPerInstanceDataUpdater>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UismPerInstanceDataUpdater_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UismPerInstanceDataUpdater_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UismPerInstanceDataUpdater_Statics::ClassParams = {
	&UismPerInstanceDataUpdater::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UismPerInstanceDataUpdater_Statics::Class_MetaDataParams), Z_Construct_UClass_UismPerInstanceDataUpdater_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UismPerInstanceDataUpdater()
{
	if (!Z_Registration_Info_UClass_UismPerInstanceDataUpdater.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UismPerInstanceDataUpdater.OuterSingleton, Z_Construct_UClass_UismPerInstanceDataUpdater_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UismPerInstanceDataUpdater.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UismPerInstanceDataUpdater);
UismPerInstanceDataUpdater::~UismPerInstanceDataUpdater() {}
// ********** End Class UismPerInstanceDataUpdater *************************************************

// ********** Begin Class UISMPerInstanceDataChangerExampleProcessor *******************************
void UISMPerInstanceDataChangerExampleProcessor::StaticRegisterNativesUISMPerInstanceDataChangerExampleProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UISMPerInstanceDataChangerExampleProcessor;
UClass* UISMPerInstanceDataChangerExampleProcessor::GetPrivateStaticClass()
{
	using TClass = UISMPerInstanceDataChangerExampleProcessor;
	if (!Z_Registration_Info_UClass_UISMPerInstanceDataChangerExampleProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ISMPerInstanceDataChangerExampleProcessor"),
			Z_Registration_Info_UClass_UISMPerInstanceDataChangerExampleProcessor.InnerSingleton,
			StaticRegisterNativesUISMPerInstanceDataChangerExampleProcessor,
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
	return Z_Registration_Info_UClass_UISMPerInstanceDataChangerExampleProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor_NoRegister()
{
	return UISMPerInstanceDataChangerExampleProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Representation/Processors/ISMPerInstanceDataProcessors.h" },
		{ "ModuleRelativePath", "Representation/Processors/ISMPerInstanceDataProcessors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISMPerInstanceDataChangerExampleProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor_Statics::ClassParams = {
	&UISMPerInstanceDataChangerExampleProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor()
{
	if (!Z_Registration_Info_UClass_UISMPerInstanceDataChangerExampleProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMPerInstanceDataChangerExampleProcessor.OuterSingleton, Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UISMPerInstanceDataChangerExampleProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UISMPerInstanceDataChangerExampleProcessor);
UISMPerInstanceDataChangerExampleProcessor::~UISMPerInstanceDataChangerExampleProcessor() {}
// ********** End Class UISMPerInstanceDataChangerExampleProcessor *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Processors_ISMPerInstanceDataProcessors_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UismPerInstanceDataUpdater, UismPerInstanceDataUpdater::StaticClass, TEXT("UismPerInstanceDataUpdater"), &Z_Registration_Info_UClass_UismPerInstanceDataUpdater, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UismPerInstanceDataUpdater), 3459480459U) },
		{ Z_Construct_UClass_UISMPerInstanceDataChangerExampleProcessor, UISMPerInstanceDataChangerExampleProcessor::StaticClass, TEXT("UISMPerInstanceDataChangerExampleProcessor"), &Z_Registration_Info_UClass_UISMPerInstanceDataChangerExampleProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMPerInstanceDataChangerExampleProcessor), 1464258795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Processors_ISMPerInstanceDataProcessors_h__Script_MassCommunitySample_2097825031(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Processors_ISMPerInstanceDataProcessors_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Processors_ISMPerInstanceDataProcessors_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
