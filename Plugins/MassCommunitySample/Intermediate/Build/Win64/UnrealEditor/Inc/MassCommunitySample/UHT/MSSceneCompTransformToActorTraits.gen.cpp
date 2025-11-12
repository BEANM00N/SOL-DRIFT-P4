// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Benchmark/MSSceneCompTransformToActorTraits.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSSceneCompTransformToActorTraits() {}

// ********** Begin Cross Module References ********************************************************
MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentSyncTrait();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSAgentTransformSyncTraitFastPath ***************************************
void UMSAgentTransformSyncTraitFastPath::StaticRegisterNativesUMSAgentTransformSyncTraitFastPath()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSAgentTransformSyncTraitFastPath;
UClass* UMSAgentTransformSyncTraitFastPath::GetPrivateStaticClass()
{
	using TClass = UMSAgentTransformSyncTraitFastPath;
	if (!Z_Registration_Info_UClass_UMSAgentTransformSyncTraitFastPath.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSAgentTransformSyncTraitFastPath"),
			Z_Registration_Info_UClass_UMSAgentTransformSyncTraitFastPath.InnerSingleton,
			StaticRegisterNativesUMSAgentTransformSyncTraitFastPath,
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
	return Z_Registration_Info_UClass_UMSAgentTransformSyncTraitFastPath.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath_NoRegister()
{
	return UMSAgentTransformSyncTraitFastPath::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */// This is overriden so I can yoink in FMassSceneComponentWrapperFragment without having it exported?\n// Mass category hidden to make sure nobody touches the sync direction yet?\n" },
#endif
		{ "HideCategories", "Mass" },
		{ "IncludePath", "Experimental/Benchmark/MSSceneCompTransformToActorTraits.h" },
		{ "ModuleRelativePath", "Experimental/Benchmark/MSSceneCompTransformToActorTraits.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// This is overriden so I can yoink in FMassSceneComponentWrapperFragment without having it exported?\n// Mass category hidden to make sure nobody touches the sync direction yet?" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSAgentTransformSyncTraitFastPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassAgentSyncTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath_Statics::ClassParams = {
	&UMSAgentTransformSyncTraitFastPath::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath()
{
	if (!Z_Registration_Info_UClass_UMSAgentTransformSyncTraitFastPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSAgentTransformSyncTraitFastPath.OuterSingleton, Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSAgentTransformSyncTraitFastPath.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSAgentTransformSyncTraitFastPath);
UMSAgentTransformSyncTraitFastPath::~UMSAgentTransformSyncTraitFastPath() {}
// ********** End Class UMSAgentTransformSyncTraitFastPath *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTraits_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSAgentTransformSyncTraitFastPath, UMSAgentTransformSyncTraitFastPath::StaticClass, TEXT("UMSAgentTransformSyncTraitFastPath"), &Z_Registration_Info_UClass_UMSAgentTransformSyncTraitFastPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSAgentTransformSyncTraitFastPath), 3556145480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTraits_h__Script_MassCommunitySample_462699744(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTraits_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTraits_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
