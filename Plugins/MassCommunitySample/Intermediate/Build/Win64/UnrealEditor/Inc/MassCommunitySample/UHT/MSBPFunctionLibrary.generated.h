// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Common/Misc/MSBPFunctionLibrary.h"

#ifdef MASSCOMMUNITYSAMPLE_MSBPFunctionLibrary_generated_h
#error "MSBPFunctionLibrary.generated.h already included, missing '#pragma once' in MSBPFunctionLibrary.h"
#endif
#define MASSCOMMUNITYSAMPLE_MSBPFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMassAgentComponent;
class UMassEntityConfigAsset;
class UObject;
class UScriptStruct;
enum class EReturnSuccess : uint8;
struct FInstancedStruct;
struct FMSEntityViewBPWrapper;

// ********** Begin ScriptStruct FMSEntityViewBPWrapper ********************************************
#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMSEntityViewBPWrapper_Statics; \
	MASSCOMMUNITYSAMPLE_API static class UScriptStruct* StaticStruct();


struct FMSEntityViewBPWrapper;
// ********** End ScriptStruct FMSEntityViewBPWrapper **********************************************

// ********** Begin ScriptStruct FMSEntityHandleBPWrapper ******************************************
#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMSEntityHandleBPWrapper_Statics; \
	MASSCOMMUNITYSAMPLE_API static class UScriptStruct* StaticStruct();


struct FMSEntityHandleBPWrapper;
// ********** End ScriptStruct FMSEntityHandleBPWrapper ********************************************

// ********** Begin Class UMSBPFunctionLibrary *****************************************************
#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMassEntityCount); \
	DECLARE_FUNCTION(execEntityHasTag_OLD); \
	DECLARE_FUNCTION(execEntityHasFragment_OLD); \
	DECLARE_FUNCTION(execBreakIndexToInt); \
	DECLARE_FUNCTION(execGetEntityFragmentByType); \
	DECLARE_FUNCTION(execSetEntityFragment); \
	DECLARE_FUNCTION(execFindClosestHashGridEntityInBox); \
	DECLARE_FUNCTION(execFindOctreeEntitiesInBox); \
	DECLARE_FUNCTION(execGetMassAgentEntity); \
	DECLARE_FUNCTION(execDestroyEntity); \
	DECLARE_FUNCTION(execSetEntityForce); \
	DECLARE_FUNCTION(execGetEntityVelocity); \
	DECLARE_FUNCTION(execSetEntityVelocity); \
	DECLARE_FUNCTION(execGetEntityTransform); \
	DECLARE_FUNCTION(execSetEntityTransform); \
	DECLARE_FUNCTION(execGenerateFibonacciSphereTransforms); \
	DECLARE_FUNCTION(execGenerateRingTransforms); \
	DECLARE_FUNCTION(execSpawnMassEntityBatchWithTransformsAndVelocity); \
	DECLARE_FUNCTION(execSpawnEntityFromEntityConfig); \
	DECLARE_FUNCTION(execIsEntityValid); \
	DECLARE_FUNCTION(execEntityHasTag); \
	DECLARE_FUNCTION(execEntityHasFragment);


MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSBPFunctionLibrary_NoRegister();

#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMSBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UMSBPFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSBPFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMSBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassCommunitySample"), Z_Construct_UClass_UMSBPFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMSBPFunctionLibrary)


#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMSBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMSBPFunctionLibrary(UMSBPFunctionLibrary&&) = delete; \
	UMSBPFunctionLibrary(const UMSBPFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMSBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMSBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMSBPFunctionLibrary) \
	NO_API virtual ~UMSBPFunctionLibrary();


#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_49_PROLOG
#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_52_INCLASS_NO_PURE_DECLS \
	FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMSBPFunctionLibrary;

// ********** End Class UMSBPFunctionLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSBPFunctionLibrary_h

// ********** Begin Enum EReturnSuccess ************************************************************
#define FOREACH_ENUM_ERETURNSUCCESS(op) \
	op(EReturnSuccess::Success) \
	op(EReturnSuccess::Failure) 

enum class EReturnSuccess : uint8;
template<> struct TIsUEnumClass<EReturnSuccess> { enum { Value = true }; };
template<> MASSCOMMUNITYSAMPLE_API UEnum* StaticEnum<EReturnSuccess>();
// ********** End Enum EReturnSuccess **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
