// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceImportOptionsUi.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubstanceImportOptionsUi() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi();
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister();
SUBSTANCEEDITOR_API UEnum* Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType();
UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESubstanceMaterialParentType **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubstanceMaterialParentType;
static UEnum* ESubstanceMaterialParentType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESubstanceMaterialParentType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESubstanceMaterialParentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType, (UObject*)Z_Construct_UPackage__Script_SubstanceEditor(), TEXT("ESubstanceMaterialParentType"));
	}
	return Z_Registration_Info_UEnum_ESubstanceMaterialParentType.OuterSingleton;
}
template<> SUBSTANCEEDITOR_API UEnum* StaticEnum<ESubstanceMaterialParentType>()
{
	return ESubstanceMaterialParentType_StaticEnum();
}
struct Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.Name", "ESubstanceMaterialParentType::Custom" },
		{ "Default.Name", "ESubstanceMaterialParentType::Default" },
		{ "Generated.Name", "ESubstanceMaterialParentType::Generated" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESubstanceMaterialParentType::Default", (int64)ESubstanceMaterialParentType::Default },
		{ "ESubstanceMaterialParentType::Custom", (int64)ESubstanceMaterialParentType::Custom },
		{ "ESubstanceMaterialParentType::Generated", (int64)ESubstanceMaterialParentType::Generated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SubstanceEditor,
	nullptr,
	"ESubstanceMaterialParentType",
	"ESubstanceMaterialParentType",
	Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType()
{
	if (!Z_Registration_Info_UEnum_ESubstanceMaterialParentType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubstanceMaterialParentType.InnerSingleton, Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESubstanceMaterialParentType.InnerSingleton;
}
// ********** End Enum ESubstanceMaterialParentType ************************************************

// ********** Begin Class USubstanceImportOptionsUi ************************************************
void USubstanceImportOptionsUi::StaticRegisterNativesUSubstanceImportOptionsUi()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubstanceImportOptionsUi;
UClass* USubstanceImportOptionsUi::GetPrivateStaticClass()
{
	using TClass = USubstanceImportOptionsUi;
	if (!Z_Registration_Info_UClass_USubstanceImportOptionsUi.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubstanceImportOptionsUi"),
			Z_Registration_Info_UClass_USubstanceImportOptionsUi.InnerSingleton,
			StaticRegisterNativesUSubstanceImportOptionsUi,
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
	return Z_Registration_Info_UClass_USubstanceImportOptionsUi.InnerSingleton;
}
UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister()
{
	return USubstanceImportOptionsUi::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubstanceImportOptionsUi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "General Materials" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceImportOptionsUi.h" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFullName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Use the string in \"Name\" field as base name of factory instance and textures */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Use the string in \"Name\" field as base name of factory instance and textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstancePath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether or not to override instance path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether or not to override instance path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterialPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether or not to override material path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether or not to override material path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateInstance_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to automatically create graph instances for every graph description present in package*/" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether to automatically create graph instances for every graph description present in package" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Whether to automatically create Unreal materials for instances */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether to automatically create Unreal materials for instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_uMaterialParentType_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Enables Material Selection button for custom templates on import*/" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Enables Material Selection button for custom templates on import" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Parent Material used to create Unreal material instances */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Parent Material used to create Unreal material instances" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Instance suggested name (based on filename) */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Instance suggested name (based on filename)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Instance suggested name (based on filename) */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Instance suggested name (based on filename)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceDestinationPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Force the Graph Instance objects' path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Force the Graph Instance objects' path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDestinationPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Force the Texture Objects objects' path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Force the Texture Objects objects' path" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideFullName_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFullName;
	static void NewProp_bOverrideInstancePath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstancePath;
	static void NewProp_bOverrideMaterialPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterialPath;
	static void NewProp_bCreateInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateInstance;
	static void NewProp_bCreateMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterial;
	static const UECodeGen_Private::FBytePropertyParams NewProp_uMaterialParentType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_uMaterialParentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceDestinationPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialDestinationPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceImportOptionsUi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_SetBit(void* Obj)
{
	((USubstanceImportOptionsUi*)Obj)->bOverrideFullName = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName = { "bOverrideFullName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideFullName_MetaData), NewProp_bOverrideFullName_MetaData) };
void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_SetBit(void* Obj)
{
	((USubstanceImportOptionsUi*)Obj)->bOverrideInstancePath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath = { "bOverrideInstancePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideInstancePath_MetaData), NewProp_bOverrideInstancePath_MetaData) };
void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_SetBit(void* Obj)
{
	((USubstanceImportOptionsUi*)Obj)->bOverrideMaterialPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath = { "bOverrideMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMaterialPath_MetaData), NewProp_bOverrideMaterialPath_MetaData) };
void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_SetBit(void* Obj)
{
	((USubstanceImportOptionsUi*)Obj)->bCreateInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance = { "bCreateInstance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateInstance_MetaData), NewProp_bCreateInstance_MetaData) };
void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_SetBit(void* Obj)
{
	((USubstanceImportOptionsUi*)Obj)->bCreateMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial = { "bCreateMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateMaterial_MetaData), NewProp_bCreateMaterial_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType = { "uMaterialParentType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, uMaterialParentType), Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_uMaterialParentType_MetaData), NewProp_uMaterialParentType_MetaData) }; // 899036430
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, ParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentMaterial_MetaData), NewProp_ParentMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, InstanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceName_MetaData), NewProp_InstanceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, MaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialName_MetaData), NewProp_MaterialName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath = { "InstanceDestinationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, InstanceDestinationPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceDestinationPath_MetaData), NewProp_InstanceDestinationPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath = { "MaterialDestinationPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, MaterialDestinationPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDestinationPath_MetaData), NewProp_MaterialDestinationPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubstanceImportOptionsUi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::ClassParams = {
	&USubstanceImportOptionsUi::StaticClass,
	"EditorUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceImportOptionsUi_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceImportOptionsUi()
{
	if (!Z_Registration_Info_UClass_USubstanceImportOptionsUi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceImportOptionsUi.OuterSingleton, Z_Construct_UClass_USubstanceImportOptionsUi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceImportOptionsUi.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImportOptionsUi);
USubstanceImportOptionsUi::~USubstanceImportOptionsUi() {}
// ********** End Class USubstanceImportOptionsUi **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h__Script_SubstanceEditor_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESubstanceMaterialParentType_StaticEnum, TEXT("ESubstanceMaterialParentType"), &Z_Registration_Info_UEnum_ESubstanceMaterialParentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 899036430U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceImportOptionsUi, USubstanceImportOptionsUi::StaticClass, TEXT("USubstanceImportOptionsUi"), &Z_Registration_Info_UClass_USubstanceImportOptionsUi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceImportOptionsUi), 714745837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h__Script_SubstanceEditor_35195117(TEXT("/Script/SubstanceEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h__Script_SubstanceEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h__Script_SubstanceEditor_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h__Script_SubstanceEditor_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h__Script_SubstanceEditor_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
