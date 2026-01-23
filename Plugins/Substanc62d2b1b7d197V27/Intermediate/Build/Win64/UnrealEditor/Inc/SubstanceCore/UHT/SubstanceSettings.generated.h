// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceSettings.h"

#ifdef SUBSTANCECORE_SubstanceSettings_generated_h
#error "SubstanceSettings.generated.h already included, missing '#pragma once' in SubstanceSettings.h"
#endif
#define SUBSTANCECORE_SubstanceSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USubstanceSettings *******************************************************
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceSettings(); \
	friend struct Z_Construct_UClass_USubstanceSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USubstanceSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SubstanceCore"), Z_Construct_UClass_USubstanceSettings_NoRegister) \
	DECLARE_SERIALIZER(USubstanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceSettings); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubstanceSettings(USubstanceSettings&&) = delete; \
	USubstanceSettings(const USubstanceSettings&) = delete; \
	NO_API virtual ~USubstanceSettings();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_40_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_43_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubstanceSettings;

// ********** End Class USubstanceSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceSettings_h

// ********** Begin Enum ESubstanceEngineType ******************************************************
#define FOREACH_ENUM_ESUBSTANCEENGINETYPE(op) \
	op(SET_CPU) \
	op(SET_GPU) 
// ********** End Enum ESubstanceEngineType ********************************************************

// ********** Begin Enum EDefaultSubstanceTextureSize **********************************************
#define FOREACH_ENUM_EDEFAULTSUBSTANCETEXTURESIZE(op) \
	op(SIZE_0) \
	op(SIZE_16) \
	op(SIZE_32) \
	op(SIZE_64) \
	op(SIZE_128) \
	op(SIZE_256) \
	op(SIZE_512) \
	op(SIZE_1024) \
	op(SIZE_2048) \
	op(SIZE_4096) 
// ********** End Enum EDefaultSubstanceTextureSize ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
