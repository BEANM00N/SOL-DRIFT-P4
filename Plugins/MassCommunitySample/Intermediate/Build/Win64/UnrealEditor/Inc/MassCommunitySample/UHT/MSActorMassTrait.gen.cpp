// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Traits/MSActorMassTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSActorMassTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSActorMassTrait();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSActorMassTrait_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSActorMassTrait ********************************************************
void UMSActorMassTrait::StaticRegisterNativesUMSActorMassTrait()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSActorMassTrait;
UClass* UMSActorMassTrait::GetPrivateStaticClass()
{
	using TClass = UMSActorMassTrait;
	if (!Z_Registration_Info_UClass_UMSActorMassTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSActorMassTrait"),
			Z_Registration_Info_UClass_UMSActorMassTrait.InnerSingleton,
			StaticRegisterNativesUMSActorMassTrait,
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
	return Z_Registration_Info_UClass_UMSActorMassTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSActorMassTrait_NoRegister()
{
	return UMSActorMassTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSActorMassTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Sample Actor Trait" },
		{ "IncludePath", "Common/Traits/MSActorMassTrait.h" },
		{ "ModuleRelativePath", "Common/Traits/MSActorMassTrait.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSActorMassTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSActorMassTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSActorMassTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSActorMassTrait_Statics::ClassParams = {
	&UMSActorMassTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSActorMassTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSActorMassTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSActorMassTrait()
{
	if (!Z_Registration_Info_UClass_UMSActorMassTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSActorMassTrait.OuterSingleton, Z_Construct_UClass_UMSActorMassTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSActorMassTrait.OuterSingleton;
}
UMSActorMassTrait::UMSActorMassTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSActorMassTrait);
UMSActorMassTrait::~UMSActorMassTrait() {}
// ********** End Class UMSActorMassTrait **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSActorMassTrait_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSActorMassTrait, UMSActorMassTrait::StaticClass, TEXT("UMSActorMassTrait"), &Z_Registration_Info_UClass_UMSActorMassTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSActorMassTrait), 3106011759U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSActorMassTrait_h__Script_MassCommunitySample_2383801886(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSActorMassTrait_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSActorMassTrait_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
