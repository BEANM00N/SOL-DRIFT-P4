// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Benchmark/MSEntityViewBenchMark.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSEntityViewBenchMark() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSEntityViewBenchMark();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSEntityViewBenchMark_NoRegister();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkFragment();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkTag1();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkTag2();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkTag3();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkTag4();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FEntityViewBenchmarkFragment **************************************
static_assert(std::is_polymorphic<FEntityViewBenchmarkFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FEntityViewBenchmarkFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkFragment;
class UScriptStruct* FEntityViewBenchmarkFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityViewBenchmarkFragment, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("EntityViewBenchmarkFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkFragment.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEntityViewBenchmarkFragment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSEntityViewBenchMark.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityViewBenchmarkFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityViewBenchmarkFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"EntityViewBenchmarkFragment",
	nullptr,
	0,
	sizeof(FEntityViewBenchmarkFragment),
	alignof(FEntityViewBenchmarkFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityViewBenchmarkFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntityViewBenchmarkFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkFragment.InnerSingleton, Z_Construct_UScriptStruct_FEntityViewBenchmarkFragment_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkFragment.InnerSingleton;
}
// ********** End ScriptStruct FEntityViewBenchmarkFragment ****************************************

// ********** Begin ScriptStruct FEntityViewBenchmarkTag1 ******************************************
static_assert(std::is_polymorphic<FEntityViewBenchmarkTag1>() == std::is_polymorphic<FMassTag>(), "USTRUCT FEntityViewBenchmarkTag1 cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag1;
class UScriptStruct* FEntityViewBenchmarkTag1::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag1.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag1.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityViewBenchmarkTag1, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("EntityViewBenchmarkTag1"));
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag1.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEntityViewBenchmarkTag1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSEntityViewBenchMark.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityViewBenchmarkTag1>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityViewBenchmarkTag1_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"EntityViewBenchmarkTag1",
	nullptr,
	0,
	sizeof(FEntityViewBenchmarkTag1),
	alignof(FEntityViewBenchmarkTag1),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityViewBenchmarkTag1_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntityViewBenchmarkTag1_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkTag1()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag1.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag1.InnerSingleton, Z_Construct_UScriptStruct_FEntityViewBenchmarkTag1_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag1.InnerSingleton;
}
// ********** End ScriptStruct FEntityViewBenchmarkTag1 ********************************************

// ********** Begin ScriptStruct FEntityViewBenchmarkTag2 ******************************************
static_assert(std::is_polymorphic<FEntityViewBenchmarkTag2>() == std::is_polymorphic<FMassTag>(), "USTRUCT FEntityViewBenchmarkTag2 cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag2;
class UScriptStruct* FEntityViewBenchmarkTag2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityViewBenchmarkTag2, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("EntityViewBenchmarkTag2"));
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag2.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEntityViewBenchmarkTag2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSEntityViewBenchMark.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityViewBenchmarkTag2>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityViewBenchmarkTag2_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"EntityViewBenchmarkTag2",
	nullptr,
	0,
	sizeof(FEntityViewBenchmarkTag2),
	alignof(FEntityViewBenchmarkTag2),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityViewBenchmarkTag2_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntityViewBenchmarkTag2_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkTag2()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag2.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag2.InnerSingleton, Z_Construct_UScriptStruct_FEntityViewBenchmarkTag2_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag2.InnerSingleton;
}
// ********** End ScriptStruct FEntityViewBenchmarkTag2 ********************************************

// ********** Begin ScriptStruct FEntityViewBenchmarkTag3 ******************************************
static_assert(std::is_polymorphic<FEntityViewBenchmarkTag3>() == std::is_polymorphic<FMassTag>(), "USTRUCT FEntityViewBenchmarkTag3 cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag3;
class UScriptStruct* FEntityViewBenchmarkTag3::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag3.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag3.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityViewBenchmarkTag3, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("EntityViewBenchmarkTag3"));
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag3.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEntityViewBenchmarkTag3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSEntityViewBenchMark.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityViewBenchmarkTag3>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityViewBenchmarkTag3_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"EntityViewBenchmarkTag3",
	nullptr,
	0,
	sizeof(FEntityViewBenchmarkTag3),
	alignof(FEntityViewBenchmarkTag3),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityViewBenchmarkTag3_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntityViewBenchmarkTag3_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkTag3()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag3.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag3.InnerSingleton, Z_Construct_UScriptStruct_FEntityViewBenchmarkTag3_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag3.InnerSingleton;
}
// ********** End ScriptStruct FEntityViewBenchmarkTag3 ********************************************

// ********** Begin ScriptStruct FEntityViewBenchmarkTag4 ******************************************
static_assert(std::is_polymorphic<FEntityViewBenchmarkTag4>() == std::is_polymorphic<FMassTag>(), "USTRUCT FEntityViewBenchmarkTag4 cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag4;
class UScriptStruct* FEntityViewBenchmarkTag4::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag4.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag4.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityViewBenchmarkTag4, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("EntityViewBenchmarkTag4"));
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag4.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FEntityViewBenchmarkTag4_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSEntityViewBenchMark.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityViewBenchmarkTag4>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityViewBenchmarkTag4_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"EntityViewBenchmarkTag4",
	nullptr,
	0,
	sizeof(FEntityViewBenchmarkTag4),
	alignof(FEntityViewBenchmarkTag4),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityViewBenchmarkTag4_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEntityViewBenchmarkTag4_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEntityViewBenchmarkTag4()
{
	if (!Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag4.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag4.InnerSingleton, Z_Construct_UScriptStruct_FEntityViewBenchmarkTag4_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag4.InnerSingleton;
}
// ********** End ScriptStruct FEntityViewBenchmarkTag4 ********************************************

// ********** Begin Class UMSEntityViewBenchMark ***************************************************
void UMSEntityViewBenchMark::StaticRegisterNativesUMSEntityViewBenchMark()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSEntityViewBenchMark;
UClass* UMSEntityViewBenchMark::GetPrivateStaticClass()
{
	using TClass = UMSEntityViewBenchMark;
	if (!Z_Registration_Info_UClass_UMSEntityViewBenchMark.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSEntityViewBenchMark"),
			Z_Registration_Info_UClass_UMSEntityViewBenchMark.InnerSingleton,
			StaticRegisterNativesUMSEntityViewBenchMark,
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
	return Z_Registration_Info_UClass_UMSEntityViewBenchMark.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSEntityViewBenchMark_NoRegister()
{
	return UMSEntityViewBenchMark::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSEntityViewBenchMark_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This benchmark is designed to test the overhead of checking archetype composition data from different codepaths\n *  The goal is to make a new \n */" },
#endif
		{ "IncludePath", "Experimental/Benchmark/MSEntityViewBenchMark.h" },
		{ "ModuleRelativePath", "Experimental/Benchmark/MSEntityViewBenchMark.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This benchmark is designed to test the overhead of checking archetype composition data from different codepaths\nThe goal is to make a new" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSEntityViewBenchMark>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSEntityViewBenchMark_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSEntityViewBenchMark_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSEntityViewBenchMark_Statics::ClassParams = {
	&UMSEntityViewBenchMark::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSEntityViewBenchMark_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSEntityViewBenchMark_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSEntityViewBenchMark()
{
	if (!Z_Registration_Info_UClass_UMSEntityViewBenchMark.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSEntityViewBenchMark.OuterSingleton, Z_Construct_UClass_UMSEntityViewBenchMark_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSEntityViewBenchMark.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSEntityViewBenchMark);
UMSEntityViewBenchMark::~UMSEntityViewBenchMark() {}
// ********** End Class UMSEntityViewBenchMark *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSEntityViewBenchMark_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FEntityViewBenchmarkFragment::StaticStruct, Z_Construct_UScriptStruct_FEntityViewBenchmarkFragment_Statics::NewStructOps, TEXT("EntityViewBenchmarkFragment"), &Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityViewBenchmarkFragment), 3208159194U) },
		{ FEntityViewBenchmarkTag1::StaticStruct, Z_Construct_UScriptStruct_FEntityViewBenchmarkTag1_Statics::NewStructOps, TEXT("EntityViewBenchmarkTag1"), &Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag1, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityViewBenchmarkTag1), 2192281005U) },
		{ FEntityViewBenchmarkTag2::StaticStruct, Z_Construct_UScriptStruct_FEntityViewBenchmarkTag2_Statics::NewStructOps, TEXT("EntityViewBenchmarkTag2"), &Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityViewBenchmarkTag2), 3983867461U) },
		{ FEntityViewBenchmarkTag3::StaticStruct, Z_Construct_UScriptStruct_FEntityViewBenchmarkTag3_Statics::NewStructOps, TEXT("EntityViewBenchmarkTag3"), &Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag3, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityViewBenchmarkTag3), 922930823U) },
		{ FEntityViewBenchmarkTag4::StaticStruct, Z_Construct_UScriptStruct_FEntityViewBenchmarkTag4_Statics::NewStructOps, TEXT("EntityViewBenchmarkTag4"), &Z_Registration_Info_UScriptStruct_FEntityViewBenchmarkTag4, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityViewBenchmarkTag4), 4190479363U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSEntityViewBenchMark, UMSEntityViewBenchMark::StaticClass, TEXT("UMSEntityViewBenchMark"), &Z_Registration_Info_UClass_UMSEntityViewBenchMark, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSEntityViewBenchMark), 202821223U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSEntityViewBenchMark_h__Script_MassCommunitySample_97934633(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSEntityViewBenchMark_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSEntityViewBenchMark_h__Script_MassCommunitySample_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSEntityViewBenchMark_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSEntityViewBenchMark_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
