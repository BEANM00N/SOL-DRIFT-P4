// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Processors/MSInterpMovementProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSInterpMovementProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSInterpMovementProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSInterpMovementProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSInterpMovementProcessor ***********************************************
void UMSInterpMovementProcessor::StaticRegisterNativesUMSInterpMovementProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSInterpMovementProcessor;
UClass* UMSInterpMovementProcessor::GetPrivateStaticClass()
{
	using TClass = UMSInterpMovementProcessor;
	if (!Z_Registration_Info_UClass_UMSInterpMovementProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSInterpMovementProcessor"),
			Z_Registration_Info_UClass_UMSInterpMovementProcessor.InnerSingleton,
			StaticRegisterNativesUMSInterpMovementProcessor,
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
	return Z_Registration_Info_UClass_UMSInterpMovementProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSInterpMovementProcessor_NoRegister()
{
	return UMSInterpMovementProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSInterpMovementProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Common/Processors/MSInterpMovementProcessor.h" },
		{ "ModuleRelativePath", "Common/Processors/MSInterpMovementProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSInterpMovementProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSInterpMovementProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSInterpMovementProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSInterpMovementProcessor_Statics::ClassParams = {
	&UMSInterpMovementProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSInterpMovementProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSInterpMovementProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSInterpMovementProcessor()
{
	if (!Z_Registration_Info_UClass_UMSInterpMovementProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSInterpMovementProcessor.OuterSingleton, Z_Construct_UClass_UMSInterpMovementProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSInterpMovementProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSInterpMovementProcessor);
UMSInterpMovementProcessor::~UMSInterpMovementProcessor() {}
// ********** End Class UMSInterpMovementProcessor *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSInterpMovementProcessor_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSInterpMovementProcessor, UMSInterpMovementProcessor::StaticClass, TEXT("UMSInterpMovementProcessor"), &Z_Registration_Info_UClass_UMSInterpMovementProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSInterpMovementProcessor), 3541121543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSInterpMovementProcessor_h__Script_MassCommunitySample_2428268122(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSInterpMovementProcessor_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSInterpMovementProcessor_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
