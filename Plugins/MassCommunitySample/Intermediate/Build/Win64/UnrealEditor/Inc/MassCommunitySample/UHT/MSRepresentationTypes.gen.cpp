// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Representation/MSRepresentationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSRepresentationTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_AMSNiagaraActor_NoRegister();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMassHelper();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FNiagaraMassHelper ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNiagaraMassHelper;
class UScriptStruct* FNiagaraMassHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNiagaraMassHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNiagaraMassHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMassHelper, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("NiagaraMassHelper"));
	}
	return Z_Registration_Info_UScriptStruct_FNiagaraMassHelper.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Representation/MSRepresentationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraManagerActor_MetaData[] = {
		{ "ModuleRelativePath", "Representation/MSRepresentationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticlePositions_MetaData[] = {
		{ "ModuleRelativePath", "Representation/MSRepresentationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDirectionVectors_MetaData[] = {
		{ "ModuleRelativePath", "Representation/MSRepresentationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_NiagaraManagerActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticlePositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticlePositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleDirectionVectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParticleDirectionVectors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMassHelper>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_NiagaraManagerActor = { "NiagaraManagerActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMassHelper, NiagaraManagerActor), Z_Construct_UClass_AMSNiagaraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraManagerActor_MetaData), NewProp_NiagaraManagerActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_ParticlePositions_Inner = { "ParticlePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_ParticlePositions = { "ParticlePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMassHelper, ParticlePositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticlePositions_MetaData), NewProp_ParticlePositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_ParticleDirectionVectors_Inner = { "ParticleDirectionVectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_ParticleDirectionVectors = { "ParticleDirectionVectors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraMassHelper, ParticleDirectionVectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleDirectionVectors_MetaData), NewProp_ParticleDirectionVectors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_NiagaraManagerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_ParticlePositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_ParticlePositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_ParticleDirectionVectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewProp_ParticleDirectionVectors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	nullptr,
	&NewStructOps,
	"NiagaraMassHelper",
	Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::PropPointers),
	sizeof(FNiagaraMassHelper),
	alignof(FNiagaraMassHelper),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMassHelper()
{
	if (!Z_Registration_Info_UScriptStruct_FNiagaraMassHelper.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNiagaraMassHelper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNiagaraMassHelper.InnerSingleton;
}
// ********** End ScriptStruct FNiagaraMassHelper **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSRepresentationTypes_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraMassHelper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMassHelper_Statics::NewStructOps, TEXT("NiagaraMassHelper"), &Z_Registration_Info_UScriptStruct_FNiagaraMassHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMassHelper), 2121279249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSRepresentationTypes_h__Script_MassCommunitySample_226827460(TEXT("/Script/MassCommunitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSRepresentationTypes_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Representation_MSRepresentationTypes_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
