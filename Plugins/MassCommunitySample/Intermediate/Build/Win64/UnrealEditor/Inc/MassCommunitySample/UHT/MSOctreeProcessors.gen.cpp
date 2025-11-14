// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Processors/MSOctreeProcessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSOctreeProcessors() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSHashGridMemberInitializationProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSHashGridMemberInitializationProcessor_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSOctreeMemberCleanupProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSOctreeMemberCleanupProcessor_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSOctreeProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSOctreeProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSOctreeProcessor *******************************************************
void UMSOctreeProcessor::StaticRegisterNativesUMSOctreeProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSOctreeProcessor;
UClass* UMSOctreeProcessor::GetPrivateStaticClass()
{
	using TClass = UMSOctreeProcessor;
	if (!Z_Registration_Info_UClass_UMSOctreeProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSOctreeProcessor"),
			Z_Registration_Info_UClass_UMSOctreeProcessor.InnerSingleton,
			StaticRegisterNativesUMSOctreeProcessor,
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
	return Z_Registration_Info_UClass_UMSOctreeProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSOctreeProcessor_NoRegister()
{
	return UMSOctreeProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSOctreeProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Updates the sample's TOctree2 node positions every frame\n// I would say this would better serve as a way of figuring out if we are near something rather than a straight up physics system\n" },
#endif
		{ "IncludePath", "Common/Processors/MSOctreeProcessors.h" },
		{ "ModuleRelativePath", "Common/Processors/MSOctreeProcessors.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the sample's TOctree2 node positions every frame\nI would say this would better serve as a way of figuring out if we are near something rather than a straight up physics system" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSOctreeProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSOctreeProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSOctreeProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSOctreeProcessor_Statics::ClassParams = {
	&UMSOctreeProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSOctreeProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSOctreeProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSOctreeProcessor()
{
	if (!Z_Registration_Info_UClass_UMSOctreeProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSOctreeProcessor.OuterSingleton, Z_Construct_UClass_UMSOctreeProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSOctreeProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSOctreeProcessor);
UMSOctreeProcessor::~UMSOctreeProcessor() {}
// ********** End Class UMSOctreeProcessor *********************************************************

// ********** Begin Class UMSHashGridMemberInitializationProcessor *********************************
void UMSHashGridMemberInitializationProcessor::StaticRegisterNativesUMSHashGridMemberInitializationProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSHashGridMemberInitializationProcessor;
UClass* UMSHashGridMemberInitializationProcessor::GetPrivateStaticClass()
{
	using TClass = UMSHashGridMemberInitializationProcessor;
	if (!Z_Registration_Info_UClass_UMSHashGridMemberInitializationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSHashGridMemberInitializationProcessor"),
			Z_Registration_Info_UClass_UMSHashGridMemberInitializationProcessor.InnerSingleton,
			StaticRegisterNativesUMSHashGridMemberInitializationProcessor,
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
	return Z_Registration_Info_UClass_UMSHashGridMemberInitializationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSHashGridMemberInitializationProcessor_NoRegister()
{
	return UMSHashGridMemberInitializationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSHashGridMemberInitializationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Processors/MSOctreeProcessors.h" },
		{ "ModuleRelativePath", "Common/Processors/MSOctreeProcessors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSHashGridMemberInitializationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSHashGridMemberInitializationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSHashGridMemberInitializationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSHashGridMemberInitializationProcessor_Statics::ClassParams = {
	&UMSHashGridMemberInitializationProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSHashGridMemberInitializationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSHashGridMemberInitializationProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSHashGridMemberInitializationProcessor()
{
	if (!Z_Registration_Info_UClass_UMSHashGridMemberInitializationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSHashGridMemberInitializationProcessor.OuterSingleton, Z_Construct_UClass_UMSHashGridMemberInitializationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSHashGridMemberInitializationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSHashGridMemberInitializationProcessor);
UMSHashGridMemberInitializationProcessor::~UMSHashGridMemberInitializationProcessor() {}
// ********** End Class UMSHashGridMemberInitializationProcessor ***********************************

// ********** Begin Class UMSOctreeMemberCleanupProcessor ******************************************
void UMSOctreeMemberCleanupProcessor::StaticRegisterNativesUMSOctreeMemberCleanupProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSOctreeMemberCleanupProcessor;
UClass* UMSOctreeMemberCleanupProcessor::GetPrivateStaticClass()
{
	using TClass = UMSOctreeMemberCleanupProcessor;
	if (!Z_Registration_Info_UClass_UMSOctreeMemberCleanupProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSOctreeMemberCleanupProcessor"),
			Z_Registration_Info_UClass_UMSOctreeMemberCleanupProcessor.InnerSingleton,
			StaticRegisterNativesUMSOctreeMemberCleanupProcessor,
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
	return Z_Registration_Info_UClass_UMSOctreeMemberCleanupProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSOctreeMemberCleanupProcessor_NoRegister()
{
	return UMSOctreeMemberCleanupProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSOctreeMemberCleanupProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Processors/MSOctreeProcessors.h" },
		{ "ModuleRelativePath", "Common/Processors/MSOctreeProcessors.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSOctreeMemberCleanupProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSOctreeMemberCleanupProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSOctreeMemberCleanupProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSOctreeMemberCleanupProcessor_Statics::ClassParams = {
	&UMSOctreeMemberCleanupProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSOctreeMemberCleanupProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSOctreeMemberCleanupProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSOctreeMemberCleanupProcessor()
{
	if (!Z_Registration_Info_UClass_UMSOctreeMemberCleanupProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSOctreeMemberCleanupProcessor.OuterSingleton, Z_Construct_UClass_UMSOctreeMemberCleanupProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSOctreeMemberCleanupProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSOctreeMemberCleanupProcessor);
UMSOctreeMemberCleanupProcessor::~UMSOctreeMemberCleanupProcessor() {}
// ********** End Class UMSOctreeMemberCleanupProcessor ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSOctreeProcessors_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSOctreeProcessor, UMSOctreeProcessor::StaticClass, TEXT("UMSOctreeProcessor"), &Z_Registration_Info_UClass_UMSOctreeProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSOctreeProcessor), 161190698U) },
		{ Z_Construct_UClass_UMSHashGridMemberInitializationProcessor, UMSHashGridMemberInitializationProcessor::StaticClass, TEXT("UMSHashGridMemberInitializationProcessor"), &Z_Registration_Info_UClass_UMSHashGridMemberInitializationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSHashGridMemberInitializationProcessor), 3450441980U) },
		{ Z_Construct_UClass_UMSOctreeMemberCleanupProcessor, UMSOctreeMemberCleanupProcessor::StaticClass, TEXT("UMSOctreeMemberCleanupProcessor"), &Z_Registration_Info_UClass_UMSOctreeMemberCleanupProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSOctreeMemberCleanupProcessor), 311510834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSOctreeProcessors_h__Script_MassCommunitySample_862949186(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSOctreeProcessors_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSOctreeProcessors_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
