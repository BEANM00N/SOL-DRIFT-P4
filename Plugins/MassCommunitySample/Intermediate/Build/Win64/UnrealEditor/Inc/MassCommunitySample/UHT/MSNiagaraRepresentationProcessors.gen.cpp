// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Representation/Processors/MSNiagaraRepresentationProcessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSNiagaraRepresentationProcessors() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSNiagaraRepresentationProcessors();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSNiagaraRepresentationProcessors_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSNiagaraRepresentationProcessors ***************************************
void UMSNiagaraRepresentationProcessors::StaticRegisterNativesUMSNiagaraRepresentationProcessors()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSNiagaraRepresentationProcessors;
UClass* UMSNiagaraRepresentationProcessors::GetPrivateStaticClass()
{
	using TClass = UMSNiagaraRepresentationProcessors;
	if (!Z_Registration_Info_UClass_UMSNiagaraRepresentationProcessors.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSNiagaraRepresentationProcessors"),
			Z_Registration_Info_UClass_UMSNiagaraRepresentationProcessors.InnerSingleton,
			StaticRegisterNativesUMSNiagaraRepresentationProcessors,
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
	return Z_Registration_Info_UClass_UMSNiagaraRepresentationProcessors.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSNiagaraRepresentationProcessors_NoRegister()
{
	return UMSNiagaraRepresentationProcessors::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSNiagaraRepresentationProcessors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Representation/Processors/MSNiagaraRepresentationProcessors.h" },
		{ "ModuleRelativePath", "Representation/Processors/MSNiagaraRepresentationProcessors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSNiagaraRepresentationProcessors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSNiagaraRepresentationProcessors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraRepresentationProcessors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSNiagaraRepresentationProcessors_Statics::ClassParams = {
	&UMSNiagaraRepresentationProcessors::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraRepresentationProcessors_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSNiagaraRepresentationProcessors_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSNiagaraRepresentationProcessors()
{
	if (!Z_Registration_Info_UClass_UMSNiagaraRepresentationProcessors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSNiagaraRepresentationProcessors.OuterSingleton, Z_Construct_UClass_UMSNiagaraRepresentationProcessors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSNiagaraRepresentationProcessors.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSNiagaraRepresentationProcessors);
UMSNiagaraRepresentationProcessors::~UMSNiagaraRepresentationProcessors() {}
// ********** End Class UMSNiagaraRepresentationProcessors *****************************************

// ********** Begin Class UMSNiagaraRepresentationSpawnProcs ***************************************
void UMSNiagaraRepresentationSpawnProcs::StaticRegisterNativesUMSNiagaraRepresentationSpawnProcs()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSNiagaraRepresentationSpawnProcs;
UClass* UMSNiagaraRepresentationSpawnProcs::GetPrivateStaticClass()
{
	using TClass = UMSNiagaraRepresentationSpawnProcs;
	if (!Z_Registration_Info_UClass_UMSNiagaraRepresentationSpawnProcs.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSNiagaraRepresentationSpawnProcs"),
			Z_Registration_Info_UClass_UMSNiagaraRepresentationSpawnProcs.InnerSingleton,
			StaticRegisterNativesUMSNiagaraRepresentationSpawnProcs,
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
	return Z_Registration_Info_UClass_UMSNiagaraRepresentationSpawnProcs.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs_NoRegister()
{
	return UMSNiagaraRepresentationSpawnProcs::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Representation/Processors/MSNiagaraRepresentationProcessors.h" },
		{ "ModuleRelativePath", "Representation/Processors/MSNiagaraRepresentationProcessors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSNiagaraRepresentationSpawnProcs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassSignalProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs_Statics::ClassParams = {
	&UMSNiagaraRepresentationSpawnProcs::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs()
{
	if (!Z_Registration_Info_UClass_UMSNiagaraRepresentationSpawnProcs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSNiagaraRepresentationSpawnProcs.OuterSingleton, Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSNiagaraRepresentationSpawnProcs.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSNiagaraRepresentationSpawnProcs);
UMSNiagaraRepresentationSpawnProcs::~UMSNiagaraRepresentationSpawnProcs() {}
// ********** End Class UMSNiagaraRepresentationSpawnProcs *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Processors_MSNiagaraRepresentationProcessors_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSNiagaraRepresentationProcessors, UMSNiagaraRepresentationProcessors::StaticClass, TEXT("UMSNiagaraRepresentationProcessors"), &Z_Registration_Info_UClass_UMSNiagaraRepresentationProcessors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSNiagaraRepresentationProcessors), 2968530803U) },
		{ Z_Construct_UClass_UMSNiagaraRepresentationSpawnProcs, UMSNiagaraRepresentationSpawnProcs::StaticClass, TEXT("UMSNiagaraRepresentationSpawnProcs"), &Z_Registration_Info_UClass_UMSNiagaraRepresentationSpawnProcs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSNiagaraRepresentationSpawnProcs), 2276230364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Processors_MSNiagaraRepresentationProcessors_h__Script_MassCommunitySample_2410843353(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Processors_MSNiagaraRepresentationProcessors_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Processors_MSNiagaraRepresentationProcessors_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
