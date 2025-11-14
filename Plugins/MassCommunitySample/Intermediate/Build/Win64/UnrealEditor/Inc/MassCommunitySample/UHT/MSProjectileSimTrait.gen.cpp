// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectileSim/Traits/MSProjectileSimTrait.h"
#include "ProjectileSim/Fragments/MSProjectileFragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSProjectileSimTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSProjectileSimTrait();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSProjectileSimTrait_NoRegister();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSCollisionChannelFragment();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSProjectileSimTrait ****************************************************
void UMSProjectileSimTrait::StaticRegisterNativesUMSProjectileSimTrait()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSProjectileSimTrait;
UClass* UMSProjectileSimTrait::GetPrivateStaticClass()
{
	using TClass = UMSProjectileSimTrait;
	if (!Z_Registration_Info_UClass_UMSProjectileSimTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSProjectileSimTrait"),
			Z_Registration_Info_UClass_UMSProjectileSimTrait.InnerSingleton,
			StaticRegisterNativesUMSProjectileSimTrait,
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
	return Z_Registration_Info_UClass_UMSProjectileSimTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSProjectileSimTrait_NoRegister()
{
	return UMSProjectileSimTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSProjectileSimTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A projectile that line traces from where it was last frame (using velocity) to find hits. Other processors move it!\n * This is just a simple example, a more complex project would probably need a more specific linetrace.\n */" },
#endif
		{ "DisplayName", "Pojectile Simulation" },
		{ "IncludePath", "ProjectileSim/Traits/MSProjectileSimTrait.h" },
		{ "ModuleRelativePath", "ProjectileSim/Traits/MSProjectileSimTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A projectile that line traces from where it was last frame (using velocity) to find hits. Other processors move it!\nThis is just a simple example, a more complex project would probably need a more specific linetrace." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFiresHitEventToActors_MetaData[] = {
		{ "Category", "MSProjectileSimTrait" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to try to call the IMassProjectileHitInterface on actors we hit. This just adds a tag to the template conditionally \n" },
#endif
		{ "ModuleRelativePath", "ProjectileSim/Traits/MSProjectileSimTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to try to call the IMassProjectileHitInterface on actors we hit. This just adds a tag to the template conditionally" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRicochet_MetaData[] = {
		{ "Category", "MSProjectileSimTrait" },
		{ "ModuleRelativePath", "ProjectileSim/Traits/MSProjectileSimTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasGravity_MetaData[] = {
		{ "Category", "MSProjectileSimTrait" },
		{ "ModuleRelativePath", "ProjectileSim/Traits/MSProjectileSimTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQueriesOctree_MetaData[] = {
		{ "Category", "MSProjectileSimTrait" },
		{ "ModuleRelativePath", "ProjectileSim/Traits/MSProjectileSimTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotationFollowsVelocity_MetaData[] = {
		{ "Category", "MSProjectileSimTrait" },
		{ "ModuleRelativePath", "ProjectileSim/Traits/MSProjectileSimTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanPenetrate_MetaData[] = {
		{ "Category", "MSProjectileSimTrait" },
		{ "ModuleRelativePath", "ProjectileSim/Traits/MSProjectileSimTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelFragment_MetaData[] = {
		{ "Category", "MSProjectileSimTrait" },
		{ "ModuleRelativePath", "ProjectileSim/Traits/MSProjectileSimTrait.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bFiresHitEventToActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiresHitEventToActors;
	static void NewProp_bRicochet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRicochet;
	static void NewProp_bHasGravity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasGravity;
	static void NewProp_bQueriesOctree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQueriesOctree;
	static void NewProp_bRotationFollowsVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotationFollowsVelocity;
	static void NewProp_bCanPenetrate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPenetrate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionChannelFragment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSProjectileSimTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bFiresHitEventToActors_SetBit(void* Obj)
{
	((UMSProjectileSimTrait*)Obj)->bFiresHitEventToActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bFiresHitEventToActors = { "bFiresHitEventToActors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSProjectileSimTrait), &Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bFiresHitEventToActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFiresHitEventToActors_MetaData), NewProp_bFiresHitEventToActors_MetaData) };
void Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bRicochet_SetBit(void* Obj)
{
	((UMSProjectileSimTrait*)Obj)->bRicochet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bRicochet = { "bRicochet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSProjectileSimTrait), &Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bRicochet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRicochet_MetaData), NewProp_bRicochet_MetaData) };
void Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bHasGravity_SetBit(void* Obj)
{
	((UMSProjectileSimTrait*)Obj)->bHasGravity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bHasGravity = { "bHasGravity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSProjectileSimTrait), &Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bHasGravity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasGravity_MetaData), NewProp_bHasGravity_MetaData) };
void Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bQueriesOctree_SetBit(void* Obj)
{
	((UMSProjectileSimTrait*)Obj)->bQueriesOctree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bQueriesOctree = { "bQueriesOctree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSProjectileSimTrait), &Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bQueriesOctree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQueriesOctree_MetaData), NewProp_bQueriesOctree_MetaData) };
void Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bRotationFollowsVelocity_SetBit(void* Obj)
{
	((UMSProjectileSimTrait*)Obj)->bRotationFollowsVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bRotationFollowsVelocity = { "bRotationFollowsVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSProjectileSimTrait), &Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bRotationFollowsVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotationFollowsVelocity_MetaData), NewProp_bRotationFollowsVelocity_MetaData) };
void Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bCanPenetrate_SetBit(void* Obj)
{
	((UMSProjectileSimTrait*)Obj)->bCanPenetrate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bCanPenetrate = { "bCanPenetrate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMSProjectileSimTrait), &Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bCanPenetrate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanPenetrate_MetaData), NewProp_bCanPenetrate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_CollisionChannelFragment = { "CollisionChannelFragment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSProjectileSimTrait, CollisionChannelFragment), Z_Construct_UScriptStruct_FMSCollisionChannelFragment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannelFragment_MetaData), NewProp_CollisionChannelFragment_MetaData) }; // 2013069109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSProjectileSimTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bFiresHitEventToActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bRicochet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bHasGravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bQueriesOctree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bRotationFollowsVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_bCanPenetrate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSProjectileSimTrait_Statics::NewProp_CollisionChannelFragment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileSimTrait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSProjectileSimTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileSimTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSProjectileSimTrait_Statics::ClassParams = {
	&UMSProjectileSimTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSProjectileSimTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileSimTrait_Statics::PropPointers),
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileSimTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSProjectileSimTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSProjectileSimTrait()
{
	if (!Z_Registration_Info_UClass_UMSProjectileSimTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSProjectileSimTrait.OuterSingleton, Z_Construct_UClass_UMSProjectileSimTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSProjectileSimTrait.OuterSingleton;
}
UMSProjectileSimTrait::UMSProjectileSimTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSProjectileSimTrait);
UMSProjectileSimTrait::~UMSProjectileSimTrait() {}
// ********** End Class UMSProjectileSimTrait ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Traits_MSProjectileSimTrait_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSProjectileSimTrait, UMSProjectileSimTrait::StaticClass, TEXT("UMSProjectileSimTrait"), &Z_Registration_Info_UClass_UMSProjectileSimTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSProjectileSimTrait), 2700976144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Traits_MSProjectileSimTrait_h__Script_MassCommunitySample_196770463(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Traits_MSProjectileSimTrait_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_Traits_MSProjectileSimTrait_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
