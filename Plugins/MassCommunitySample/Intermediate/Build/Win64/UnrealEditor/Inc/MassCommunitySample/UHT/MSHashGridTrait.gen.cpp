// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Traits/MSHashGridTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSHashGridTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSHashGridTrait();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSHashGridTrait_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSHashGridTrait *********************************************************
void UMSHashGridTrait::StaticRegisterNativesUMSHashGridTrait()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSHashGridTrait;
UClass* UMSHashGridTrait::GetPrivateStaticClass()
{
	using TClass = UMSHashGridTrait;
	if (!Z_Registration_Info_UClass_UMSHashGridTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSHashGridTrait"),
			Z_Registration_Info_UClass_UMSHashGridTrait.InnerSingleton,
			StaticRegisterNativesUMSHashGridTrait,
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
	return Z_Registration_Info_UClass_UMSHashGridTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSHashGridTrait_NoRegister()
{
	return UMSHashGridTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSHashGridTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  This will subscribe the entity to our simple 3d octree so we can query for its position relatively quickly\n */" },
#endif
		{ "DisplayName", "Mass Sample Octree Grid Member" },
		{ "IncludePath", "Common/Traits/MSHashGridTrait.h" },
		{ "ModuleRelativePath", "Common/Traits/MSHashGridTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This will subscribe the entity to our simple 3d octree so we can query for its position relatively quickly" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSHashGridTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSHashGridTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSHashGridTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSHashGridTrait_Statics::ClassParams = {
	&UMSHashGridTrait::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSHashGridTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSHashGridTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSHashGridTrait()
{
	if (!Z_Registration_Info_UClass_UMSHashGridTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSHashGridTrait.OuterSingleton, Z_Construct_UClass_UMSHashGridTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSHashGridTrait.OuterSingleton;
}
UMSHashGridTrait::UMSHashGridTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSHashGridTrait);
UMSHashGridTrait::~UMSHashGridTrait() {}
// ********** End Class UMSHashGridTrait ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSHashGridTrait_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSHashGridTrait, UMSHashGridTrait::StaticClass, TEXT("UMSHashGridTrait"), &Z_Registration_Info_UClass_UMSHashGridTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSHashGridTrait), 3678313446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSHashGridTrait_h__Script_MassCommunitySample_3294922462(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSHashGridTrait_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSHashGridTrait_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
