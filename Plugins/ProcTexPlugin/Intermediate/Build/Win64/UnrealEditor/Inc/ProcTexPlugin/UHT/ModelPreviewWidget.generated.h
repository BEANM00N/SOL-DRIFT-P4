// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModelPreviewWidget.h"

#ifdef PROCTEXPLUGIN_ModelPreviewWidget_generated_h
#error "ModelPreviewWidget.generated.h already included, missing '#pragma once' in ModelPreviewWidget.h"
#endif
#define PROCTEXPLUGIN_ModelPreviewWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

// ********** Begin Class UModelPreviewWidget ******************************************************
#define FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetSkeletalMesh); \
	DECLARE_FUNCTION(execSetStaticMesh); \
	DECLARE_FUNCTION(execApplyMeshAsset);


PROCTEXPLUGIN_API UClass* Z_Construct_UClass_UModelPreviewWidget_NoRegister();

#define FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModelPreviewWidget(); \
	friend struct Z_Construct_UClass_UModelPreviewWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PROCTEXPLUGIN_API UClass* Z_Construct_UClass_UModelPreviewWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UModelPreviewWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProcTexPlugin"), Z_Construct_UClass_UModelPreviewWidget_NoRegister) \
	DECLARE_SERIALIZER(UModelPreviewWidget)


#define FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModelPreviewWidget(UModelPreviewWidget&&) = delete; \
	UModelPreviewWidget(const UModelPreviewWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModelPreviewWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModelPreviewWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModelPreviewWidget)


#define FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h_18_PROLOG
#define FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModelPreviewWidget;

// ********** End Class UModelPreviewWidget ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
