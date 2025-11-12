// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Traits/MSAssortedTags.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSAssortedTags() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UDEPRECATED_UMSAssortedTags();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDEPRECATED_UMSAssortedTags **********************************************
void UDEPRECATED_UMSAssortedTags::StaticRegisterNativesUDEPRECATED_UMSAssortedTags()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDEPRECATED_UMSAssortedTags;
UClass* UDEPRECATED_UMSAssortedTags::GetPrivateStaticClass()
{
	using TClass = UDEPRECATED_UMSAssortedTags;
	if (!Z_Registration_Info_UClass_UDEPRECATED_UMSAssortedTags.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UMSAssortedTags"),
			Z_Registration_Info_UClass_UDEPRECATED_UMSAssortedTags.InnerSingleton,
			StaticRegisterNativesUDEPRECATED_UMSAssortedTags,
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
	return Z_Registration_Info_UClass_UDEPRECATED_UMSAssortedTags.InnerSingleton;
}
UClass* Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_NoRegister()
{
	return UDEPRECATED_UMSAssortedTags::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Not working due to due to BuildContext.AddTag checking for fragments and not tags\n */" },
#endif
		{ "DisplayName", "Assorted Tags" },
		{ "IncludePath", "Common/Traits/MSAssortedTags.h" },
		{ "ModuleRelativePath", "Common/Traits/MSAssortedTags.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Not working due to due to BuildContext.AddTag checking for fragments and not tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "BaseStruct", "/Script/MassEntity.MassTag" },
		{ "Category", "UMSAssortedTags" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Common/Traits/MSAssortedTags.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UMSAssortedTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_UMSAssortedTags, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 1627169465
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::ClassParams = {
	&UDEPRECATED_UMSAssortedTags::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::PropPointers),
	0,
	0x021032A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_UMSAssortedTags()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_UMSAssortedTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UMSAssortedTags.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UMSAssortedTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_UMSAssortedTags.OuterSingleton;
}
UDEPRECATED_UMSAssortedTags::UDEPRECATED_UMSAssortedTags(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UMSAssortedTags);
UDEPRECATED_UMSAssortedTags::~UDEPRECATED_UMSAssortedTags() {}
// ********** End Class UDEPRECATED_UMSAssortedTags ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSAssortedTags_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UMSAssortedTags, UDEPRECATED_UMSAssortedTags::StaticClass, TEXT("UDEPRECATED_UMSAssortedTags"), &Z_Registration_Info_UClass_UDEPRECATED_UMSAssortedTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UMSAssortedTags), 3975552819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSAssortedTags_h__Script_MassCommunitySample_1926658161(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSAssortedTags_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Traits_MSAssortedTags_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
