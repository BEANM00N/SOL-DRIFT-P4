// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Physics/MSMassPhysics.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSMassPhysics() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMassSamplePhysicsStorage();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMassSamplePhysicsStorage_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassSamplePhysicsStorage ************************************************
void UMassSamplePhysicsStorage::StaticRegisterNativesUMassSamplePhysicsStorage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMassSamplePhysicsStorage;
UClass* UMassSamplePhysicsStorage::GetPrivateStaticClass()
{
	using TClass = UMassSamplePhysicsStorage;
	if (!Z_Registration_Info_UClass_UMassSamplePhysicsStorage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MassSamplePhysicsStorage"),
			Z_Registration_Info_UClass_UMassSamplePhysicsStorage.InnerSingleton,
			StaticRegisterNativesUMassSamplePhysicsStorage,
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
	return Z_Registration_Info_UClass_UMassSamplePhysicsStorage.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassSamplePhysicsStorage_NoRegister()
{
	return UMassSamplePhysicsStorage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassSamplePhysicsStorage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Experimental/Physics/MSMassPhysics.h" },
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSamplePhysicsStorage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMassSamplePhysicsStorage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSamplePhysicsStorage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMassSamplePhysicsStorage_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPhysicsBodyInstanceOwnerResolver_NoRegister, (int32)VTABLE_OFFSET(UMassSamplePhysicsStorage, IPhysicsBodyInstanceOwnerResolver), false },  // 3425550997
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSamplePhysicsStorage_Statics::ClassParams = {
	&UMassSamplePhysicsStorage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSamplePhysicsStorage_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassSamplePhysicsStorage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassSamplePhysicsStorage()
{
	if (!Z_Registration_Info_UClass_UMassSamplePhysicsStorage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSamplePhysicsStorage.OuterSingleton, Z_Construct_UClass_UMassSamplePhysicsStorage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassSamplePhysicsStorage.OuterSingleton;
}
UMassSamplePhysicsStorage::UMassSamplePhysicsStorage() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSamplePhysicsStorage);
UMassSamplePhysicsStorage::~UMassSamplePhysicsStorage() {}
// ********** End Class UMassSamplePhysicsStorage **************************************************

// ********** Begin Class UMSChaosMassTranslationProcessorsProcessors ******************************
void UMSChaosMassTranslationProcessorsProcessors::StaticRegisterNativesUMSChaosMassTranslationProcessorsProcessors()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSChaosMassTranslationProcessorsProcessors;
UClass* UMSChaosMassTranslationProcessorsProcessors::GetPrivateStaticClass()
{
	using TClass = UMSChaosMassTranslationProcessorsProcessors;
	if (!Z_Registration_Info_UClass_UMSChaosMassTranslationProcessorsProcessors.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSChaosMassTranslationProcessorsProcessors"),
			Z_Registration_Info_UClass_UMSChaosMassTranslationProcessorsProcessors.InnerSingleton,
			StaticRegisterNativesUMSChaosMassTranslationProcessorsProcessors,
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
	return Z_Registration_Info_UClass_UMSChaosMassTranslationProcessorsProcessors.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors_NoRegister()
{
	return UMSChaosMassTranslationProcessorsProcessors::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Experimental/Physics/MSMassPhysics.h" },
		{ "ModuleRelativePath", "Experimental/Physics/MSMassPhysics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSChaosMassTranslationProcessorsProcessors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors_Statics::ClassParams = {
	&UMSChaosMassTranslationProcessorsProcessors::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors()
{
	if (!Z_Registration_Info_UClass_UMSChaosMassTranslationProcessorsProcessors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSChaosMassTranslationProcessorsProcessors.OuterSingleton, Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSChaosMassTranslationProcessorsProcessors.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSChaosMassTranslationProcessorsProcessors);
UMSChaosMassTranslationProcessorsProcessors::~UMSChaosMassTranslationProcessorsProcessors() {}
// ********** End Class UMSChaosMassTranslationProcessorsProcessors ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassPhysics_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassSamplePhysicsStorage, UMassSamplePhysicsStorage::StaticClass, TEXT("UMassSamplePhysicsStorage"), &Z_Registration_Info_UClass_UMassSamplePhysicsStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSamplePhysicsStorage), 136161878U) },
		{ Z_Construct_UClass_UMSChaosMassTranslationProcessorsProcessors, UMSChaosMassTranslationProcessorsProcessors::StaticClass, TEXT("UMSChaosMassTranslationProcessorsProcessors"), &Z_Registration_Info_UClass_UMSChaosMassTranslationProcessorsProcessors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSChaosMassTranslationProcessorsProcessors), 1029732357U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassPhysics_h__Script_MassCommunitySample_3075320378(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassPhysics_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSMassPhysics_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
