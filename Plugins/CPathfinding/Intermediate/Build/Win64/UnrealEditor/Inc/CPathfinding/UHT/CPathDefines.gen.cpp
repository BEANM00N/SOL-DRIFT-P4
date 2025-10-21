// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPathDefines.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPathDefines() {}

// ********** Begin Cross Module References ********************************************************
CPATHFINDING_API UEnum* Z_Construct_UEnum_CPathfinding_EAgentShape();
CPATHFINDING_API UEnum* Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason();
UPackage* Z_Construct_UPackage__Script_CPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAgentShape ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAgentShape;
static UEnum* EAgentShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAgentShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAgentShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CPathfinding_EAgentShape, (UObject*)Z_Construct_UPackage__Script_CPathfinding(), TEXT("EAgentShape"));
	}
	return Z_Registration_Info_UEnum_EAgentShape.OuterSingleton;
}
template<> CPATHFINDING_API UEnum* StaticEnum<EAgentShape>()
{
	return EAgentShape_StaticEnum();
}
struct Z_Construct_UEnum_CPathfinding_EAgentShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Name", "Box" },
		{ "Capsule.Name", "Capsule" },
		{ "ModuleRelativePath", "Public/CPathDefines.h" },
		{ "Sphere.Name", "Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Capsule", (int64)Capsule },
		{ "Box", (int64)Box },
		{ "Sphere", (int64)Sphere },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CPathfinding_EAgentShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CPathfinding,
	nullptr,
	"EAgentShape",
	"EAgentShape",
	Z_Construct_UEnum_CPathfinding_EAgentShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CPathfinding_EAgentShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CPathfinding_EAgentShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CPathfinding_EAgentShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CPathfinding_EAgentShape()
{
	if (!Z_Registration_Info_UEnum_EAgentShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAgentShape.InnerSingleton, Z_Construct_UEnum_CPathfinding_EAgentShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAgentShape.InnerSingleton;
}
// ********** End Enum EAgentShape *****************************************************************

// ********** Begin Enum ECPathfindingFailReason ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECPathfindingFailReason;
static UEnum* ECPathfindingFailReason_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECPathfindingFailReason.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECPathfindingFailReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason, (UObject*)Z_Construct_UPackage__Script_CPathfinding(), TEXT("ECPathfindingFailReason"));
	}
	return Z_Registration_Info_UEnum_ECPathfindingFailReason.OuterSingleton;
}
template<> CPATHFINDING_API UEnum* StaticEnum<ECPathfindingFailReason>()
{
	return ECPathfindingFailReason_StaticEnum();
}
struct Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Wrong Start and End Location mean that requested location was out of volume, or it was inside an occupied space.\n" },
#endif
		{ "EndLocationUnreachable.Name", "EndLocationUnreachable" },
		{ "ModuleRelativePath", "Public/CPathDefines.h" },
		{ "None.Name", "None" },
		{ "Timeout.Name", "Timeout" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrong Start and End Location mean that requested location was out of volume, or it was inside an occupied space." },
#endif
		{ "Unknown.Name", "Unknown" },
		{ "VolumeNotGenerated.Name", "VolumeNotGenerated" },
		{ "VolumeNotValid.Name", "VolumeNotValid" },
		{ "WrongEndLocation.Name", "WrongEndLocation" },
		{ "WrongStartLocation.Name", "WrongStartLocation" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "None", (int64)None },
		{ "VolumeNotValid", (int64)VolumeNotValid },
		{ "VolumeNotGenerated", (int64)VolumeNotGenerated },
		{ "Timeout", (int64)Timeout },
		{ "WrongStartLocation", (int64)WrongStartLocation },
		{ "WrongEndLocation", (int64)WrongEndLocation },
		{ "EndLocationUnreachable", (int64)EndLocationUnreachable },
		{ "Unknown", (int64)Unknown },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CPathfinding,
	nullptr,
	"ECPathfindingFailReason",
	"ECPathfindingFailReason",
	Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason()
{
	if (!Z_Registration_Info_UEnum_ECPathfindingFailReason.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECPathfindingFailReason.InnerSingleton, Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECPathfindingFailReason.InnerSingleton;
}
// ********** End Enum ECPathfindingFailReason *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDefines_h__Script_CPathfinding_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAgentShape_StaticEnum, TEXT("EAgentShape"), &Z_Registration_Info_UEnum_EAgentShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3991755297U) },
		{ ECPathfindingFailReason_StaticEnum, TEXT("ECPathfindingFailReason"), &Z_Registration_Info_UEnum_ECPathfindingFailReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4250217323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDefines_h__Script_CPathfinding_1744240529(TEXT("/Script/CPathfinding"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDefines_h__Script_CPathfinding_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDefines_h__Script_CPathfinding_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
