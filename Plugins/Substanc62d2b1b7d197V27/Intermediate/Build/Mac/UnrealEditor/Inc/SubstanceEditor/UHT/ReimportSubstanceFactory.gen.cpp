// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReimportSubstanceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeReimportSubstanceFactory() {}

// ********** Begin Cross Module References ********************************************************
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceFactory();
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_UReimportSubstanceFactory_NoRegister();
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory();
UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UReimportSubstanceFactory ************************************************
void UReimportSubstanceFactory::StaticRegisterNativesUReimportSubstanceFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UReimportSubstanceFactory;
UClass* UReimportSubstanceFactory::GetPrivateStaticClass()
{
	using TClass = UReimportSubstanceFactory;
	if (!Z_Registration_Info_UClass_UReimportSubstanceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ReimportSubstanceFactory"),
			Z_Registration_Info_UClass_UReimportSubstanceFactory.InnerSingleton,
			StaticRegisterNativesUReimportSubstanceFactory,
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
	return Z_Registration_Info_UClass_UReimportSubstanceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UReimportSubstanceFactory_NoRegister()
{
	return UReimportSubstanceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReimportSubstanceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//NOTE:: Function definitions located in SubstanceFactory.cpp\n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ReimportSubstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/ReimportSubstanceFactory.h" },
		{ "ToolTip", "NOTE:: Function definitions located in SubstanceFactory.cpp" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportSubstanceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReimportSubstanceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USubstanceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSubstanceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportSubstanceFactory_Statics::ClassParams = {
	&UReimportSubstanceFactory::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReimportSubstanceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UReimportSubstanceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReimportSubstanceFactory()
{
	if (!Z_Registration_Info_UClass_UReimportSubstanceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportSubstanceFactory.OuterSingleton, Z_Construct_UClass_UReimportSubstanceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReimportSubstanceFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportSubstanceFactory);
UReimportSubstanceFactory::~UReimportSubstanceFactory() {}
// ********** End Class UReimportSubstanceFactory **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_ReimportSubstanceFactory_h__Script_SubstanceEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UReimportSubstanceFactory, UReimportSubstanceFactory::StaticClass, TEXT("UReimportSubstanceFactory"), &Z_Registration_Info_UClass_UReimportSubstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportSubstanceFactory), 1191329297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_ReimportSubstanceFactory_h__Script_SubstanceEditor_3388023172(TEXT("/Script/SubstanceEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_ReimportSubstanceFactory_h__Script_SubstanceEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_ReimportSubstanceFactory_h__Script_SubstanceEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
