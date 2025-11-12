// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Physics/MSCollisionProcessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSCollisionProcessors() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSEntityCollisionQueryProcessors();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSEntityCollisionQueryProcessors_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSSubsystem_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSEntityCollisionQueryProcessors ****************************************
void UMSEntityCollisionQueryProcessors::StaticRegisterNativesUMSEntityCollisionQueryProcessors()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSEntityCollisionQueryProcessors;
UClass* UMSEntityCollisionQueryProcessors::GetPrivateStaticClass()
{
	using TClass = UMSEntityCollisionQueryProcessors;
	if (!Z_Registration_Info_UClass_UMSEntityCollisionQueryProcessors.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSEntityCollisionQueryProcessors"),
			Z_Registration_Info_UClass_UMSEntityCollisionQueryProcessors.InnerSingleton,
			StaticRegisterNativesUMSEntityCollisionQueryProcessors,
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
	return Z_Registration_Info_UClass_UMSEntityCollisionQueryProcessors.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSEntityCollisionQueryProcessors_NoRegister()
{
	return UMSEntityCollisionQueryProcessors::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Queries the Mass Sample octree\n * \n */" },
#endif
		{ "IncludePath", "Experimental/Physics/MSCollisionProcessors.h" },
		{ "ModuleRelativePath", "Experimental/Physics/MSCollisionProcessors.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries the Mass Sample octree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MSSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Experimental/Physics/MSCollisionProcessors.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MSSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSEntityCollisionQueryProcessors>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::NewProp_MSSubsystem = { "MSSubsystem", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSEntityCollisionQueryProcessors, MSSubsystem), Z_Construct_UClass_UMSSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MSSubsystem_MetaData), NewProp_MSSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::NewProp_MSSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::ClassParams = {
	&UMSEntityCollisionQueryProcessors::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSEntityCollisionQueryProcessors()
{
	if (!Z_Registration_Info_UClass_UMSEntityCollisionQueryProcessors.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSEntityCollisionQueryProcessors.OuterSingleton, Z_Construct_UClass_UMSEntityCollisionQueryProcessors_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSEntityCollisionQueryProcessors.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSEntityCollisionQueryProcessors);
UMSEntityCollisionQueryProcessors::~UMSEntityCollisionQueryProcessors() {}
// ********** End Class UMSEntityCollisionQueryProcessors ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSCollisionProcessors_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSEntityCollisionQueryProcessors, UMSEntityCollisionQueryProcessors::StaticClass, TEXT("UMSEntityCollisionQueryProcessors"), &Z_Registration_Info_UClass_UMSEntityCollisionQueryProcessors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSEntityCollisionQueryProcessors), 2924185810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSCollisionProcessors_h__Script_MassCommunitySample_2479080682(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSCollisionProcessors_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSCollisionProcessors_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
