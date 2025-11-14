// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectileSim/Processors/MSProjectileHitObservers.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSProjectileHitObservers() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSEntityWasHitSignalProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSEntityWasHitSignalProcessor_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSProjectileHitObservers();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSProjectileHitObservers_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSProjectileHitObservers ************************************************
void UMSProjectileHitObservers::StaticRegisterNativesUMSProjectileHitObservers()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSProjectileHitObservers;
UClass* UMSProjectileHitObservers::GetPrivateStaticClass()
{
	using TClass = UMSProjectileHitObservers;
	if (!Z_Registration_Info_UClass_UMSProjectileHitObservers.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSProjectileHitObservers"),
			Z_Registration_Info_UClass_UMSProjectileHitObservers.InnerSingleton,
			StaticRegisterNativesUMSProjectileHitObservers,
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
	return Z_Registration_Info_UClass_UMSProjectileHitObservers.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSProjectileHitObservers_NoRegister()
{
	return UMSProjectileHitObservers::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSProjectileHitObservers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ProjectileSim/Processors/MSProjectileHitObservers.h" },
		{ "ModuleRelativePath", "ProjectileSim/Processors/MSProjectileHitObservers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSProjectileHitObservers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSProjectileHitObservers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileHitObservers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSProjectileHitObservers_Statics::ClassParams = {
	&UMSProjectileHitObservers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileHitObservers_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSProjectileHitObservers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSProjectileHitObservers()
{
	if (!Z_Registration_Info_UClass_UMSProjectileHitObservers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSProjectileHitObservers.OuterSingleton, Z_Construct_UClass_UMSProjectileHitObservers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSProjectileHitObservers.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSProjectileHitObservers);
UMSProjectileHitObservers::~UMSProjectileHitObservers() {}
// ********** End Class UMSProjectileHitObservers **************************************************

// ********** Begin Class UMSEntityWasHitSignalProcessor *******************************************
void UMSEntityWasHitSignalProcessor::StaticRegisterNativesUMSEntityWasHitSignalProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSEntityWasHitSignalProcessor;
UClass* UMSEntityWasHitSignalProcessor::GetPrivateStaticClass()
{
	using TClass = UMSEntityWasHitSignalProcessor;
	if (!Z_Registration_Info_UClass_UMSEntityWasHitSignalProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSEntityWasHitSignalProcessor"),
			Z_Registration_Info_UClass_UMSEntityWasHitSignalProcessor.InnerSingleton,
			StaticRegisterNativesUMSEntityWasHitSignalProcessor,
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
	return Z_Registration_Info_UClass_UMSEntityWasHitSignalProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSEntityWasHitSignalProcessor_NoRegister()
{
	return UMSEntityWasHitSignalProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSEntityWasHitSignalProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileSim/Processors/MSProjectileHitObservers.h" },
		{ "ModuleRelativePath", "ProjectileSim/Processors/MSProjectileHitObservers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSEntityWasHitSignalProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSEntityWasHitSignalProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassSignalProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSEntityWasHitSignalProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSEntityWasHitSignalProcessor_Statics::ClassParams = {
	&UMSEntityWasHitSignalProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSEntityWasHitSignalProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSEntityWasHitSignalProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSEntityWasHitSignalProcessor()
{
	if (!Z_Registration_Info_UClass_UMSEntityWasHitSignalProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSEntityWasHitSignalProcessor.OuterSingleton, Z_Construct_UClass_UMSEntityWasHitSignalProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSEntityWasHitSignalProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSEntityWasHitSignalProcessor);
UMSEntityWasHitSignalProcessor::~UMSEntityWasHitSignalProcessor() {}
// ********** End Class UMSEntityWasHitSignalProcessor *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Processors_MSProjectileHitObservers_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSProjectileHitObservers, UMSProjectileHitObservers::StaticClass, TEXT("UMSProjectileHitObservers"), &Z_Registration_Info_UClass_UMSProjectileHitObservers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSProjectileHitObservers), 1380000170U) },
		{ Z_Construct_UClass_UMSEntityWasHitSignalProcessor, UMSEntityWasHitSignalProcessor::StaticClass, TEXT("UMSEntityWasHitSignalProcessor"), &Z_Registration_Info_UClass_UMSEntityWasHitSignalProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSEntityWasHitSignalProcessor), 305413274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Processors_MSProjectileHitObservers_h__Script_MassCommunitySample_2741127843(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Processors_MSProjectileHitObservers_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Processors_MSProjectileHitObservers_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
