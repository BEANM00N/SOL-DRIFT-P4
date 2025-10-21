// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPathFindPath.h"

#ifdef CPATHFINDING_CPathFindPath_generated_h
#error "CPathFindPath.generated.h already included, missing '#pragma once' in CPathFindPath.h"
#endif
#define CPATHFINDING_CPathFindPath_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACPathVolume;
class UCPathAsyncFindPath;
struct FCPathNode;
struct FCPathResult;

// ********** Begin Delegate FResponseDelegate *****************************************************
#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h_83_DELEGATE \
CPATHFINDING_API void FResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponseDelegate, TArray<FCPathNode> const& Path, ECPathfindingFailReason FailReason);


// ********** End Delegate FResponseDelegate *******************************************************

// ********** Begin Class UCPathAsyncFindPath ******************************************************
#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPathFound); \
	DECLARE_FUNCTION(execFindPathAsync);


CPATHFINDING_API UClass* Z_Construct_UClass_UCPathAsyncFindPath_NoRegister();

#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPathAsyncFindPath(); \
	friend struct Z_Construct_UClass_UCPathAsyncFindPath_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPATHFINDING_API UClass* Z_Construct_UClass_UCPathAsyncFindPath_NoRegister(); \
public: \
	DECLARE_CLASS2(UCPathAsyncFindPath, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CPathfinding"), Z_Construct_UClass_UCPathAsyncFindPath_NoRegister) \
	DECLARE_SERIALIZER(UCPathAsyncFindPath)


#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPathAsyncFindPath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCPathAsyncFindPath(UCPathAsyncFindPath&&) = delete; \
	UCPathAsyncFindPath(const UCPathAsyncFindPath&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPathAsyncFindPath); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPathAsyncFindPath); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPathAsyncFindPath) \
	NO_API virtual ~UCPathAsyncFindPath();


#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h_88_PROLOG
#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h_91_INCLASS_NO_PURE_DECLS \
	FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCPathAsyncFindPath;

// ********** End Class UCPathAsyncFindPath ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathFindPath_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
