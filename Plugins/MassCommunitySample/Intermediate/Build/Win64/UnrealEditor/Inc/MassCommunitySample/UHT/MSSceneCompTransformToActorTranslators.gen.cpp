// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/Benchmark/MSSceneCompTransformToActorTranslators.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSSceneCompTransformToActorTranslators() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSSceneCompTransformToMassTranslator();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSSceneCompTransformToMassTranslator_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath_NoRegister();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSMassTransformToSceneCompFastPathTag();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSSceneComponentTransformToMassTag();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMSMassTransformToSceneCompFastPathTag ****************************
static_assert(std::is_polymorphic<FMSMassTransformToSceneCompFastPathTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSMassTransformToSceneCompFastPathTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSMassTransformToSceneCompFastPathTag;
class UScriptStruct* FMSMassTransformToSceneCompFastPathTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassTransformToSceneCompFastPathTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSMassTransformToSceneCompFastPathTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSMassTransformToSceneCompFastPathTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSMassTransformToSceneCompFastPathTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSMassTransformToSceneCompFastPathTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSMassTransformToSceneCompFastPathTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSSceneCompTransformToActorTranslators.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSMassTransformToSceneCompFastPathTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSMassTransformToSceneCompFastPathTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSMassTransformToSceneCompFastPathTag",
	nullptr,
	0,
	sizeof(FMSMassTransformToSceneCompFastPathTag),
	alignof(FMSMassTransformToSceneCompFastPathTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSMassTransformToSceneCompFastPathTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSMassTransformToSceneCompFastPathTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSMassTransformToSceneCompFastPathTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSMassTransformToSceneCompFastPathTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSMassTransformToSceneCompFastPathTag.InnerSingleton, Z_Construct_UScriptStruct_FMSMassTransformToSceneCompFastPathTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSMassTransformToSceneCompFastPathTag.InnerSingleton;
}
// ********** End ScriptStruct FMSMassTransformToSceneCompFastPathTag ******************************

// ********** Begin Class UMSTransformToSceneCompTranslatorFastPath ********************************
void UMSTransformToSceneCompTranslatorFastPath::StaticRegisterNativesUMSTransformToSceneCompTranslatorFastPath()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSTransformToSceneCompTranslatorFastPath;
UClass* UMSTransformToSceneCompTranslatorFastPath::GetPrivateStaticClass()
{
	using TClass = UMSTransformToSceneCompTranslatorFastPath;
	if (!Z_Registration_Info_UClass_UMSTransformToSceneCompTranslatorFastPath.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSTransformToSceneCompTranslatorFastPath"),
			Z_Registration_Info_UClass_UMSTransformToSceneCompTranslatorFastPath.InnerSingleton,
			StaticRegisterNativesUMSTransformToSceneCompTranslatorFastPath,
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
	return Z_Registration_Info_UClass_UMSTransformToSceneCompTranslatorFastPath.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath_NoRegister()
{
	return UMSTransformToSceneCompTranslatorFastPath::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Experimental/Benchmark/MSSceneCompTransformToActorTranslators.h" },
		{ "ModuleRelativePath", "Experimental/Benchmark/MSSceneCompTransformToActorTranslators.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSTransformToSceneCompTranslatorFastPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath_Statics::ClassParams = {
	&UMSTransformToSceneCompTranslatorFastPath::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath()
{
	if (!Z_Registration_Info_UClass_UMSTransformToSceneCompTranslatorFastPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSTransformToSceneCompTranslatorFastPath.OuterSingleton, Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSTransformToSceneCompTranslatorFastPath.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSTransformToSceneCompTranslatorFastPath);
UMSTransformToSceneCompTranslatorFastPath::~UMSTransformToSceneCompTranslatorFastPath() {}
// ********** End Class UMSTransformToSceneCompTranslatorFastPath **********************************

// ********** Begin ScriptStruct FMSSceneComponentTransformToMassTag *******************************
static_assert(std::is_polymorphic<FMSSceneComponentTransformToMassTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMSSceneComponentTransformToMassTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMSSceneComponentTransformToMassTag;
class UScriptStruct* FMSSceneComponentTransformToMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMSSceneComponentTransformToMassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMSSceneComponentTransformToMassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMSSceneComponentTransformToMassTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("MSSceneComponentTransformToMassTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMSSceneComponentTransformToMassTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMSSceneComponentTransformToMassTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/Benchmark/MSSceneCompTransformToActorTranslators.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMSSceneComponentTransformToMassTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMSSceneComponentTransformToMassTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MSSceneComponentTransformToMassTag",
	nullptr,
	0,
	sizeof(FMSSceneComponentTransformToMassTag),
	alignof(FMSSceneComponentTransformToMassTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMSSceneComponentTransformToMassTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMSSceneComponentTransformToMassTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMSSceneComponentTransformToMassTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMSSceneComponentTransformToMassTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMSSceneComponentTransformToMassTag.InnerSingleton, Z_Construct_UScriptStruct_FMSSceneComponentTransformToMassTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMSSceneComponentTransformToMassTag.InnerSingleton;
}
// ********** End ScriptStruct FMSSceneComponentTransformToMassTag *********************************

// ********** Begin Class UMSSceneCompTransformToMassTranslator ************************************
void UMSSceneCompTransformToMassTranslator::StaticRegisterNativesUMSSceneCompTransformToMassTranslator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSSceneCompTransformToMassTranslator;
UClass* UMSSceneCompTransformToMassTranslator::GetPrivateStaticClass()
{
	using TClass = UMSSceneCompTransformToMassTranslator;
	if (!Z_Registration_Info_UClass_UMSSceneCompTransformToMassTranslator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSSceneCompTransformToMassTranslator"),
			Z_Registration_Info_UClass_UMSSceneCompTransformToMassTranslator.InnerSingleton,
			StaticRegisterNativesUMSSceneCompTransformToMassTranslator,
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
	return Z_Registration_Info_UClass_UMSSceneCompTransformToMassTranslator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSSceneCompTransformToMassTranslator_NoRegister()
{
	return UMSSceneCompTransformToMassTranslator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSSceneCompTransformToMassTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Experimental/Benchmark/MSSceneCompTransformToActorTranslators.h" },
		{ "ModuleRelativePath", "Experimental/Benchmark/MSSceneCompTransformToActorTranslators.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSSceneCompTransformToMassTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSSceneCompTransformToMassTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSSceneCompTransformToMassTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSSceneCompTransformToMassTranslator_Statics::ClassParams = {
	&UMSSceneCompTransformToMassTranslator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSSceneCompTransformToMassTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSSceneCompTransformToMassTranslator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSSceneCompTransformToMassTranslator()
{
	if (!Z_Registration_Info_UClass_UMSSceneCompTransformToMassTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSSceneCompTransformToMassTranslator.OuterSingleton, Z_Construct_UClass_UMSSceneCompTransformToMassTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSSceneCompTransformToMassTranslator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSSceneCompTransformToMassTranslator);
UMSSceneCompTransformToMassTranslator::~UMSSceneCompTransformToMassTranslator() {}
// ********** End Class UMSSceneCompTransformToMassTranslator **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTranslators_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMSMassTransformToSceneCompFastPathTag::StaticStruct, Z_Construct_UScriptStruct_FMSMassTransformToSceneCompFastPathTag_Statics::NewStructOps, TEXT("MSMassTransformToSceneCompFastPathTag"), &Z_Registration_Info_UScriptStruct_FMSMassTransformToSceneCompFastPathTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSMassTransformToSceneCompFastPathTag), 1589484152U) },
		{ FMSSceneComponentTransformToMassTag::StaticStruct, Z_Construct_UScriptStruct_FMSSceneComponentTransformToMassTag_Statics::NewStructOps, TEXT("MSSceneComponentTransformToMassTag"), &Z_Registration_Info_UScriptStruct_FMSSceneComponentTransformToMassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMSSceneComponentTransformToMassTag), 2255925680U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSTransformToSceneCompTranslatorFastPath, UMSTransformToSceneCompTranslatorFastPath::StaticClass, TEXT("UMSTransformToSceneCompTranslatorFastPath"), &Z_Registration_Info_UClass_UMSTransformToSceneCompTranslatorFastPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSTransformToSceneCompTranslatorFastPath), 4057961710U) },
		{ Z_Construct_UClass_UMSSceneCompTransformToMassTranslator, UMSSceneCompTransformToMassTranslator::StaticClass, TEXT("UMSSceneCompTransformToMassTranslator"), &Z_Registration_Info_UClass_UMSSceneCompTransformToMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSSceneCompTransformToMassTranslator), 474641241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTranslators_h__Script_MassCommunitySample_1265260189(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTranslators_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTranslators_h__Script_MassCommunitySample_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTranslators_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_Benchmark_MSSceneCompTransformToActorTranslators_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
