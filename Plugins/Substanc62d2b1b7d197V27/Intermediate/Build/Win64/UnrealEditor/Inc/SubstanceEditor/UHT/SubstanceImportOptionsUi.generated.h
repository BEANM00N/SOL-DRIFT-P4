// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceImportOptionsUi.h"

#ifdef SUBSTANCEEDITOR_SubstanceImportOptionsUi_generated_h
#error "SubstanceImportOptionsUi.generated.h already included, missing '#pragma once' in SubstanceImportOptionsUi.h"
#endif
#define SUBSTANCEEDITOR_SubstanceImportOptionsUi_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubstanceImportOptionsUi ************************************************
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceImportOptionsUi(); \
	friend struct Z_Construct_UClass_USubstanceImportOptionsUi_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister(); \
public: \
	DECLARE_CLASS2(USubstanceImportOptionsUi, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubstanceEditor"), Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister) \
	DECLARE_SERIALIZER(USubstanceImportOptionsUi) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorUserSettings");} \



#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceImportOptionsUi(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceImportOptionsUi) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceImportOptionsUi); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceImportOptionsUi); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubstanceImportOptionsUi(USubstanceImportOptionsUi&&) = delete; \
	USubstanceImportOptionsUi(const USubstanceImportOptionsUi&) = delete; \
	NO_API virtual ~USubstanceImportOptionsUi();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_18_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_21_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubstanceImportOptionsUi;

// ********** End Class USubstanceImportOptionsUi **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Public_SubstanceImportOptionsUi_h

// ********** Begin Enum ESubstanceMaterialParentType **********************************************
#define FOREACH_ENUM_ESUBSTANCEMATERIALPARENTTYPE(op) \
	op(ESubstanceMaterialParentType::Default) \
	op(ESubstanceMaterialParentType::Custom) \
	op(ESubstanceMaterialParentType::Generated) 

enum class ESubstanceMaterialParentType : uint8;
template<> struct TIsUEnumClass<ESubstanceMaterialParentType> { enum { Value = true }; };
template<> SUBSTANCEEDITOR_API UEnum* StaticEnum<ESubstanceMaterialParentType>();
// ********** End Enum ESubstanceMaterialParentType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
