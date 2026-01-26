// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Processors/MSMovementProcessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSMovementProcessors() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSBasicMovementProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSBasicMovementProcessor_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSGravityProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSGravityProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSGravityProcessor ******************************************************
void UMSGravityProcessor::StaticRegisterNativesUMSGravityProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSGravityProcessor;
UClass* UMSGravityProcessor::GetPrivateStaticClass()
{
	using TClass = UMSGravityProcessor;
	if (!Z_Registration_Info_UClass_UMSGravityProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSGravityProcessor"),
			Z_Registration_Info_UClass_UMSGravityProcessor.InnerSingleton,
			StaticRegisterNativesUMSGravityProcessor,
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
	return Z_Registration_Info_UClass_UMSGravityProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSGravityProcessor_NoRegister()
{
	return UMSGravityProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSGravityProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Example processor demonstrating how to move entities found in query\n * Processors are called \"Systems\" in most ECS libraries. \n */" },
#endif
		{ "IncludePath", "Common/Processors/MSMovementProcessors.h" },
		{ "ModuleRelativePath", "Common/Processors/MSMovementProcessors.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Example processor demonstrating how to move entities found in query\nProcessors are called \"Systems\" in most ECS libraries." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSGravityProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSGravityProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSGravityProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSGravityProcessor_Statics::ClassParams = {
	&UMSGravityProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSGravityProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSGravityProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSGravityProcessor()
{
	if (!Z_Registration_Info_UClass_UMSGravityProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSGravityProcessor.OuterSingleton, Z_Construct_UClass_UMSGravityProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSGravityProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSGravityProcessor);
UMSGravityProcessor::~UMSGravityProcessor() {}
// ********** End Class UMSGravityProcessor ********************************************************

// ********** Begin Class UMSBasicMovementProcessor ************************************************
void UMSBasicMovementProcessor::StaticRegisterNativesUMSBasicMovementProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSBasicMovementProcessor;
UClass* UMSBasicMovementProcessor::GetPrivateStaticClass()
{
	using TClass = UMSBasicMovementProcessor;
	if (!Z_Registration_Info_UClass_UMSBasicMovementProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSBasicMovementProcessor"),
			Z_Registration_Info_UClass_UMSBasicMovementProcessor.InnerSingleton,
			StaticRegisterNativesUMSBasicMovementProcessor,
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
	return Z_Registration_Info_UClass_UMSBasicMovementProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSBasicMovementProcessor_NoRegister()
{
	return UMSBasicMovementProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSBasicMovementProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Example processor demonstrating how to move entities found in query\n * Processors are called \"Systems\" in most ECS libraries. \n */" },
#endif
		{ "IncludePath", "Common/Processors/MSMovementProcessors.h" },
		{ "ModuleRelativePath", "Common/Processors/MSMovementProcessors.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Example processor demonstrating how to move entities found in query\nProcessors are called \"Systems\" in most ECS libraries." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSBasicMovementProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSBasicMovementProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSBasicMovementProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSBasicMovementProcessor_Statics::ClassParams = {
	&UMSBasicMovementProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSBasicMovementProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSBasicMovementProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSBasicMovementProcessor()
{
	if (!Z_Registration_Info_UClass_UMSBasicMovementProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSBasicMovementProcessor.OuterSingleton, Z_Construct_UClass_UMSBasicMovementProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSBasicMovementProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSBasicMovementProcessor);
UMSBasicMovementProcessor::~UMSBasicMovementProcessor() {}
// ********** End Class UMSBasicMovementProcessor **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSMovementProcessors_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSGravityProcessor, UMSGravityProcessor::StaticClass, TEXT("UMSGravityProcessor"), &Z_Registration_Info_UClass_UMSGravityProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSGravityProcessor), 2039831037U) },
		{ Z_Construct_UClass_UMSBasicMovementProcessor, UMSBasicMovementProcessor::StaticClass, TEXT("UMSBasicMovementProcessor"), &Z_Registration_Info_UClass_UMSBasicMovementProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSBasicMovementProcessor), 927337173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSMovementProcessors_h__Script_MassCommunitySample_1893953968(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSMovementProcessors_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSMovementProcessors_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
