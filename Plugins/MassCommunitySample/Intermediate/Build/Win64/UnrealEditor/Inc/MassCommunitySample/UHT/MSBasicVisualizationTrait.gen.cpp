// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Traits/MSBasicVisualizationTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSBasicVisualizationTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSBasicVisualizationTrait();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSBasicVisualizationTrait_NoRegister();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FBasicVisualizationTag();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBasicVisualizationTag ********************************************
static_assert(std::is_polymorphic<FBasicVisualizationTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FBasicVisualizationTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBasicVisualizationTag;
class UScriptStruct* FBasicVisualizationTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBasicVisualizationTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBasicVisualizationTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasicVisualizationTag, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("BasicVisualizationTag"));
	}
	return Z_Registration_Info_UScriptStruct_FBasicVisualizationTag.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBasicVisualizationTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Common/Traits/MSBasicVisualizationTrait.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasicVisualizationTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasicVisualizationTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"BasicVisualizationTag",
	nullptr,
	0,
	sizeof(FBasicVisualizationTag),
	alignof(FBasicVisualizationTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicVisualizationTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBasicVisualizationTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBasicVisualizationTag()
{
	if (!Z_Registration_Info_UScriptStruct_FBasicVisualizationTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBasicVisualizationTag.InnerSingleton, Z_Construct_UScriptStruct_FBasicVisualizationTag_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBasicVisualizationTag.InnerSingleton;
}
// ********** End ScriptStruct FBasicVisualizationTag **********************************************

// ********** Begin Class UMSBasicVisualizationTrait ***********************************************
void UMSBasicVisualizationTrait::StaticRegisterNativesUMSBasicVisualizationTrait()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSBasicVisualizationTrait;
UClass* UMSBasicVisualizationTrait::GetPrivateStaticClass()
{
	using TClass = UMSBasicVisualizationTrait;
	if (!Z_Registration_Info_UClass_UMSBasicVisualizationTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSBasicVisualizationTrait"),
			Z_Registration_Info_UClass_UMSBasicVisualizationTrait.InnerSingleton,
			StaticRegisterNativesUMSBasicVisualizationTrait,
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
	return Z_Registration_Info_UClass_UMSBasicVisualizationTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSBasicVisualizationTrait_NoRegister()
{
	return UMSBasicVisualizationTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSBasicVisualizationTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Sample Visualization" },
		{ "IncludePath", "Common/Traits/MSBasicVisualizationTrait.h" },
		{ "ModuleRelativePath", "Common/Traits/MSBasicVisualizationTrait.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSBasicVisualizationTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSBasicVisualizationTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSBasicVisualizationTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSBasicVisualizationTrait_Statics::ClassParams = {
	&UMSBasicVisualizationTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSBasicVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSBasicVisualizationTrait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSBasicVisualizationTrait()
{
	if (!Z_Registration_Info_UClass_UMSBasicVisualizationTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSBasicVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMSBasicVisualizationTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSBasicVisualizationTrait.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSBasicVisualizationTrait);
UMSBasicVisualizationTrait::~UMSBasicVisualizationTrait() {}
// ********** End Class UMSBasicVisualizationTrait *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSBasicVisualizationTrait_h__Script_MassCommunitySample_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBasicVisualizationTag::StaticStruct, Z_Construct_UScriptStruct_FBasicVisualizationTag_Statics::NewStructOps, TEXT("BasicVisualizationTag"), &Z_Registration_Info_UScriptStruct_FBasicVisualizationTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBasicVisualizationTag), 2201565066U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSBasicVisualizationTrait, UMSBasicVisualizationTrait::StaticClass, TEXT("UMSBasicVisualizationTrait"), &Z_Registration_Info_UClass_UMSBasicVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSBasicVisualizationTrait), 471508525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSBasicVisualizationTrait_h__Script_MassCommunitySample_1172952780(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSBasicVisualizationTrait_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSBasicVisualizationTrait_h__Script_MassCommunitySample_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSBasicVisualizationTrait_h__Script_MassCommunitySample_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Documents_GitHub_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSBasicVisualizationTrait_h__Script_MassCommunitySample_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
