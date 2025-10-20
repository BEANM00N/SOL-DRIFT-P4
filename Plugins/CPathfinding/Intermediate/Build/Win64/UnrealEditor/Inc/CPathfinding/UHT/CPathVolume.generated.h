// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPathVolume.h"

#ifdef CPATHFINDING_CPathVolume_generated_h
#error "CPathVolume.generated.h already included, missing '#pragma once' in CPathVolume.h"
#endif
#define CPATHFINDING_CPathVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FColor;
struct FCPathNode;

// ********** Begin Class ACPathVolume *************************************************************
#define FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawDebugPath); \
	DECLARE_FUNCTION(execDrawDebugNodesAroundLocation); \
	DECLARE_FUNCTION(execDebugDrawNeighbours); \
	DECLARE_FUNCTION(execFindPathSynchronous);


CPATHFINDING_API UClass* Z_Construct_UClass_ACPathVolume_NoRegister();

#define FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPathVolume(); \
	friend struct Z_Construct_UClass_ACPathVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPATHFINDING_API UClass* Z_Construct_UClass_ACPathVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPathVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPathfinding"), Z_Construct_UClass_ACPathVolume_NoRegister) \
	DECLARE_SERIALIZER(ACPathVolume)


#define FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPathVolume(ACPathVolume&&) = delete; \
	ACPathVolume(const ACPathVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPathVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPathVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPathVolume) \
	NO_API virtual ~ACPathVolume();


#define FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h_23_PROLOG
#define FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h_26_INCLASS_NO_PURE_DECLS \
	FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPathVolume;

// ********** End Class ACPathVolume ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
