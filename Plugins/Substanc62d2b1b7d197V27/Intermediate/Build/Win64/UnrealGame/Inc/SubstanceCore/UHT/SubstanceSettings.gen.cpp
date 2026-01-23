// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubstanceSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings_NoRegister();
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize();
SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESubstanceEngineType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceEngineType;
static UEnum* ESubstanceEngineType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubstanceEngineType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubstanceEngineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceEngineType"));
	}
	return Z_Registration_Info_UEnum_ESubstanceEngineType.OuterSingleton;
}
template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceEngineType>()
{
	return ESubstanceEngineType_StaticEnum();
}
struct Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
		{ "SET_CPU.DisplayName", "CPU Engine" },
		{ "SET_CPU.Name", "SET_CPU" },
		{ "SET_GPU.DisplayName", "GPU Engine" },
		{ "SET_GPU.Name", "SET_GPU" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SET_CPU", (int64)SET_CPU },
		{ "SET_GPU", (int64)SET_GPU },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	"ESubstanceEngineType",
	"ESubstanceEngineType",
	Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType()
{
	if (!Z_Registration_Info_UEnum_ESubstanceEngineType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceEngineType.InnerSingleton, Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubstanceEngineType.InnerSingleton;
}
// ********** End Enum ESubstanceEngineType ********************************************************

// ********** Begin Enum EDefaultSubstanceTextureSize **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize;
static UEnum* EDefaultSubstanceTextureSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, (UObject*)Z_Construct_UPackage__Script_SubstanceCore(), TEXT("EDefaultSubstanceTextureSize"));
	}
	return Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.OuterSingleton;
}
template<> SUBSTANCECORE_API UEnum* StaticEnum<EDefaultSubstanceTextureSize>()
{
	return EDefaultSubstanceTextureSize_StaticEnum();
}
struct Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
		{ "SIZE_0.Hidden", "" },
		{ "SIZE_0.Name", "SIZE_0" },
		{ "SIZE_1024.DisplayName", "1024" },
		{ "SIZE_1024.Name", "SIZE_1024" },
		{ "SIZE_128.DisplayName", "128" },
		{ "SIZE_128.Name", "SIZE_128" },
		{ "SIZE_16.DisplayName", "16" },
		{ "SIZE_16.Name", "SIZE_16" },
		{ "SIZE_2048.DisplayName", "2048" },
		{ "SIZE_2048.Name", "SIZE_2048" },
		{ "SIZE_256.DisplayName", "256" },
		{ "SIZE_256.Name", "SIZE_256" },
		{ "SIZE_32.DisplayName", "32" },
		{ "SIZE_32.Name", "SIZE_32" },
		{ "SIZE_4096.DisplayName", "4096" },
		{ "SIZE_4096.Name", "SIZE_4096" },
		{ "SIZE_512.DisplayName", "512" },
		{ "SIZE_512.Name", "SIZE_512" },
		{ "SIZE_64.DisplayName", "64" },
		{ "SIZE_64.Name", "SIZE_64" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SIZE_0", (int64)SIZE_0 },
		{ "SIZE_16", (int64)SIZE_16 },
		{ "SIZE_32", (int64)SIZE_32 },
		{ "SIZE_64", (int64)SIZE_64 },
		{ "SIZE_128", (int64)SIZE_128 },
		{ "SIZE_256", (int64)SIZE_256 },
		{ "SIZE_512", (int64)SIZE_512 },
		{ "SIZE_1024", (int64)SIZE_1024 },
		{ "SIZE_2048", (int64)SIZE_2048 },
		{ "SIZE_4096", (int64)SIZE_4096 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
	nullptr,
	"EDefaultSubstanceTextureSize",
	"EDefaultSubstanceTextureSize",
	Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize()
{
	if (!Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.InnerSingleton, Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize.InnerSingleton;
}
// ********** End Enum EDefaultSubstanceTextureSize ************************************************

// ********** Begin Class USubstanceSettings *******************************************************
void USubstanceSettings::StaticRegisterNativesUSubstanceSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubstanceSettings;
UClass* USubstanceSettings::GetPrivateStaticClass()
{
	using TClass = USubstanceSettings;
	if (!Z_Registration_Info_UClass_USubstanceSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubstanceSettings"),
			Z_Registration_Info_UClass_USubstanceSettings.InnerSingleton,
			StaticRegisterNativesUSubstanceSettings,
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
	return Z_Registration_Info_UClass_USubstanceSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_USubstanceSettings_NoRegister()
{
	return USubstanceSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubstanceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Implements the settings for the Substance plugin. */" },
		{ "IncludePath", "SubstanceSettings.h" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
		{ "ToolTip", "Implements the settings for the Substance plugin." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryBudgetMb_MetaData[] = {
		{ "Category", "Hardware Budget" },
		{ "ClampMax", "2048" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CPUCores_MetaData[] = {
		{ "Category", "Hardware Budget" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadMipClip_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Mip levels count removed during cooking." },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "4" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubstanceEngine_MetaData[] = {
		{ "Category", "Cooking" },
		{ "DisplayName", "Substance Engine (requires editor restart to take effect.)" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSubstanceOutputSizeX_MetaData[] = {
		{ "Category", "Substance Import Settings" },
		{ "DisplayName", "Default Substance output width" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSubstanceOutputSizeY_MetaData[] = {
		{ "Category", "Substance Import Settings" },
		{ "DisplayName", "Default Substance output height" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTemplateMaterial_MetaData[] = {
		{ "AllowedClasses", "Material,MaterialInstance,MaterialInterface" },
		{ "Category", "Substance Import Settings" },
		{ "DisplayName", "Default Substance Material Template" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MemoryBudgetMb;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CPUCores;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AsyncLoadMipClip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAsyncSubstancesRenderedPerFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubstanceEngine;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSubstanceOutputSizeX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSubstanceOutputSizeY;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultTemplateMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb = { "MemoryBudgetMb", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, MemoryBudgetMb), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryBudgetMb_MetaData), NewProp_MemoryBudgetMb_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores = { "CPUCores", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, CPUCores), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CPUCores_MetaData), NewProp_CPUCores_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip = { "AsyncLoadMipClip", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, AsyncLoadMipClip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncLoadMipClip_MetaData), NewProp_AsyncLoadMipClip_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame = { "MaxAsyncSubstancesRenderedPerFrame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, MaxAsyncSubstancesRenderedPerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData), NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine = { "SubstanceEngine", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, SubstanceEngine), Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubstanceEngine_MetaData), NewProp_SubstanceEngine_MetaData) }; // 1373353820
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX = { "DefaultSubstanceOutputSizeX", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, DefaultSubstanceOutputSizeX), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSubstanceOutputSizeX_MetaData), NewProp_DefaultSubstanceOutputSizeX_MetaData) }; // 3102011980
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY = { "DefaultSubstanceOutputSizeY", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, DefaultSubstanceOutputSizeY), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSubstanceOutputSizeY_MetaData), NewProp_DefaultSubstanceOutputSizeY_MetaData) }; // 3102011980
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial = { "DefaultTemplateMaterial", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceSettings, DefaultTemplateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTemplateMaterial_MetaData), NewProp_DefaultTemplateMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubstanceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceSettings_Statics::ClassParams = {
	&USubstanceSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USubstanceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceSettings()
{
	if (!Z_Registration_Info_UClass_USubstanceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceSettings.OuterSingleton, Z_Construct_UClass_USubstanceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceSettings);
USubstanceSettings::~USubstanceSettings() {}
// ********** End Class USubstanceSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h__Script_SubstanceCore_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubstanceEngineType_StaticEnum, TEXT("ESubstanceEngineType"), &Z_Registration_Info_UEnum_ESubstanceEngineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1373353820U) },
		{ EDefaultSubstanceTextureSize_StaticEnum, TEXT("EDefaultSubstanceTextureSize"), &Z_Registration_Info_UEnum_EDefaultSubstanceTextureSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3102011980U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceSettings, USubstanceSettings::StaticClass, TEXT("USubstanceSettings"), &Z_Registration_Info_UClass_USubstanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceSettings), 1387511772U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h__Script_SubstanceCore_3593807148(TEXT("/Script/SubstanceCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h__Script_SubstanceCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h__Script_SubstanceCore_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h__Script_SubstanceCore_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h__Script_SubstanceCore_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
