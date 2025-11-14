// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Representation/MSNiagaraActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSNiagaraActor() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_AMSNiagaraActor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_AMSNiagaraActor_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_ANiagaraActor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMSNiagaraActor **********************************************************
void AMSNiagaraActor::StaticRegisterNativesAMSNiagaraActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMSNiagaraActor;
UClass* AMSNiagaraActor::GetPrivateStaticClass()
{
	using TClass = AMSNiagaraActor;
	if (!Z_Registration_Info_UClass_AMSNiagaraActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSNiagaraActor"),
			Z_Registration_Info_UClass_AMSNiagaraActor.InnerSingleton,
			StaticRegisterNativesAMSNiagaraActor,
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
	return Z_Registration_Info_UClass_AMSNiagaraActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMSNiagaraActor_NoRegister()
{
	return AMSNiagaraActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMSNiagaraActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
		{ "IncludePath", "Representation/MSNiagaraActor.h" },
		{ "ModuleRelativePath", "Representation/MSNiagaraActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSNiagaraActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMSNiagaraActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANiagaraActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSNiagaraActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSNiagaraActor_Statics::ClassParams = {
	&AMSNiagaraActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSNiagaraActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSNiagaraActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMSNiagaraActor()
{
	if (!Z_Registration_Info_UClass_AMSNiagaraActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSNiagaraActor.OuterSingleton, Z_Construct_UClass_AMSNiagaraActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMSNiagaraActor.OuterSingleton;
}
AMSNiagaraActor::AMSNiagaraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMSNiagaraActor);
AMSNiagaraActor::~AMSNiagaraActor() {}
// ********** End Class AMSNiagaraActor ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSNiagaraActor_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMSNiagaraActor, AMSNiagaraActor::StaticClass, TEXT("AMSNiagaraActor"), &Z_Registration_Info_UClass_AMSNiagaraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSNiagaraActor), 3365764428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSNiagaraActor_h__Script_MassCommunitySample_3832272665(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSNiagaraActor_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSNiagaraActor_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
