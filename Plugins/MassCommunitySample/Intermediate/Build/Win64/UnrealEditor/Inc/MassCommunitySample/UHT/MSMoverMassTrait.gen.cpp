// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Traits/MSMoverMassTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSMoverMassTrait() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSMoverMassTrait();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSMoverMassTrait_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSMoverMassTrait ********************************************************
void UMSMoverMassTrait::StaticRegisterNativesUMSMoverMassTrait()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSMoverMassTrait;
UClass* UMSMoverMassTrait::GetPrivateStaticClass()
{
	using TClass = UMSMoverMassTrait;
	if (!Z_Registration_Info_UClass_UMSMoverMassTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSMoverMassTrait"),
			Z_Registration_Info_UClass_UMSMoverMassTrait.InnerSingleton,
			StaticRegisterNativesUMSMoverMassTrait,
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
	return Z_Registration_Info_UClass_UMSMoverMassTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSMoverMassTrait_NoRegister()
{
	return UMSMoverMassTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSMoverMassTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This trait uses 2 fragments. One to set the location of the entity, and another one to feed a constant force to add.\n */" },
#endif
		{ "DisplayName", "Basic Mover Trait" },
		{ "IncludePath", "Common/Traits/MSMoverMassTrait.h" },
		{ "ModuleRelativePath", "Common/Traits/MSMoverMassTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This trait uses 2 fragments. One to set the location of the entity, and another one to feed a constant force to add." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingForce_MetaData[] = {
		{ "Category", "Mass" },
		{ "ModuleRelativePath", "Common/Traits/MSMoverMassTrait.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingForce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSMoverMassTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSMoverMassTrait_Statics::NewProp_StartingForce = { "StartingForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSMoverMassTrait, StartingForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingForce_MetaData), NewProp_StartingForce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSMoverMassTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSMoverMassTrait_Statics::NewProp_StartingForce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSMoverMassTrait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSMoverMassTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSMoverMassTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSMoverMassTrait_Statics::ClassParams = {
	&UMSMoverMassTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSMoverMassTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSMoverMassTrait_Statics::PropPointers),
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSMoverMassTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSMoverMassTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSMoverMassTrait()
{
	if (!Z_Registration_Info_UClass_UMSMoverMassTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSMoverMassTrait.OuterSingleton, Z_Construct_UClass_UMSMoverMassTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSMoverMassTrait.OuterSingleton;
}
UMSMoverMassTrait::UMSMoverMassTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSMoverMassTrait);
UMSMoverMassTrait::~UMSMoverMassTrait() {}
// ********** End Class UMSMoverMassTrait **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSMoverMassTrait_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSMoverMassTrait, UMSMoverMassTrait::StaticClass, TEXT("UMSMoverMassTrait"), &Z_Registration_Info_UClass_UMSMoverMassTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSMoverMassTrait), 2104001349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSMoverMassTrait_h__Script_MassCommunitySample_3167700324(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSMoverMassTrait_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSMoverMassTrait_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
