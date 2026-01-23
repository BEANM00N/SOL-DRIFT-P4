// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubstanceGraphInstance.h"

#ifdef SUBSTANCECORE_SubstanceGraphInstance_generated_h
#error "SubstanceGraphInstance.generated.h already included, missing '#pragma once' in SubstanceGraphInstance.h"
#endif
#define SUBSTANCECORE_SubstanceGraphInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterial;
class UMaterialInstanceConstant;
class UMaterialInstanceDynamic;
class UObject;
class USubstanceGraphInstance;
struct FLinearColor;
struct FSubstanceFloatInputDesc;
struct FSubstanceInstanceDesc;
struct FSubstanceIntInputDesc;

// ********** Begin ScriptStruct FSubstanceInputDesc ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


struct FSubstanceInputDesc;
// ********** End ScriptStruct FSubstanceInputDesc *************************************************

// ********** Begin ScriptStruct FSubstanceIntInputDesc ********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceIntInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


struct FSubstanceIntInputDesc;
// ********** End ScriptStruct FSubstanceIntInputDesc **********************************************

// ********** Begin ScriptStruct FSubstanceFloatInputDesc ******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceFloatInputDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FSubstanceInputDesc Super;


struct FSubstanceFloatInputDesc;
// ********** End ScriptStruct FSubstanceFloatInputDesc ********************************************

// ********** Begin ScriptStruct FSubstanceInstanceDesc ********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubstanceInstanceDesc_Statics; \
	SUBSTANCECORE_API static class UScriptStruct* StaticStruct();


struct FSubstanceInstanceDesc;
// ********** End ScriptStruct FSubstanceInstanceDesc **********************************************

// ********** Begin Class USubstanceGraphInstance **************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_RPC_WRAPPERS \
	DECLARE_FUNCTION(execRenderSync); \
	DECLARE_FUNCTION(execSetInputImg); \
	DECLARE_FUNCTION(execCreateOutputs); \
	DECLARE_FUNCTION(execEnableOutput); \
	DECLARE_FUNCTION(execGetOutputNames); \
	DECLARE_FUNCTION(execGetInstanceDesc); \
	DECLARE_FUNCTION(execGetFloatInputDesc); \
	DECLARE_FUNCTION(execGetIntInputDesc); \
	DECLARE_FUNCTION(execGetInputBool); \
	DECLARE_FUNCTION(execGetInputColor); \
	DECLARE_FUNCTION(execGetInputString); \
	DECLARE_FUNCTION(execGetInputFloat); \
	DECLARE_FUNCTION(execGetInputInt); \
	DECLARE_FUNCTION(execSetInputBool); \
	DECLARE_FUNCTION(execSetInputColor); \
	DECLARE_FUNCTION(execSetInputString); \
	DECLARE_FUNCTION(execSetInputFloat); \
	DECLARE_FUNCTION(execSetInputInt); \
	DECLARE_FUNCTION(execGetInputType); \
	DECLARE_FUNCTION(execGetInputNames); \
	DECLARE_FUNCTION(execGetDynamicMaterialInstance); \
	DECLARE_FUNCTION(execDuplicate); \
	DECLARE_FUNCTION(execCreateMaterial); \
	DECLARE_FUNCTION(execGetConstantMaterial);


#if WITH_EDITOR
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSaveAllOutputs); \
	DECLARE_FUNCTION(execPrepareOutputsForSave);
#else // WITH_EDITOR
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceGraphInstance, NO_API)


SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUSubstanceGraphInstance(); \
	friend struct Z_Construct_UClass_USubstanceGraphInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(USubstanceGraphInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SubstanceCore"), Z_Construct_UClass_USubstanceGraphInstance_NoRegister) \
	DECLARE_SERIALIZER(USubstanceGraphInstance) \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_ARCHIVESERIALIZER


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubstanceGraphInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubstanceGraphInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubstanceGraphInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubstanceGraphInstance); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USubstanceGraphInstance(USubstanceGraphInstance&&) = delete; \
	USubstanceGraphInstance(const USubstanceGraphInstance&) = delete; \
	NO_API virtual ~USubstanceGraphInstance();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_107_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_RPC_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_RPC_WRAPPERS_EOD \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_INCLASS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USubstanceGraphInstance;

// ********** End Class USubstanceGraphInstance ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceGraphInstance_h

// ********** Begin Enum ESubstanceInputType *******************************************************
#define FOREACH_ENUM_ESUBSTANCEINPUTTYPE(op) \
	op(SIT_Float) \
	op(SIT_Float2) \
	op(SIT_Float3) \
	op(SIT_Float4) \
	op(SIT_Integer) \
	op(SIT_Image) \
	op(SIT_Unused_6) \
	op(SIT_Unused_7) \
	op(SIT_Integer2) \
	op(SIT_Integer3) \
	op(SIT_Integer4) 
// ********** End Enum ESubstanceInputType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
