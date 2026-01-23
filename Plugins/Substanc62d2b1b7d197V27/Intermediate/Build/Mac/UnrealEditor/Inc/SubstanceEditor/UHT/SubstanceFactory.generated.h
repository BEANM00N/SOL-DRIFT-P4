// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceFactory.h"

#ifdef SUBSTANCEEDITOR_SubstanceFactory_generated_h
#error "SubstanceFactory.generated.h already included, missing '#pragma once' in SubstanceFactory.h"
#endif
#define SUBSTANCEEDITOR_SubstanceFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USubstanceInstanceFactory;

// ********** Begin Class USubstanceFactory ********************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCreateMaterial); \
	DECLARE_FUNCTION(execCreateInstance); \
	DECLARE_FUNCTION(execSuppressImportOverwriteDialog); \
	DECLARE_FUNCTION(execImportArchive);


SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceFactory(); \
	friend struct Z_Construct_UClass_USubstanceFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(USubstanceFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceEditor"), Z_Construct_UClass_USubstanceFactory_NoRegister) \
	DECLARE_SERIALIZER(USubstanceFactory)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_17_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubstanceFactory(USubstanceFactory&&) = delete; \
	USubstanceFactory(const USubstanceFactory&) = delete; \
	NO_API virtual ~USubstanceFactory();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_14_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_17_RPC_WRAPPERS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_17_INCLASS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubstanceFactory;

// ********** End Class USubstanceFactory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
