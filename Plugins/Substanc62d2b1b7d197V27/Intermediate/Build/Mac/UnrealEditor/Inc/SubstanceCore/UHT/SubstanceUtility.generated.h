// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceUtility.h"

#ifdef SUBSTANCECORE_SubstanceUtility_generated_h
#error "SubstanceUtility.generated.h already included, missing '#pragma once' in SubstanceUtility.h"
#endif
#define SUBSTANCECORE_SubstanceUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterial;
class UMaterialInterface;
class UObject;
class USubstanceGraphInstance;
class USubstanceInstanceFactory;
class UTexture2D;
struct FSubstanceConnection;

// ********** Begin ScriptStruct FSubstanceConnection **********************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceConnection_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


struct FSubstanceConnection;
// ********** End ScriptStruct FSubstanceConnection ************************************************

// ********** Begin Class USubstanceUtility ********************************************************
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetSubstanceIncludedMaterials); \
	DECLARE_FUNCTION(execSyncRendering); \
	DECLARE_FUNCTION(execAsyncRendering); \
	DECLARE_FUNCTION(execCreateAggregateSubstanceFactory); \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSizeInt); \
	DECLARE_FUNCTION(execSetGraphInstanceOutputSize); \
	DECLARE_FUNCTION(execResetInputParameters); \
	DECLARE_FUNCTION(execCopyInputParameters); \
	DECLARE_FUNCTION(execDisableInstanceOutputs); \
	DECLARE_FUNCTION(execEnableInstanceOutputs); \
	DECLARE_FUNCTION(execDuplicateGraphInstance); \
	DECLARE_FUNCTION(execCreateGraphInstance); \
	DECLARE_FUNCTION(execGetSubstanceLoadingProgress); \
	DECLARE_FUNCTION(execGetFactoryName); \
	DECLARE_FUNCTION(execGetGraphName); \
	DECLARE_FUNCTION(execGetSubstanceTextures); \
	DECLARE_FUNCTION(execGetSubstances);


SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility_NoRegister();

#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceUtility(); \
	friend struct Z_Construct_UClass_USubstanceUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(USubstanceUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), Z_Construct_UClass_USubstanceUtility_NoRegister) \
	DECLARE_SERIALIZER(USubstanceUtility)


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUBSTANCECORE_API USubstanceUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUBSTANCECORE_API, USubstanceUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceUtility); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubstanceUtility(USubstanceUtility&&) = delete; \
	USubstanceUtility(const USubstanceUtility&) = delete; \
	SUBSTANCECORE_API virtual ~USubstanceUtility();


#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_35_PROLOG
#define FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_RPC_WRAPPERS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_INCLASS \
	FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubstanceUtility;

// ********** End Class USubstanceUtility **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceUtility_h

// ********** Begin Enum ESubstanceTextureSize *****************************************************
#define FOREACH_ENUM_ESUBSTANCETEXTURESIZE(op) \
	op(ERL_16) \
	op(ERL_32) \
	op(ERL_64) \
	op(ERL_128) \
	op(ERL_256) \
	op(ERL_512) \
	op(ERL_1024) \
	op(ERL_2048) \
	op(ERL_4096) \
	op(ERL_8192) 
// ********** End Enum ESubstanceTextureSize *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
