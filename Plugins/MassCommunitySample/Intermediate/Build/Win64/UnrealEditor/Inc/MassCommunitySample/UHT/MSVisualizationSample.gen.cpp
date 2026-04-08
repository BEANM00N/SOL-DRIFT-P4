// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Processors/MSVisualizationSample.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSVisualizationSample() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSSampleVisualizationLODProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSSampleVisualizationLODProcessor_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSSampleVisualizationProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSSampleVisualizationProcessor_NoRegister();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationLODProcessor();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSSampleVisualizationProcessor ******************************************
void UMSSampleVisualizationProcessor::StaticRegisterNativesUMSSampleVisualizationProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSSampleVisualizationProcessor;
UClass* UMSSampleVisualizationProcessor::GetPrivateStaticClass()
{
	using TClass = UMSSampleVisualizationProcessor;
	if (!Z_Registration_Info_UClass_UMSSampleVisualizationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSSampleVisualizationProcessor"),
			Z_Registration_Info_UClass_UMSSampleVisualizationProcessor.InnerSingleton,
			StaticRegisterNativesUMSSampleVisualizationProcessor,
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
	return Z_Registration_Info_UClass_UMSSampleVisualizationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSSampleVisualizationProcessor_NoRegister()
{
	return UMSSampleVisualizationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSSampleVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Example processors demonstrating how to use the representation module\n */" },
#endif
		{ "IncludePath", "Common/Processors/MSVisualizationSample.h" },
		{ "ModuleRelativePath", "Common/Processors/MSVisualizationSample.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Example processors demonstrating how to use the representation module" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSSampleVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSSampleVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSSampleVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSSampleVisualizationProcessor_Statics::ClassParams = {
	&UMSSampleVisualizationProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSSampleVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSSampleVisualizationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSSampleVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMSSampleVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSSampleVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMSSampleVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSSampleVisualizationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSSampleVisualizationProcessor);
UMSSampleVisualizationProcessor::~UMSSampleVisualizationProcessor() {}
// ********** End Class UMSSampleVisualizationProcessor ********************************************

// ********** Begin Class UMSSampleVisualizationLODProcessor ***************************************
void UMSSampleVisualizationLODProcessor::StaticRegisterNativesUMSSampleVisualizationLODProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSSampleVisualizationLODProcessor;
UClass* UMSSampleVisualizationLODProcessor::GetPrivateStaticClass()
{
	using TClass = UMSSampleVisualizationLODProcessor;
	if (!Z_Registration_Info_UClass_UMSSampleVisualizationLODProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSSampleVisualizationLODProcessor"),
			Z_Registration_Info_UClass_UMSSampleVisualizationLODProcessor.InnerSingleton,
			StaticRegisterNativesUMSSampleVisualizationLODProcessor,
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
	return Z_Registration_Info_UClass_UMSSampleVisualizationLODProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSSampleVisualizationLODProcessor_NoRegister()
{
	return UMSSampleVisualizationLODProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSSampleVisualizationLODProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Processors/MSVisualizationSample.h" },
		{ "ModuleRelativePath", "Common/Processors/MSVisualizationSample.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSSampleVisualizationLODProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSSampleVisualizationLODProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationLODProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSSampleVisualizationLODProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSSampleVisualizationLODProcessor_Statics::ClassParams = {
	&UMSSampleVisualizationLODProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSSampleVisualizationLODProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSSampleVisualizationLODProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSSampleVisualizationLODProcessor()
{
	if (!Z_Registration_Info_UClass_UMSSampleVisualizationLODProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSSampleVisualizationLODProcessor.OuterSingleton, Z_Construct_UClass_UMSSampleVisualizationLODProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSSampleVisualizationLODProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSSampleVisualizationLODProcessor);
UMSSampleVisualizationLODProcessor::~UMSSampleVisualizationLODProcessor() {}
// ********** End Class UMSSampleVisualizationLODProcessor *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSVisualizationSample_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSSampleVisualizationProcessor, UMSSampleVisualizationProcessor::StaticClass, TEXT("UMSSampleVisualizationProcessor"), &Z_Registration_Info_UClass_UMSSampleVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSSampleVisualizationProcessor), 1945579418U) },
		{ Z_Construct_UClass_UMSSampleVisualizationLODProcessor, UMSSampleVisualizationLODProcessor::StaticClass, TEXT("UMSSampleVisualizationLODProcessor"), &Z_Registration_Info_UClass_UMSSampleVisualizationLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSSampleVisualizationLODProcessor), 3338253424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSVisualizationSample_h__Script_MassCommunitySample_4147100470(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSVisualizationSample_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSVisualizationSample_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
