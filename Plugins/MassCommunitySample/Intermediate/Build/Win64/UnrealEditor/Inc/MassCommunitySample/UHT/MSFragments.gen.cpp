// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Fragments/MSFragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSFragments() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpLocationFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMassSampleDebuggableTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSAngularForce();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSAngularVelocity();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSBasicMovement();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSExampleSharedFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSGravityTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSRotationFollowsVelocityTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FOriginalTransformFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FSampleColorFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSampleColorFragment **********************************************
static_assert(std::is_polymorphic<FSampleColorFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FSampleColorFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSampleColorFragment;
class UScriptStruct* FSampleColorFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSampleColorFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSampleColorFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSampleColorFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("SampleColorFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FSampleColorFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSampleColorFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMassFragments are simple structs that can hold data.\n * If you want to, it is possible to add functions as well for getter/setters and the like.\n * USTRUCTS cannot have conventional UFunctions though\n */// A simple color fragment used in many examples\n" },
#endif
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMassFragments are simple structs that can hold data.\nIf you want to, it is possible to add functions as well for getter/setters and the like.\nUSTRUCTS cannot have conventional UFunctions though\n // A simple color fragment used in many examples" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "SampleColorFragment" },
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSampleColorFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSampleColorFragment_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSampleColorFragment, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSampleColorFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSampleColorFragment_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampleColorFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSampleColorFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"SampleColorFragment",
	Z_Construct_UScriptStruct_FSampleColorFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampleColorFragment_Statics::PropPointers),
	sizeof(FSampleColorFragment),
	alignof(FSampleColorFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSampleColorFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSampleColorFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSampleColorFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FSampleColorFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSampleColorFragment.InnerSingleton, Z_Construct_UScriptStruct_FSampleColorFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSampleColorFragment.InnerSingleton;
}
// ********** End ScriptStruct FSampleColorFragment ************************************************

// ********** Begin ScriptStruct FInterpLocationFragment *******************************************
static_assert(std::is_polymorphic<FInterpLocationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FInterpLocationFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FInterpLocationFragment;
class UScriptStruct* FInterpLocationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FInterpLocationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FInterpLocationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpLocationFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("InterpLocationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FInterpLocationFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FInterpLocationFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "InterpLocationFragment" },
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingLocation_MetaData[] = {
		{ "Category", "InterpLocationFragment" },
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "InterpLocationFragment" },
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpLocationFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterpLocationFragment, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::NewProp_StartingLocation = { "StartingLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterpLocationFragment, StartingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingLocation_MetaData), NewProp_StartingLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterpLocationFragment, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::NewProp_StartingLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"InterpLocationFragment",
	Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::PropPointers),
	sizeof(FInterpLocationFragment),
	alignof(FInterpLocationFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterpLocationFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FInterpLocationFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FInterpLocationFragment.InnerSingleton, Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FInterpLocationFragment.InnerSingleton;
}
// ********** End ScriptStruct FInterpLocationFragment *********************************************

// ********** Begin ScriptStruct FOriginalTransformFragment ****************************************
static_assert(std::is_polymorphic<FOriginalTransformFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FOriginalTransformFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOriginalTransformFragment;
class UScriptStruct* FOriginalTransformFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOriginalTransformFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOriginalTransformFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOriginalTransformFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("OriginalTransformFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FOriginalTransformFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "OriginalTransformFragment" },
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOriginalTransformFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOriginalTransformFragment, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"OriginalTransformFragment",
	Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::PropPointers),
	sizeof(FOriginalTransformFragment),
	alignof(FOriginalTransformFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOriginalTransformFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FOriginalTransformFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOriginalTransformFragment.InnerSingleton, Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOriginalTransformFragment.InnerSingleton;
}
// ********** End ScriptStruct FOriginalTransformFragment ******************************************

// ********** Begin ScriptStruct FMSGravityTag *****************************************************
static_assert(std::is_polymorphic<FMSGravityTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSGravityTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSGravityTag;
class UScriptStruct* FMSGravityTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSGravityTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSGravityTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSGravityTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSGravityTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSGravityTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSGravityTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMassTags are structs that exist only as tags on Mass entities. They cannot have data!\n * Mostly used for filtering. They can be queried for to only include certain entities etc.\n */" },
#endif
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMassTags are structs that exist only as tags on Mass entities. They cannot have data!\nMostly used for filtering. They can be queried for to only include certain entities etc." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSGravityTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSGravityTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSGravityTag",
	nullptr,
	0,
	sizeof(FMSGravityTag),
	alignof(FMSGravityTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSGravityTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSGravityTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSGravityTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSGravityTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSGravityTag.InnerSingleton, Z_Construct_UScriptStruct_FMSGravityTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSGravityTag.InnerSingleton;
}
// ********** End ScriptStruct FMSGravityTag *******************************************************

// ********** Begin ScriptStruct FMSRotationFollowsVelocityTag *************************************
static_assert(std::is_polymorphic<FMSRotationFollowsVelocityTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSRotationFollowsVelocityTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSRotationFollowsVelocityTag;
class UScriptStruct* FMSRotationFollowsVelocityTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSRotationFollowsVelocityTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSRotationFollowsVelocityTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSRotationFollowsVelocityTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSRotationFollowsVelocityTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSRotationFollowsVelocityTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSRotationFollowsVelocityTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This one is used in UMSBasicMovementProcessor for the RotationFollowsVelocity query\n" },
#endif
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This one is used in UMSBasicMovementProcessor for the RotationFollowsVelocity query" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSRotationFollowsVelocityTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSRotationFollowsVelocityTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSRotationFollowsVelocityTag",
	nullptr,
	0,
	sizeof(FMSRotationFollowsVelocityTag),
	alignof(FMSRotationFollowsVelocityTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSRotationFollowsVelocityTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSRotationFollowsVelocityTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSRotationFollowsVelocityTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSRotationFollowsVelocityTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSRotationFollowsVelocityTag.InnerSingleton, Z_Construct_UScriptStruct_FMSRotationFollowsVelocityTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSRotationFollowsVelocityTag.InnerSingleton;
}
// ********** End ScriptStruct FMSRotationFollowsVelocityTag ***************************************

// ********** Begin ScriptStruct FMSBasicMovement **************************************************
static_assert(std::is_polymorphic<FMSBasicMovement>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSBasicMovement cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSBasicMovement;
class UScriptStruct* FMSBasicMovement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSBasicMovement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSBasicMovement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSBasicMovement, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSBasicMovement"));
	}
	return Z_Registration_Info_UScriptStruct_FMSBasicMovement.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSBasicMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Indicates we want to use the Mass Sample provided movement processor  (uses force to change velocity and transform)\n" },
#endif
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates we want to use the Mass Sample provided movement processor  (uses force to change velocity and transform)" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSBasicMovement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSBasicMovement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSBasicMovement",
	nullptr,
	0,
	sizeof(FMSBasicMovement),
	alignof(FMSBasicMovement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSBasicMovement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSBasicMovement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSBasicMovement()
{
	if (!Z_Registration_Info_UScriptStruct_FMSBasicMovement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSBasicMovement.InnerSingleton, Z_Construct_UScriptStruct_FMSBasicMovement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSBasicMovement.InnerSingleton;
}
// ********** End ScriptStruct FMSBasicMovement ****************************************************

// ********** Begin ScriptStruct FMassSampleDebuggableTag ******************************************
static_assert(std::is_polymorphic<FMassSampleDebuggableTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassSampleDebuggableTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassSampleDebuggableTag;
class UScriptStruct* FMassSampleDebuggableTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassSampleDebuggableTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassSampleDebuggableTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSampleDebuggableTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MassSampleDebuggableTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassSampleDebuggableTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMassSampleDebuggableTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSampleDebuggableTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSampleDebuggableTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassSampleDebuggableTag",
	nullptr,
	0,
	sizeof(FMassSampleDebuggableTag),
	alignof(FMassSampleDebuggableTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSampleDebuggableTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassSampleDebuggableTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassSampleDebuggableTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassSampleDebuggableTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassSampleDebuggableTag.InnerSingleton, Z_Construct_UScriptStruct_FMassSampleDebuggableTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMassSampleDebuggableTag.InnerSingleton;
}
// ********** End ScriptStruct FMassSampleDebuggableTag ********************************************

// ********** Begin ScriptStruct FMSExampleSharedFragment ******************************************
static_assert(std::is_polymorphic<FMSExampleSharedFragment>() == std::is_polymorphic<FMassConstSharedFragment>(), "USTRUCT FMSExampleSharedFragment cannot be polymorphic unless super FMassConstSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSExampleSharedFragment;
class UScriptStruct* FMSExampleSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSExampleSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSExampleSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSExampleSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSExampleSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMSExampleSharedFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A simple shared fragment example\n// Generally these are added through traits\n// This one is a const mass fragment, which is required to use this as a readonly shared fragment\n" },
#endif
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple shared fragment example\nGenerally these are added through traits\nThis one is a const mass fragment, which is required to use this as a readonly shared fragment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SomeKindaOfData_MetaData[] = {
		{ "Category", "MSExampleSharedFragment" },
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_SomeKindaOfData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSExampleSharedFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::NewProp_SomeKindaOfData = { "SomeKindaOfData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMSExampleSharedFragment, SomeKindaOfData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SomeKindaOfData_MetaData), NewProp_SomeKindaOfData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::NewProp_SomeKindaOfData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassConstSharedFragment,
	&NewStructOps,
	"MSExampleSharedFragment",
	Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::PropPointers),
	sizeof(FMSExampleSharedFragment),
	alignof(FMSExampleSharedFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSExampleSharedFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMSExampleSharedFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSExampleSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSExampleSharedFragment.InnerSingleton;
}
// ********** End ScriptStruct FMSExampleSharedFragment ********************************************

// ********** Begin ScriptStruct FMSAngularForce ***************************************************
static_assert(std::is_polymorphic<FMSAngularForce>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMSAngularForce cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSAngularForce;
class UScriptStruct* FMSAngularForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSAngularForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSAngularForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSAngularForce, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSAngularForce"));
	}
	return Z_Registration_Info_UScriptStruct_FMSAngularForce.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSAngularForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSAngularForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSAngularForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MSAngularForce",
	nullptr,
	0,
	sizeof(FMSAngularForce),
	alignof(FMSAngularForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSAngularForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSAngularForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSAngularForce()
{
	if (!Z_Registration_Info_UScriptStruct_FMSAngularForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSAngularForce.InnerSingleton, Z_Construct_UScriptStruct_FMSAngularForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSAngularForce.InnerSingleton;
}
// ********** End ScriptStruct FMSAngularForce *****************************************************

// ********** Begin ScriptStruct FMSAngularVelocity ************************************************
static_assert(std::is_polymorphic<FMSAngularVelocity>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMSAngularVelocity cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSAngularVelocity;
class UScriptStruct* FMSAngularVelocity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSAngularVelocity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSAngularVelocity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSAngularVelocity, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSAngularVelocity"));
	}
	return Z_Registration_Info_UScriptStruct_FMSAngularVelocity.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSAngularVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Common/Fragments/MSFragments.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSAngularVelocity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSAngularVelocity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MSAngularVelocity",
	nullptr,
	0,
	sizeof(FMSAngularVelocity),
	alignof(FMSAngularVelocity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSAngularVelocity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSAngularVelocity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSAngularVelocity()
{
	if (!Z_Registration_Info_UScriptStruct_FMSAngularVelocity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSAngularVelocity.InnerSingleton, Z_Construct_UScriptStruct_FMSAngularVelocity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSAngularVelocity.InnerSingleton;
}
// ********** End ScriptStruct FMSAngularVelocity **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Fragments_MSFragments_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSampleColorFragment::StaticStruct, Z_Construct_UScriptStruct_FSampleColorFragment_Statics::NewStructOps, TEXT("SampleColorFragment"), &Z_Registration_Info_UScriptStruct_FSampleColorFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSampleColorFragment), 2574972118U) },
		{ FInterpLocationFragment::StaticStruct, Z_Construct_UScriptStruct_FInterpLocationFragment_Statics::NewStructOps, TEXT("InterpLocationFragment"), &Z_Registration_Info_UScriptStruct_FInterpLocationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterpLocationFragment), 399432477U) },
		{ FOriginalTransformFragment::StaticStruct, Z_Construct_UScriptStruct_FOriginalTransformFragment_Statics::NewStructOps, TEXT("OriginalTransformFragment"), &Z_Registration_Info_UScriptStruct_FOriginalTransformFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOriginalTransformFragment), 3671336871U) },
		{ FMSGravityTag::StaticStruct, Z_Construct_UScriptStruct_FMSGravityTag_Statics::NewStructOps, TEXT("MSGravityTag"), &Z_Registration_Info_UScriptStruct_FMSGravityTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSGravityTag), 1356110093U) },
		{ FMSRotationFollowsVelocityTag::StaticStruct, Z_Construct_UScriptStruct_FMSRotationFollowsVelocityTag_Statics::NewStructOps, TEXT("MSRotationFollowsVelocityTag"), &Z_Registration_Info_UScriptStruct_FMSRotationFollowsVelocityTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSRotationFollowsVelocityTag), 1508828527U) },
		{ FMSBasicMovement::StaticStruct, Z_Construct_UScriptStruct_FMSBasicMovement_Statics::NewStructOps, TEXT("MSBasicMovement"), &Z_Registration_Info_UScriptStruct_FMSBasicMovement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSBasicMovement), 2411187772U) },
		{ FMassSampleDebuggableTag::StaticStruct, Z_Construct_UScriptStruct_FMassSampleDebuggableTag_Statics::NewStructOps, TEXT("MassSampleDebuggableTag"), &Z_Registration_Info_UScriptStruct_FMassSampleDebuggableTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSampleDebuggableTag), 879555536U) },
		{ FMSExampleSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMSExampleSharedFragment_Statics::NewStructOps, TEXT("MSExampleSharedFragment"), &Z_Registration_Info_UScriptStruct_FMSExampleSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSExampleSharedFragment), 1350320826U) },
		{ FMSAngularForce::StaticStruct, Z_Construct_UScriptStruct_FMSAngularForce_Statics::NewStructOps, TEXT("MSAngularForce"), &Z_Registration_Info_UScriptStruct_FMSAngularForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSAngularForce), 2650035214U) },
		{ FMSAngularVelocity::StaticStruct, Z_Construct_UScriptStruct_FMSAngularVelocity_Statics::NewStructOps, TEXT("MSAngularVelocity"), &Z_Registration_Info_UScriptStruct_FMSAngularVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSAngularVelocity), 2973283123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Fragments_MSFragments_h__Script_MassCommunitySample_1449356564(TEXT("/Script/MassCommunitySample"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Fragments_MSFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Fragments_MSFragments_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
