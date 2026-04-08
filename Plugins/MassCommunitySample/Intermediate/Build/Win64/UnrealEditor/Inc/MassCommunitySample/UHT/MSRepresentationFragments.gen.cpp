// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Representation/Fragments/MSRepresentationFragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSRepresentationFragments() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat4f();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_AMSNiagaraActor_NoRegister();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomNiagaraFloatsPairFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSharedNiagaraSystemFragment **************************************
static_assert(std::is_polymorphic<FSharedNiagaraSystemFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FSharedNiagaraSystemFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemFragment;
class UScriptStruct* FSharedNiagaraSystemFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("SharedNiagaraSystemFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\x09Please keep in mind that we key NiagaraSystemFragments off of the pointer\n*\x09to the niagara system selected in the trait.\n*\x09""Don't use the regular struct CRC32 hash like you would for other shared fragments.\n**/" },
#endif
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Please keep in mind that we key NiagaraSystemFragments off of the pointer\nto the niagara system selected in the trait.\nDon't use the regular struct CRC32 hash like you would for other shared fragments." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraManagerActor_MetaData[] = {
		{ "Category", "SharedNiagaraSystemFragment" },
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticlePositions_MetaData[] = {
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleOrientations_MetaData[] = {
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityIDs_MetaData[] = {
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstCustomParticleData_MetaData[] = {
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondCustomParticleData_MetaData[] = {
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_NiagaraManagerActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticlePositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticlePositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleOrientations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticleOrientations;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntityIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EntityIDs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FirstCustomParticleData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FirstCustomParticleData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondCustomParticleData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondCustomParticleData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedNiagaraSystemFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_NiagaraManagerActor = { "NiagaraManagerActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemFragment, NiagaraManagerActor), Z_Construct_UClass_AMSNiagaraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraManagerActor_MetaData), NewProp_NiagaraManagerActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_ParticlePositions_Inner = { "ParticlePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_ParticlePositions = { "ParticlePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemFragment, ParticlePositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticlePositions_MetaData), NewProp_ParticlePositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_ParticleOrientations_Inner = { "ParticleOrientations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_ParticleOrientations = { "ParticleOrientations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemFragment, ParticleOrientations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleOrientations_MetaData), NewProp_ParticleOrientations_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_EntityIDs_Inner = { "EntityIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_EntityIDs = { "EntityIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemFragment, EntityIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityIDs_MetaData), NewProp_EntityIDs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_FirstCustomParticleData_Inner = { "FirstCustomParticleData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_FirstCustomParticleData = { "FirstCustomParticleData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemFragment, FirstCustomParticleData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstCustomParticleData_MetaData), NewProp_FirstCustomParticleData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_SecondCustomParticleData_Inner = { "SecondCustomParticleData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_SecondCustomParticleData = { "SecondCustomParticleData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemFragment, SecondCustomParticleData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondCustomParticleData_MetaData), NewProp_SecondCustomParticleData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_NiagaraManagerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_ParticlePositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_ParticlePositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_ParticleOrientations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_ParticleOrientations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_EntityIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_EntityIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_FirstCustomParticleData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_FirstCustomParticleData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_SecondCustomParticleData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewProp_SecondCustomParticleData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassSharedFragment,
	&NewStructOps,
	"SharedNiagaraSystemFragment",
	Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::PropPointers),
	sizeof(FSharedNiagaraSystemFragment),
	alignof(FSharedNiagaraSystemFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemFragment.InnerSingleton, Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemFragment.InnerSingleton;
}
// ********** End ScriptStruct FSharedNiagaraSystemFragment ****************************************

// ********** Begin ScriptStruct FCustomNiagaraFloatsPairFragment **********************************
static_assert(std::is_polymorphic<FCustomNiagaraFloatsPairFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FCustomNiagaraFloatsPairFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCustomNiagaraFloatsPairFragment;
class UScriptStruct* FCustomNiagaraFloatsPairFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCustomNiagaraFloatsPairFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCustomNiagaraFloatsPairFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomNiagaraFloatsPairFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("CustomNiagaraFloatsPairFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FCustomNiagaraFloatsPairFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCustomNiagaraFloatsPairFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomNiagaraFloatsPairFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomNiagaraFloatsPairFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"CustomNiagaraFloatsPairFragment",
	nullptr,
	0,
	sizeof(FCustomNiagaraFloatsPairFragment),
	alignof(FCustomNiagaraFloatsPairFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomNiagaraFloatsPairFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomNiagaraFloatsPairFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomNiagaraFloatsPairFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FCustomNiagaraFloatsPairFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCustomNiagaraFloatsPairFragment.InnerSingleton, Z_Construct_UScriptStruct_FCustomNiagaraFloatsPairFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCustomNiagaraFloatsPairFragment.InnerSingleton;
}
// ********** End ScriptStruct FCustomNiagaraFloatsPairFragment ************************************

// ********** Begin ScriptStruct FSharedNiagaraSystemSpawnFragment *********************************
static_assert(std::is_polymorphic<FSharedNiagaraSystemSpawnFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FSharedNiagaraSystemSpawnFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemSpawnFragment;
class UScriptStruct* FSharedNiagaraSystemSpawnFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemSpawnFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemSpawnFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("SharedNiagaraSystemSpawnFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemSpawnFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This one is for responding to one-off events like a hit effect.\n// I would argue it should be mapped based off of the physmat or something but oh well! \n" },
#endif
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This one is for responding to one-off events like a hit effect.\nI would argue it should be mapped based off of the physmat or something but oh well!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraManagerActor_MetaData[] = {
		{ "Category", "SharedNiagaraSystemSpawnFragment" },
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticlePositions_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is used to make sure we insert to the right space in the niagara array after iterating a chunk and so on\n" },
#endif
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is used to make sure we insert to the right space in the niagara array after iterating a chunk and so on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticlePositionsParameterName_MetaData[] = {
		{ "Category", "SharedNiagaraSystemSpawnFragment" },
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDirectionVectors_MetaData[] = {
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDirectionVectorsParameterName_MetaData[] = {
		{ "Category", "SharedNiagaraSystemSpawnFragment" },
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuxParameterName_MetaData[] = {
		{ "Category", "SharedNiagaraSystemSpawnFragment" },
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_NiagaraManagerActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticlePositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticlePositions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticlePositionsParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleDirectionVectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticleDirectionVectors;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticleDirectionVectorsParameterName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AuxParameterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedNiagaraSystemSpawnFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_NiagaraManagerActor = { "NiagaraManagerActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemSpawnFragment, NiagaraManagerActor), Z_Construct_UClass_AMSNiagaraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraManagerActor_MetaData), NewProp_NiagaraManagerActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticlePositions_Inner = { "ParticlePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticlePositions = { "ParticlePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemSpawnFragment, ParticlePositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticlePositions_MetaData), NewProp_ParticlePositions_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticlePositionsParameterName = { "ParticlePositionsParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemSpawnFragment, ParticlePositionsParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticlePositionsParameterName_MetaData), NewProp_ParticlePositionsParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticleDirectionVectors_Inner = { "ParticleDirectionVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticleDirectionVectors = { "ParticleDirectionVectors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemSpawnFragment, ParticleDirectionVectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleDirectionVectors_MetaData), NewProp_ParticleDirectionVectors_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticleDirectionVectorsParameterName = { "ParticleDirectionVectorsParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemSpawnFragment, ParticleDirectionVectorsParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleDirectionVectorsParameterName_MetaData), NewProp_ParticleDirectionVectorsParameterName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_AuxParameterName = { "AuxParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSharedNiagaraSystemSpawnFragment, AuxParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuxParameterName_MetaData), NewProp_AuxParameterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_NiagaraManagerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticlePositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticlePositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticlePositionsParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticleDirectionVectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticleDirectionVectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_ParticleDirectionVectorsParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewProp_AuxParameterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassSharedFragment,
	&NewStructOps,
	"SharedNiagaraSystemSpawnFragment",
	Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::PropPointers),
	sizeof(FSharedNiagaraSystemSpawnFragment),
	alignof(FSharedNiagaraSystemSpawnFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemSpawnFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemSpawnFragment.InnerSingleton, Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemSpawnFragment.InnerSingleton;
}
// ********** End ScriptStruct FSharedNiagaraSystemSpawnFragment ***********************************

// ********** Begin ScriptStruct FSampleISMPerInstanceSingleFloatFragment **************************
static_assert(std::is_polymorphic<FSampleISMPerInstanceSingleFloatFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FSampleISMPerInstanceSingleFloatFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment;
class UScriptStruct* FSampleISMPerInstanceSingleFloatFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("SampleISMPerInstanceSingleFloatFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Representation/Fragments/MSRepresentationFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSampleISMPerInstanceSingleFloatFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"SampleISMPerInstanceSingleFloatFragment",
	nullptr,
	0,
	sizeof(FSampleISMPerInstanceSingleFloatFragment),
	alignof(FSampleISMPerInstanceSingleFloatFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment.InnerSingleton, Z_Construct_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment.InnerSingleton;
}
// ********** End ScriptStruct FSampleISMPerInstanceSingleFloatFragment ****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Fragments_MSRepresentationFragments_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSharedNiagaraSystemFragment::StaticStruct, Z_Construct_UScriptStruct_FSharedNiagaraSystemFragment_Statics::NewStructOps, TEXT("SharedNiagaraSystemFragment"), &Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedNiagaraSystemFragment), 1135948991U) },
		{ FCustomNiagaraFloatsPairFragment::StaticStruct, Z_Construct_UScriptStruct_FCustomNiagaraFloatsPairFragment_Statics::NewStructOps, TEXT("CustomNiagaraFloatsPairFragment"), &Z_Registration_Info_UScriptStruct_FCustomNiagaraFloatsPairFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomNiagaraFloatsPairFragment), 3642007706U) },
		{ FSharedNiagaraSystemSpawnFragment::StaticStruct, Z_Construct_UScriptStruct_FSharedNiagaraSystemSpawnFragment_Statics::NewStructOps, TEXT("SharedNiagaraSystemSpawnFragment"), &Z_Registration_Info_UScriptStruct_FSharedNiagaraSystemSpawnFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedNiagaraSystemSpawnFragment), 2849974379U) },
		{ FSampleISMPerInstanceSingleFloatFragment::StaticStruct, Z_Construct_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment_Statics::NewStructOps, TEXT("SampleISMPerInstanceSingleFloatFragment"), &Z_Registration_Info_UScriptStruct_FSampleISMPerInstanceSingleFloatFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSampleISMPerInstanceSingleFloatFragment), 13815720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Fragments_MSRepresentationFragments_h__Script_MassCommunitySample_1626067681(TEXT("/Script/MassCommunitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Fragments_MSRepresentationFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_Fragments_MSRepresentationFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
