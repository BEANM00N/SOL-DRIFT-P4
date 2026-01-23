// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceConnectorSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubstanceConnectorSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SUBSTANCECONNECTOR_API UClass* Z_Construct_UClass_USubstanceConnectorSettings();
SUBSTANCECONNECTOR_API UClass* Z_Construct_UClass_USubstanceConnectorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_SubstanceConnector();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USubstanceConnectorSettings **********************************************
void USubstanceConnectorSettings::StaticRegisterNativesUSubstanceConnectorSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubstanceConnectorSettings;
UClass* USubstanceConnectorSettings::GetPrivateStaticClass()
{
	using TClass = USubstanceConnectorSettings;
	if (!Z_Registration_Info_UClass_USubstanceConnectorSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubstanceConnectorSettings"),
			Z_Registration_Info_UClass_USubstanceConnectorSettings.InnerSingleton,
			StaticRegisterNativesUSubstanceConnectorSettings,
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
	return Z_Registration_Info_UClass_USubstanceConnectorSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_USubstanceConnectorSettings_NoRegister()
{
	return USubstanceConnectorSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubstanceConnectorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Implements the settings for the Substance Connector plugin. */" },
		{ "IncludePath", "SubstanceConnectorSettings.h" },
		{ "ModuleRelativePath", "Classes/SubstanceConnectorSettings.h" },
		{ "ToolTip", "Implements the settings for the Substance Connector plugin." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceConnectorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubstanceConnectorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceConnector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceConnectorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceConnectorSettings_Statics::ClassParams = {
	&USubstanceConnectorSettings::StaticClass,
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
	0x001000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceConnectorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceConnectorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceConnectorSettings()
{
	if (!Z_Registration_Info_UClass_USubstanceConnectorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceConnectorSettings.OuterSingleton, Z_Construct_UClass_USubstanceConnectorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceConnectorSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceConnectorSettings);
USubstanceConnectorSettings::~USubstanceConnectorSettings() {}
// ********** End Class USubstanceConnectorSettings ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceConnector_Classes_SubstanceConnectorSettings_h__Script_SubstanceConnector_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceConnectorSettings, USubstanceConnectorSettings::StaticClass, TEXT("USubstanceConnectorSettings"), &Z_Registration_Info_UClass_USubstanceConnectorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceConnectorSettings), 3448323075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceConnector_Classes_SubstanceConnectorSettings_h__Script_SubstanceConnector_3634243884(TEXT("/Script/SubstanceConnector"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceConnector_Classes_SubstanceConnectorSettings_h__Script_SubstanceConnector_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceConnector_Classes_SubstanceConnectorSettings_h__Script_SubstanceConnector_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
