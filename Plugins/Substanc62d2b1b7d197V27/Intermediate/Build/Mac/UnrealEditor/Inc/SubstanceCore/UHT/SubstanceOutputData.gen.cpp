// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceOutputData.h"
#include "MaterialTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubstanceOutputData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData();
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister();
UPackage* Z_Construct_UPackage__Script_SubstanceCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USubstanceOutputData *****************************************************
void USubstanceOutputData::StaticRegisterNativesUSubstanceOutputData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubstanceOutputData;
UClass* USubstanceOutputData::GetPrivateStaticClass()
{
	using TClass = USubstanceOutputData;
	if (!Z_Registration_Info_UClass_USubstanceOutputData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubstanceOutputData"),
			Z_Registration_Info_UClass_USubstanceOutputData.InnerSingleton,
			StaticRegisterNativesUSubstanceOutputData,
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
	return Z_Registration_Info_UClass_USubstanceOutputData.InnerSingleton;
}
UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister()
{
	return USubstanceOutputData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubstanceOutputData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Output structure for substance data to connect with material expressions*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceOutputData.h" },
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
		{ "ToolTip", "Output structure for substance data to connect with material expressions" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectedObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParamInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConnectedObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParamInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceOutputData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject = { "ConnectedObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceOutputData, ConnectedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectedObject_MetaData), NewProp_ConnectedObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo = { "ParamInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceOutputData, ParamInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParamInfo_MetaData), NewProp_ParamInfo_MetaData) }; // 1012731609
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance = { "ParentInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceOutputData, ParentInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentInstance_MetaData), NewProp_ParentInstance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid = { "CacheGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USubstanceOutputData, CacheGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheGuid_MetaData), NewProp_CacheGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USubstanceOutputData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceOutputData_Statics::ClassParams = {
	&USubstanceOutputData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceOutputData()
{
	if (!Z_Registration_Info_UClass_USubstanceOutputData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceOutputData.OuterSingleton, Z_Construct_UClass_USubstanceOutputData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceOutputData.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceOutputData);
USubstanceOutputData::~USubstanceOutputData() {}
// ********** End Class USubstanceOutputData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceOutputData_h__Script_SubstanceCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceOutputData, USubstanceOutputData::StaticClass, TEXT("USubstanceOutputData"), &Z_Registration_Info_UClass_USubstanceOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceOutputData), 3144212316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceOutputData_h__Script_SubstanceCore_287858459(TEXT("/Script/SubstanceCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceOutputData_h__Script_SubstanceCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceCore_Classes_SubstanceOutputData_h__Script_SubstanceCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
