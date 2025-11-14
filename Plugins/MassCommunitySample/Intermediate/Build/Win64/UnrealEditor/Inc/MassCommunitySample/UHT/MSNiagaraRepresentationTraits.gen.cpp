// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Representation/Traits/MSNiagaraRepresentationTraits.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSNiagaraRepresentationTraits() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSNiagaraRepresentationTrait();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSNiagaraRepresentationTrait_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSNiagaraRepresentationTrait ********************************************
void UMSNiagaraRepresentationTrait::StaticRegisterNativesUMSNiagaraRepresentationTrait()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSNiagaraRepresentationTrait;
UClass* UMSNiagaraRepresentationTrait::GetPrivateStaticClass()
{
	using TClass = UMSNiagaraRepresentationTrait;
	if (!Z_Registration_Info_UClass_UMSNiagaraRepresentationTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSNiagaraRepresentationTrait"),
			Z_Registration_Info_UClass_UMSNiagaraRepresentationTrait.InnerSingleton,
			StaticRegisterNativesUMSNiagaraRepresentationTrait,
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
	return Z_Registration_Info_UClass_UMSNiagaraRepresentationTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSNiagaraRepresentationTrait_NoRegister()
{
	return UMSNiagaraRepresentationTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Niagara Representation" },
		{ "IncludePath", "Representation/Traits/MSNiagaraRepresentationTraits.h" },
		{ "ModuleRelativePath", "Representation/Traits/MSNiagaraRepresentationTraits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedNiagaraSystem_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Representation/Traits/MSNiagaraRepresentationTraits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Representation/Traits/MSNiagaraRepresentationTraits.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Representation/Traits/MSNiagaraRepresentationTraits.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SharedNiagaraSystem;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSNiagaraRepresentationTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::NewProp_SharedNiagaraSystem = { "SharedNiagaraSystem", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSNiagaraRepresentationTrait, SharedNiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedNiagaraSystem_MetaData), NewProp_SharedNiagaraSystem_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSNiagaraRepresentationTrait, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSNiagaraRepresentationTrait, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverride_MetaData), NewProp_MaterialOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::NewProp_SharedNiagaraSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::NewProp_MaterialOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::ClassParams = {
	&UMSNiagaraRepresentationTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::PropPointers),
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSNiagaraRepresentationTrait()
{
	if (!Z_Registration_Info_UClass_UMSNiagaraRepresentationTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSNiagaraRepresentationTrait.OuterSingleton, Z_Construct_UClass_UMSNiagaraRepresentationTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSNiagaraRepresentationTrait.OuterSingleton;
}
UMSNiagaraRepresentationTrait::UMSNiagaraRepresentationTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSNiagaraRepresentationTrait);
UMSNiagaraRepresentationTrait::~UMSNiagaraRepresentationTrait() {}
// ********** End Class UMSNiagaraRepresentationTrait **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Traits_MSNiagaraRepresentationTraits_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSNiagaraRepresentationTrait, UMSNiagaraRepresentationTrait::StaticClass, TEXT("UMSNiagaraRepresentationTrait"), &Z_Registration_Info_UClass_UMSNiagaraRepresentationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSNiagaraRepresentationTrait), 4240357245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Traits_MSNiagaraRepresentationTraits_h__Script_MassCommunitySample_1225870622(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Traits_MSNiagaraRepresentationTraits_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Traits_MSNiagaraRepresentationTraits_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
