// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PjcSubsystem.h"

#ifdef PJC_PjcSubsystem_generated_h
#error "PjcSubsystem.generated.h already included, missing '#pragma once' in PjcSubsystem.h"
#endif
#define PJC_PjcSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FAssetData;
struct FPjcAssetIndirectInfo;
struct FTopLevelAssetPath;

// ********** Begin Class UPjcSubsystem ************************************************************
#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssetExactClassName); \
	DECLARE_FUNCTION(execGetFilesTotalSize); \
	DECLARE_FUNCTION(execGetFileSize); \
	DECLARE_FUNCTION(execGetAssetsTotalSize); \
	DECLARE_FUNCTION(execGetAssetSize); \
	DECLARE_FUNCTION(execPathConvertToObjectPath); \
	DECLARE_FUNCTION(execPathConvertToRelative); \
	DECLARE_FUNCTION(execPathConvertToAbsolute); \
	DECLARE_FUNCTION(execPathNormalize); \
	DECLARE_FUNCTION(execAssetIsCircular); \
	DECLARE_FUNCTION(execAssetIsExtReferenced); \
	DECLARE_FUNCTION(execAssetIsBlueprint); \
	DECLARE_FUNCTION(execEditorIsInPlayMode); \
	DECLARE_FUNCTION(execFixProjectRedirectors); \
	DECLARE_FUNCTION(execProjectHasRedirectors); \
	DECLARE_FUNCTION(execGetProjectRedirectors); \
	DECLARE_FUNCTION(execDeleteFilesCorrupted); \
	DECLARE_FUNCTION(execDeleteFilesExternal); \
	DECLARE_FUNCTION(execDeleteFoldersEmpty); \
	DECLARE_FUNCTION(execDeleteAssetsUnused); \
	DECLARE_FUNCTION(execGetFoldersEmpty); \
	DECLARE_FUNCTION(execGetFolders); \
	DECLARE_FUNCTION(execGetFilesCorrupted); \
	DECLARE_FUNCTION(execGetFilesExternalExcluded); \
	DECLARE_FUNCTION(execGetFilesExternalFiltered); \
	DECLARE_FUNCTION(execGetFilesExternalAll); \
	DECLARE_FUNCTION(execGetFilesByExt); \
	DECLARE_FUNCTION(execGetFiles); \
	DECLARE_FUNCTION(execGetClassNamesExcluded); \
	DECLARE_FUNCTION(execGetClassNamesEditor); \
	DECLARE_FUNCTION(execGetClassNamesPrimary); \
	DECLARE_FUNCTION(execGetAssetsExtReferenced); \
	DECLARE_FUNCTION(execGetAssetsExcluded); \
	DECLARE_FUNCTION(execGetAssetsEditor); \
	DECLARE_FUNCTION(execGetAssetsCircular); \
	DECLARE_FUNCTION(execGetAssetsIndirect); \
	DECLARE_FUNCTION(execGetAssetsPrimary); \
	DECLARE_FUNCTION(execGetAssetsUnused); \
	DECLARE_FUNCTION(execGetAssetsUsed); \
	DECLARE_FUNCTION(execGetAssetsAll);


PJC_API UClass* Z_Construct_UClass_UPjcSubsystem_NoRegister();

#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPjcSubsystem(); \
	friend struct Z_Construct_UClass_UPjcSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PJC_API UClass* Z_Construct_UClass_UPjcSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPjcSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Pjc"), Z_Construct_UClass_UPjcSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPjcSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPjcSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPjcSubsystem(UPjcSubsystem&&) = delete; \
	UPjcSubsystem(const UPjcSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPjcSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPjcSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPjcSubsystem) \
	NO_API virtual ~UPjcSubsystem();


#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h_14_PROLOG
#define FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPjcSubsystem;

// ********** End Class UPjcSubsystem **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
