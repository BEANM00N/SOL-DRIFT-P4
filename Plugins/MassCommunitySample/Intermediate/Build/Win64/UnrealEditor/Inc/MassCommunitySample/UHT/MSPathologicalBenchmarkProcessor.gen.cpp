// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSPathologicalBenchmarkProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSPathologicalBenchmarkProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSPathologicalBenchmarkProcessor_NoRegister();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FAlberta();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FBritishColumbia();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FManitoba();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FNewBrunswick();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FNewfoundlandandLabrador();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FNovaScotia();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FOntario();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FPathologicFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FPrinceEdwardIsland();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FQuebec();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FSaskatchewan();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAlberta **********************************************************
static_assert(std::is_polymorphic<FAlberta>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FAlberta cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAlberta;
class UScriptStruct* FAlberta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAlberta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAlberta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAlberta, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("Alberta"));
	}
	return Z_Registration_Info_UScriptStruct_FAlberta.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAlberta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n *\n *This is an ECS benchmark called Pathological invented by vblanco\n *It creates entities with a random sets of components as a stress test.\n *We start with 10 different components and create combinations of each from length 1 to 10.\n *Then we creates a massive list of 1023 different archetypes\n *This one of the worst performance cases for archetype style ECS implementations\n */" },
#endif
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*This is an ECS benchmark called Pathological invented by vblanco\n*It creates entities with a random sets of components as a stress test.\n*We start with 10 different components and create combinations of each from length 1 to 10.\n*Then we creates a massive list of 1023 different archetypes\n*This one of the worst performance cases for archetype style ECS implementations" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAlberta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAlberta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"Alberta",
	nullptr,
	0,
	sizeof(FAlberta),
	alignof(FAlberta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAlberta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAlberta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAlberta()
{
	if (!Z_Registration_Info_UScriptStruct_FAlberta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAlberta.InnerSingleton, Z_Construct_UScriptStruct_FAlberta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAlberta.InnerSingleton;
}
// ********** End ScriptStruct FAlberta ************************************************************

// ********** Begin ScriptStruct FBritishColumbia **************************************************
static_assert(std::is_polymorphic<FBritishColumbia>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FBritishColumbia cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBritishColumbia;
class UScriptStruct* FBritishColumbia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBritishColumbia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBritishColumbia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBritishColumbia, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("BritishColumbia"));
	}
	return Z_Registration_Info_UScriptStruct_FBritishColumbia.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBritishColumbia_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBritishColumbia>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBritishColumbia_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"BritishColumbia",
	nullptr,
	0,
	sizeof(FBritishColumbia),
	alignof(FBritishColumbia),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBritishColumbia_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBritishColumbia_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBritishColumbia()
{
	if (!Z_Registration_Info_UScriptStruct_FBritishColumbia.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBritishColumbia.InnerSingleton, Z_Construct_UScriptStruct_FBritishColumbia_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBritishColumbia.InnerSingleton;
}
// ********** End ScriptStruct FBritishColumbia ****************************************************

// ********** Begin ScriptStruct FManitoba *********************************************************
static_assert(std::is_polymorphic<FManitoba>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FManitoba cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FManitoba;
class UScriptStruct* FManitoba::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FManitoba.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FManitoba.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManitoba, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("Manitoba"));
	}
	return Z_Registration_Info_UScriptStruct_FManitoba.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FManitoba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManitoba>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManitoba_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"Manitoba",
	nullptr,
	0,
	sizeof(FManitoba),
	alignof(FManitoba),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManitoba_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FManitoba_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FManitoba()
{
	if (!Z_Registration_Info_UScriptStruct_FManitoba.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FManitoba.InnerSingleton, Z_Construct_UScriptStruct_FManitoba_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FManitoba.InnerSingleton;
}
// ********** End ScriptStruct FManitoba ***********************************************************

// ********** Begin ScriptStruct FNewBrunswick *****************************************************
static_assert(std::is_polymorphic<FNewBrunswick>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FNewBrunswick cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNewBrunswick;
class UScriptStruct* FNewBrunswick::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNewBrunswick.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNewBrunswick.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewBrunswick, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("NewBrunswick"));
	}
	return Z_Registration_Info_UScriptStruct_FNewBrunswick.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNewBrunswick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewBrunswick>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewBrunswick_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"NewBrunswick",
	nullptr,
	0,
	sizeof(FNewBrunswick),
	alignof(FNewBrunswick),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewBrunswick_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewBrunswick_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNewBrunswick()
{
	if (!Z_Registration_Info_UScriptStruct_FNewBrunswick.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNewBrunswick.InnerSingleton, Z_Construct_UScriptStruct_FNewBrunswick_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNewBrunswick.InnerSingleton;
}
// ********** End ScriptStruct FNewBrunswick *******************************************************

// ********** Begin ScriptStruct FNewfoundlandandLabrador ******************************************
static_assert(std::is_polymorphic<FNewfoundlandandLabrador>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FNewfoundlandandLabrador cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNewfoundlandandLabrador;
class UScriptStruct* FNewfoundlandandLabrador::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNewfoundlandandLabrador.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNewfoundlandandLabrador.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNewfoundlandandLabrador, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("NewfoundlandandLabrador"));
	}
	return Z_Registration_Info_UScriptStruct_FNewfoundlandandLabrador.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNewfoundlandandLabrador_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNewfoundlandandLabrador>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNewfoundlandandLabrador_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"NewfoundlandandLabrador",
	nullptr,
	0,
	sizeof(FNewfoundlandandLabrador),
	alignof(FNewfoundlandandLabrador),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNewfoundlandandLabrador_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNewfoundlandandLabrador_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNewfoundlandandLabrador()
{
	if (!Z_Registration_Info_UScriptStruct_FNewfoundlandandLabrador.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNewfoundlandandLabrador.InnerSingleton, Z_Construct_UScriptStruct_FNewfoundlandandLabrador_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNewfoundlandandLabrador.InnerSingleton;
}
// ********** End ScriptStruct FNewfoundlandandLabrador ********************************************

// ********** Begin ScriptStruct FNovaScotia *******************************************************
static_assert(std::is_polymorphic<FNovaScotia>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FNovaScotia cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FNovaScotia;
class UScriptStruct* FNovaScotia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FNovaScotia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FNovaScotia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNovaScotia, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("NovaScotia"));
	}
	return Z_Registration_Info_UScriptStruct_FNovaScotia.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FNovaScotia_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNovaScotia>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNovaScotia_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"NovaScotia",
	nullptr,
	0,
	sizeof(FNovaScotia),
	alignof(FNovaScotia),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNovaScotia_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNovaScotia_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNovaScotia()
{
	if (!Z_Registration_Info_UScriptStruct_FNovaScotia.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FNovaScotia.InnerSingleton, Z_Construct_UScriptStruct_FNovaScotia_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FNovaScotia.InnerSingleton;
}
// ********** End ScriptStruct FNovaScotia *********************************************************

// ********** Begin ScriptStruct FOntario **********************************************************
static_assert(std::is_polymorphic<FOntario>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FOntario cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOntario;
class UScriptStruct* FOntario::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOntario.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOntario.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOntario, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("Ontario"));
	}
	return Z_Registration_Info_UScriptStruct_FOntario.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FOntario_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOntario>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOntario_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"Ontario",
	nullptr,
	0,
	sizeof(FOntario),
	alignof(FOntario),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOntario_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOntario_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOntario()
{
	if (!Z_Registration_Info_UScriptStruct_FOntario.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOntario.InnerSingleton, Z_Construct_UScriptStruct_FOntario_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FOntario.InnerSingleton;
}
// ********** End ScriptStruct FOntario ************************************************************

// ********** Begin ScriptStruct FPrinceEdwardIsland ***********************************************
static_assert(std::is_polymorphic<FPrinceEdwardIsland>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FPrinceEdwardIsland cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPrinceEdwardIsland;
class UScriptStruct* FPrinceEdwardIsland::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPrinceEdwardIsland.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPrinceEdwardIsland.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrinceEdwardIsland, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("PrinceEdwardIsland"));
	}
	return Z_Registration_Info_UScriptStruct_FPrinceEdwardIsland.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPrinceEdwardIsland_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrinceEdwardIsland>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrinceEdwardIsland_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"PrinceEdwardIsland",
	nullptr,
	0,
	sizeof(FPrinceEdwardIsland),
	alignof(FPrinceEdwardIsland),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrinceEdwardIsland_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPrinceEdwardIsland_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPrinceEdwardIsland()
{
	if (!Z_Registration_Info_UScriptStruct_FPrinceEdwardIsland.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPrinceEdwardIsland.InnerSingleton, Z_Construct_UScriptStruct_FPrinceEdwardIsland_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPrinceEdwardIsland.InnerSingleton;
}
// ********** End ScriptStruct FPrinceEdwardIsland *************************************************

// ********** Begin ScriptStruct FQuebec ***********************************************************
static_assert(std::is_polymorphic<FQuebec>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FQuebec cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FQuebec;
class UScriptStruct* FQuebec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FQuebec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FQuebec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuebec, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("Quebec"));
	}
	return Z_Registration_Info_UScriptStruct_FQuebec.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FQuebec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuebec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuebec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"Quebec",
	nullptr,
	0,
	sizeof(FQuebec),
	alignof(FQuebec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuebec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuebec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuebec()
{
	if (!Z_Registration_Info_UScriptStruct_FQuebec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FQuebec.InnerSingleton, Z_Construct_UScriptStruct_FQuebec_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FQuebec.InnerSingleton;
}
// ********** End ScriptStruct FQuebec *************************************************************

// ********** Begin ScriptStruct FSaskatchewan *****************************************************
static_assert(std::is_polymorphic<FSaskatchewan>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FSaskatchewan cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSaskatchewan;
class UScriptStruct* FSaskatchewan::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSaskatchewan.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSaskatchewan.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaskatchewan, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("Saskatchewan"));
	}
	return Z_Registration_Info_UScriptStruct_FSaskatchewan.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSaskatchewan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaskatchewan>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaskatchewan_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"Saskatchewan",
	nullptr,
	0,
	sizeof(FSaskatchewan),
	alignof(FSaskatchewan),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaskatchewan_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSaskatchewan_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSaskatchewan()
{
	if (!Z_Registration_Info_UScriptStruct_FSaskatchewan.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSaskatchewan.InnerSingleton, Z_Construct_UScriptStruct_FSaskatchewan_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSaskatchewan.InnerSingleton;
}
// ********** End ScriptStruct FSaskatchewan *******************************************************

// ********** Begin ScriptStruct FPathologicFragment ***********************************************
static_assert(std::is_polymorphic<FPathologicFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FPathologicFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPathologicFragment;
class UScriptStruct* FPathologicFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPathologicFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPathologicFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathologicFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("PathologicFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FPathologicFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPathologicFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathologicFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathologicFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"PathologicFragment",
	nullptr,
	0,
	sizeof(FPathologicFragment),
	alignof(FPathologicFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathologicFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPathologicFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPathologicFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FPathologicFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPathologicFragment.InnerSingleton, Z_Construct_UScriptStruct_FPathologicFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPathologicFragment.InnerSingleton;
}
// ********** End ScriptStruct FPathologicFragment *************************************************

// ********** Begin Class UMSPathologicalBenchmarkProcessor ****************************************
void UMSPathologicalBenchmarkProcessor::StaticRegisterNativesUMSPathologicalBenchmarkProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSPathologicalBenchmarkProcessor;
UClass* UMSPathologicalBenchmarkProcessor::GetPrivateStaticClass()
{
	using TClass = UMSPathologicalBenchmarkProcessor;
	if (!Z_Registration_Info_UClass_UMSPathologicalBenchmarkProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSPathologicalBenchmarkProcessor"),
			Z_Registration_Info_UClass_UMSPathologicalBenchmarkProcessor.InnerSingleton,
			StaticRegisterNativesUMSPathologicalBenchmarkProcessor,
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
	return Z_Registration_Info_UClass_UMSPathologicalBenchmarkProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSPathologicalBenchmarkProcessor_NoRegister()
{
	return UMSPathologicalBenchmarkProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSPathologicalBenchmarkProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
		{ "ModuleRelativePath", "Experimental/Benchmark/MSPathologicalBenchmarkProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSPathologicalBenchmarkProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSPathologicalBenchmarkProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSPathologicalBenchmarkProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSPathologicalBenchmarkProcessor_Statics::ClassParams = {
	&UMSPathologicalBenchmarkProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSPathologicalBenchmarkProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSPathologicalBenchmarkProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSPathologicalBenchmarkProcessor()
{
	if (!Z_Registration_Info_UClass_UMSPathologicalBenchmarkProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSPathologicalBenchmarkProcessor.OuterSingleton, Z_Construct_UClass_UMSPathologicalBenchmarkProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSPathologicalBenchmarkProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSPathologicalBenchmarkProcessor);
UMSPathologicalBenchmarkProcessor::~UMSPathologicalBenchmarkProcessor() {}
// ********** End Class UMSPathologicalBenchmarkProcessor ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSPathologicalBenchmarkProcessor_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAlberta::StaticStruct, Z_Construct_UScriptStruct_FAlberta_Statics::NewStructOps, TEXT("Alberta"), &Z_Registration_Info_UScriptStruct_FAlberta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAlberta), 927734852U) },
		{ FBritishColumbia::StaticStruct, Z_Construct_UScriptStruct_FBritishColumbia_Statics::NewStructOps, TEXT("BritishColumbia"), &Z_Registration_Info_UScriptStruct_FBritishColumbia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBritishColumbia), 518929940U) },
		{ FManitoba::StaticStruct, Z_Construct_UScriptStruct_FManitoba_Statics::NewStructOps, TEXT("Manitoba"), &Z_Registration_Info_UScriptStruct_FManitoba, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManitoba), 3074766276U) },
		{ FNewBrunswick::StaticStruct, Z_Construct_UScriptStruct_FNewBrunswick_Statics::NewStructOps, TEXT("NewBrunswick"), &Z_Registration_Info_UScriptStruct_FNewBrunswick, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewBrunswick), 33880196U) },
		{ FNewfoundlandandLabrador::StaticStruct, Z_Construct_UScriptStruct_FNewfoundlandandLabrador_Statics::NewStructOps, TEXT("NewfoundlandandLabrador"), &Z_Registration_Info_UScriptStruct_FNewfoundlandandLabrador, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNewfoundlandandLabrador), 1109586536U) },
		{ FNovaScotia::StaticStruct, Z_Construct_UScriptStruct_FNovaScotia_Statics::NewStructOps, TEXT("NovaScotia"), &Z_Registration_Info_UScriptStruct_FNovaScotia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNovaScotia), 2143778144U) },
		{ FOntario::StaticStruct, Z_Construct_UScriptStruct_FOntario_Statics::NewStructOps, TEXT("Ontario"), &Z_Registration_Info_UScriptStruct_FOntario, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOntario), 3471686636U) },
		{ FPrinceEdwardIsland::StaticStruct, Z_Construct_UScriptStruct_FPrinceEdwardIsland_Statics::NewStructOps, TEXT("PrinceEdwardIsland"), &Z_Registration_Info_UScriptStruct_FPrinceEdwardIsland, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrinceEdwardIsland), 3359047088U) },
		{ FQuebec::StaticStruct, Z_Construct_UScriptStruct_FQuebec_Statics::NewStructOps, TEXT("Quebec"), &Z_Registration_Info_UScriptStruct_FQuebec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuebec), 3855944591U) },
		{ FSaskatchewan::StaticStruct, Z_Construct_UScriptStruct_FSaskatchewan_Statics::NewStructOps, TEXT("Saskatchewan"), &Z_Registration_Info_UScriptStruct_FSaskatchewan, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaskatchewan), 3823758791U) },
		{ FPathologicFragment::StaticStruct, Z_Construct_UScriptStruct_FPathologicFragment_Statics::NewStructOps, TEXT("PathologicFragment"), &Z_Registration_Info_UScriptStruct_FPathologicFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathologicFragment), 280379058U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSPathologicalBenchmarkProcessor, UMSPathologicalBenchmarkProcessor::StaticClass, TEXT("UMSPathologicalBenchmarkProcessor"), &Z_Registration_Info_UClass_UMSPathologicalBenchmarkProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSPathologicalBenchmarkProcessor), 3542908911U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSPathologicalBenchmarkProcessor_h__Script_MassCommunitySample_2646540231(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSPathologicalBenchmarkProcessor_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSPathologicalBenchmarkProcessor_h__Script_MassCommunitySample_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSPathologicalBenchmarkProcessor_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSPathologicalBenchmarkProcessor_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
