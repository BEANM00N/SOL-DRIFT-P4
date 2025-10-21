// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPathDynamicObstacle.h"

#ifdef CPATHFINDING_CPathDynamicObstacle_generated_h
#error "CPathDynamicObstacle.generated.h already included, missing '#pragma once' in CPathDynamicObstacle.h"
#endif
#define CPATHFINDING_CPathDynamicObstacle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class UCPathDynamicObstacle ****************************************************
#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


CPATHFINDING_API UClass* Z_Construct_UClass_UCPathDynamicObstacle_NoRegister();

#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPathDynamicObstacle(); \
	friend struct Z_Construct_UClass_UCPathDynamicObstacle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPATHFINDING_API UClass* Z_Construct_UClass_UCPathDynamicObstacle_NoRegister(); \
public: \
	DECLARE_CLASS2(UCPathDynamicObstacle, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPathfinding"), Z_Construct_UClass_UCPathDynamicObstacle_NoRegister) \
	DECLARE_SERIALIZER(UCPathDynamicObstacle)


#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCPathDynamicObstacle(UCPathDynamicObstacle&&) = delete; \
	UCPathDynamicObstacle(const UCPathDynamicObstacle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPathDynamicObstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPathDynamicObstacle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCPathDynamicObstacle) \
	NO_API virtual ~UCPathDynamicObstacle();


#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h_12_PROLOG
#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h_15_INCLASS_NO_PURE_DECLS \
	FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCPathDynamicObstacle;

// ********** End Class UCPathDynamicObstacle ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDynamicObstacle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
