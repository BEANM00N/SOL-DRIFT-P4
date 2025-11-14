// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectileSim/MassProjectileHitInterface.h"

#ifdef MASSCOMMUNITYSAMPLE_MassProjectileHitInterface_generated_h
#error "MassProjectileHitInterface.generated.h already included, missing '#pragma once' in MassProjectileHitInterface.h"
#endif
#define MASSCOMMUNITYSAMPLE_MassProjectileHitInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FHitResult;
struct FMSEntityViewBPWrapper;

// ********** Begin Interface UMassProjectileHitInterface ******************************************
#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_13_CALLBACK_WRAPPERS
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMassProjectileHitInterface_NoRegister();

#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassProjectileHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassProjectileHitInterface(UMassProjectileHitInterface&&) = delete; \
	UMassProjectileHitInterface(const UMassProjectileHitInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassProjectileHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassProjectileHitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassProjectileHitInterface) \
	virtual ~UMassProjectileHitInterface() = default;


#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMassProjectileHitInterface(); \
	friend struct Z_Construct_UClass_UMassProjectileHitInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMassProjectileHitInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassProjectileHitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MassCommunitySample"), Z_Construct_UClass_UMassProjectileHitInterface_NoRegister) \
	DECLARE_SERIALIZER(UMassProjectileHitInterface)


#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMassProjectileHitInterface() {} \
public: \
	typedef UMassProjectileHitInterface UClassType; \
	typedef IMassProjectileHitInterface ThisClass; \
	static void Execute_ProjectileHit(UObject* O, FMSEntityViewBPWrapper Entity, FHitResult HitResult); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_10_PROLOG
#define FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassProjectileHitInterface;

// ********** End Interface UMassProjectileHitInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MassProjectileHitInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
