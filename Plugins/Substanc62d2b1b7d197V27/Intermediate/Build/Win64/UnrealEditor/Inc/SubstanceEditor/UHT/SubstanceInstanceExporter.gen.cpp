// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceInstanceExporter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubstanceInstanceExporter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UExporter();
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceInstanceExporter();
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceInstanceExporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USubstanceInstanceExporter ***********************************************
void USubstanceInstanceExporter::StaticRegisterNativesUSubstanceInstanceExporter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubstanceInstanceExporter;
UClass* USubstanceInstanceExporter::GetPrivateStaticClass()
{
	using TClass = USubstanceInstanceExporter;
	if (!Z_Registration_Info_UClass_USubstanceInstanceExporter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubstanceInstanceExporter"),
			Z_Registration_Info_UClass_USubstanceInstanceExporter.InnerSingleton,
			StaticRegisterNativesUSubstanceInstanceExporter,
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
	return Z_Registration_Info_UClass_USubstanceInstanceExporter.InnerSingleton;
}
UClass* Z_Construct_UClass_USubstanceInstanceExporter_NoRegister()
{
	return USubstanceInstanceExporter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubstanceInstanceExporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SubstanceInstanceExporter.h" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceExporter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceInstanceExporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubstanceInstanceExporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UExporter,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceExporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceInstanceExporter_Statics::ClassParams = {
	&USubstanceInstanceExporter::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceInstanceExporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceInstanceExporter()
{
	if (!Z_Registration_Info_UClass_USubstanceInstanceExporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceInstanceExporter.OuterSingleton, Z_Construct_UClass_USubstanceInstanceExporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceInstanceExporter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceInstanceExporter);
USubstanceInstanceExporter::~USubstanceInstanceExporter() {}
// ********** End Class USubstanceInstanceExporter *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceInstanceExporter_h__Script_SubstanceEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceInstanceExporter, USubstanceInstanceExporter::StaticClass, TEXT("USubstanceInstanceExporter"), &Z_Registration_Info_UClass_USubstanceInstanceExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceInstanceExporter), 3579585097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceInstanceExporter_h__Script_SubstanceEditor_670770732(TEXT("/Script/SubstanceEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceInstanceExporter_h__Script_SubstanceEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceInstanceExporter_h__Script_SubstanceEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
