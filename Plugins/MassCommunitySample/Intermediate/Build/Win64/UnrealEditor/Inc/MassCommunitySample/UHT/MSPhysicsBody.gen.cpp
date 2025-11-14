// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Physics/MSPhysicsBody.h"
#include "Experimental/Physics/MSMassPhysicsTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSPhysicsBody() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSPhysicsBody();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSPhysicsBody_NoRegister();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSPhysicsBody ***********************************************************
void UMSPhysicsBody::StaticRegisterNativesUMSPhysicsBody()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSPhysicsBody;
UClass* UMSPhysicsBody::GetPrivateStaticClass()
{
	using TClass = UMSPhysicsBody;
	if (!Z_Registration_Info_UClass_UMSPhysicsBody.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSPhysicsBody"),
			Z_Registration_Info_UClass_UMSPhysicsBody.InnerSingleton,
			StaticRegisterNativesUMSPhysicsBody,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMSPhysicsBody.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSPhysicsBody_NoRegister()
{
	return UMSPhysicsBody::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSPhysicsBody_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Ultra experimental, I probably do things wrong with how I init the chaos bodies.\n * Expect this to change a lot\n */" },
#endif
		{ "IncludePath", "Experimental/Physics/MSPhysicsBody.h" },
		{ "ModuleRelativePath", "Experimental/Physics/MSPhysicsBody.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ultra experimental, I probably do things wrong with how I init the chaos bodies.\nExpect this to change a lot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChaosToMass_MetaData[] = {
		{ "Category", "MSPhysicsBody" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether mass sends transform data to chaos or vice versa\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSPhysicsBody.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether mass sends transform data to chaos or vice versa" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulatesPhysics_MetaData[] = {
		{ "Category", "MSPhysicsBody" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Physics sim. Probably not wise to have the sim operate on things we want to set directly from Mass.\n" },
#endif
		{ "EditCondition", "bChaosToMass" },
		{ "ModuleRelativePath", "Experimental/Physics/MSPhysicsBody.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Physics sim. Probably not wise to have the sim operate on things we want to set directly from Mass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasGravity_MetaData[] = {
		{ "Category", "MSPhysicsBody" },
		{ "ModuleRelativePath", "Experimental/Physics/MSPhysicsBody.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bManualCollisionSettingsAndGeo_MetaData[] = {
		{ "Category", "MSPhysicsBody" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// very experimental, I don't know of a nice way to expose these arrays so it's hardcoded to a capsule for now :/\n" },
#endif
		{ "ModuleRelativePath", "Experimental/Physics/MSPhysicsBody.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "very experimental, I don't know of a nice way to expose these arrays so it's hardcoded to a capsule for now :/" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[] = {
		{ "Category", "MSPhysicsBody" },
		{ "EditCondition", "bManualCollisionSettingsAndGeo" },
		{ "ModuleRelativePath", "Experimental/Physics/MSPhysicsBody.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bChaosToMass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChaosToMass;
	static void NewProp_bSimulatesPhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulatesPhysics;
	static void NewProp_bHasGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGravity;
	static void NewProp_bManualCollisionSettingsAndGeo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualCollisionSettingsAndGeo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSPhysicsBody>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bChaosToMass_SetBit(void* Obj)
{
	((UMSPhysicsBody*)Obj)->bChaosToMass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bChaosToMass = { "bChaosToMass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSPhysicsBody), &Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bChaosToMass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChaosToMass_MetaData), NewProp_bChaosToMass_MetaData) };
void Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bSimulatesPhysics_SetBit(void* Obj)
{
	((UMSPhysicsBody*)Obj)->bSimulatesPhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bSimulatesPhysics = { "bSimulatesPhysics", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSPhysicsBody), &Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bSimulatesPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulatesPhysics_MetaData), NewProp_bSimulatesPhysics_MetaData) };
void Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bHasGravity_SetBit(void* Obj)
{
	((UMSPhysicsBody*)Obj)->bHasGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bHasGravity = { "bHasGravity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSPhysicsBody), &Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bHasGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasGravity_MetaData), NewProp_bHasGravity_MetaData) };
void Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bManualCollisionSettingsAndGeo_SetBit(void* Obj)
{
	((UMSPhysicsBody*)Obj)->bManualCollisionSettingsAndGeo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bManualCollisionSettingsAndGeo = { "bManualCollisionSettingsAndGeo", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSPhysicsBody), &Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bManualCollisionSettingsAndGeo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bManualCollisionSettingsAndGeo_MetaData), NewProp_bManualCollisionSettingsAndGeo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_CollisionSettings = { "CollisionSettings", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSPhysicsBody, CollisionSettings), Z_Construct_UScriptStruct_FSharedCollisionSettingsFragment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSettings_MetaData), NewProp_CollisionSettings_MetaData) }; // 1203121588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSPhysicsBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bChaosToMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bSimulatesPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bHasGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_bManualCollisionSettingsAndGeo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSPhysicsBody_Statics::NewProp_CollisionSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSPhysicsBody_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSPhysicsBody_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSPhysicsBody_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSPhysicsBody_Statics::ClassParams = {
	&UMSPhysicsBody::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSPhysicsBody_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSPhysicsBody_Statics::PropPointers),
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSPhysicsBody_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSPhysicsBody_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSPhysicsBody()
{
	if (!Z_Registration_Info_UClass_UMSPhysicsBody.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSPhysicsBody.OuterSingleton, Z_Construct_UClass_UMSPhysicsBody_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSPhysicsBody.OuterSingleton;
}
UMSPhysicsBody::UMSPhysicsBody(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSPhysicsBody);
UMSPhysicsBody::~UMSPhysicsBody() {}
// ********** End Class UMSPhysicsBody *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSPhysicsBody_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSPhysicsBody, UMSPhysicsBody::StaticClass, TEXT("UMSPhysicsBody"), &Z_Registration_Info_UClass_UMSPhysicsBody, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSPhysicsBody), 2602540782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSPhysicsBody_h__Script_MassCommunitySample_658249135(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSPhysicsBody_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Physics_MSPhysicsBody_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
