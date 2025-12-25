// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectileSim/Processors/MSProjectileSimProcessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSProjectileSimProcessors() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSProjectileSimProcessors();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSProjectileSimProcessors_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSProjectileSimProcessors ***********************************************
void UMSProjectileSimProcessors::StaticRegisterNativesUMSProjectileSimProcessors()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSProjectileSimProcessors;
UClass* UMSProjectileSimProcessors::GetPrivateStaticClass()
{
	using TClass = UMSProjectileSimProcessors;
	if (!Z_Registration_Info_UClass_UMSProjectileSimProcessors.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSProjectileSimProcessors"),
			Z_Registration_Info_UClass_UMSProjectileSimProcessors.InnerSingleton,
			StaticRegisterNativesUMSProjectileSimProcessors,
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
	return Z_Registration_Info_UClass_UMSProjectileSimProcessors.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSProjectileSimProcessors_NoRegister()
{
	return UMSProjectileSimProcessors::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSProjectileSimProcessors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ProjectileSim/Processors/MSProjectileSimProcessors.h" },
		{ "ModuleRelativePath", "ProjectileSim/Processors/MSProjectileSimProcessors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSProjectileSimProcessors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSProjectileSimProcessors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileSimProcessors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSProjectileSimProcessors_Statics::ClassParams = {
	&UMSProjectileSimProcessors::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileSimProcessors_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSProjectileSimProcessors_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSProjectileSimProcessors()
{
	if (!Z_Registration_Info_UClass_UMSProjectileSimProcessors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSProjectileSimProcessors.OuterSingleton, Z_Construct_UClass_UMSProjectileSimProcessors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSProjectileSimProcessors.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSProjectileSimProcessors);
UMSProjectileSimProcessors::~UMSProjectileSimProcessors() {}
// ********** End Class UMSProjectileSimProcessors *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Processors_MSProjectileSimProcessors_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSProjectileSimProcessors, UMSProjectileSimProcessors::StaticClass, TEXT("UMSProjectileSimProcessors"), &Z_Registration_Info_UClass_UMSProjectileSimProcessors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSProjectileSimProcessors), 3113410739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Processors_MSProjectileSimProcessors_h__Script_MassCommunitySample_3200760739(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Processors_MSProjectileSimProcessors_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Processors_MSProjectileSimProcessors_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
