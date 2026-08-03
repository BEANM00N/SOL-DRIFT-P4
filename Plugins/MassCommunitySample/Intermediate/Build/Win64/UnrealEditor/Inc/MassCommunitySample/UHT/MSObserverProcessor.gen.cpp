// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/BlueprintIntegration/MSObserverProcessor.h"
#include "Common/Misc/MSBPFunctionLibrary.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSObserverProcessor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSObserverProcessorBP();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSObserverProcessorBP_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSObserverSettings();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSObserverSettings_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSObserverSubsystem();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSObserverSubsystem_NoRegister();
MASSCOMMUNITYSAMPLE_API UEnum* Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP();
MASSCOMMUNITYSAMPLE_API UScriptStruct* Z_Construct_UScriptStruct_FMSEntityViewBPWrapper();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMassObservedOperationBP **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassObservedOperationBP;
static UEnum* EMassObservedOperationBP_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassObservedOperationBP.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassObservedOperationBP.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP, (UObject*)Z_Construct_UPackage__Script_MassCommunitySample(), TEXT("EMassObservedOperationBP"));
	}
	return Z_Registration_Info_UEnum_EMassObservedOperationBP.OuterSingleton;
}
template<> MASSCOMMUNITYSAMPLE_API UEnum* StaticEnum<EMassObservedOperationBP>()
{
	return EMassObservedOperationBP_StaticEnum();
}
struct Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Name", "EMassObservedOperationBP::Add" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
		{ "Remove.Name", "EMassObservedOperationBP::Remove" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassObservedOperationBP::Add", (int64)EMassObservedOperationBP::Add },
		{ "EMassObservedOperationBP::Remove", (int64)EMassObservedOperationBP::Remove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassCommunitySample,
	nullptr,
	"EMassObservedOperationBP",
	"EMassObservedOperationBP",
	Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP()
{
	if (!Z_Registration_Info_UEnum_EMassObservedOperationBP.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassObservedOperationBP.InnerSingleton, Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassObservedOperationBP.InnerSingleton;
}
// ********** End Enum EMassObservedOperationBP ****************************************************

// ********** Begin Class UMSObserverProcessorBP Function BPExecute ********************************
struct MSObserverProcessorBP_eventBPExecute_Parms
{
	FMSEntityViewBPWrapper EntityHandle;
	const UObject* WorldContextObject;
};
static FName NAME_UMSObserverProcessorBP_BPExecute = FName(TEXT("BPExecute"));
void UMSObserverProcessorBP::BPExecute(FMSEntityViewBPWrapper EntityHandle, const UObject* WorldContextObject)
{
	MSObserverProcessorBP_eventBPExecute_Parms Parms;
	Parms.EntityHandle=EntityHandle;
	Parms.WorldContextObject=WorldContextObject;
	UFunction* Func = FindFunctionChecked(NAME_UMSObserverProcessorBP_BPExecute);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityHandle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::NewProp_EntityHandle = { "EntityHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSObserverProcessorBP_eventBPExecute_Parms, EntityHandle), Z_Construct_UScriptStruct_FMSEntityViewBPWrapper, METADATA_PARAMS(0, nullptr) }; // 2635041887
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSObserverProcessorBP_eventBPExecute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::NewProp_EntityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSObserverProcessorBP, nullptr, "BPExecute", Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::PropPointers), sizeof(MSObserverProcessorBP_eventBPExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MSObserverProcessorBP_eventBPExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UMSObserverProcessorBP Function BPExecute **********************************

// ********** Begin Class UMSObserverProcessorBP ***************************************************
void UMSObserverProcessorBP::StaticRegisterNativesUMSObserverProcessorBP()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSObserverProcessorBP;
UClass* UMSObserverProcessorBP::GetPrivateStaticClass()
{
	using TClass = UMSObserverProcessorBP;
	if (!Z_Registration_Info_UClass_UMSObserverProcessorBP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSObserverProcessorBP"),
			Z_Registration_Info_UClass_UMSObserverProcessorBP.InnerSingleton,
			StaticRegisterNativesUMSObserverProcessorBP,
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
	return Z_Registration_Info_UClass_UMSObserverProcessorBP.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSObserverProcessorBP_NoRegister()
{
	return UMSObserverProcessorBP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSObserverProcessorBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
		{ "ShowWorldContextPin", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentRequirements_MetaData[] = {
		{ "BaseStruct", "/Script/MassEntity.MassFragment" },
		{ "Category", "Query" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
		{ "NoElementDuplicate", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRequirements_MetaData[] = {
		{ "BaseStruct", "/Script/MassEntity.MassTag" },
		{ "Category", "Query" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
		{ "NoElementDuplicate", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedFragment_MetaData[] = {
		{ "BaseStruct", "/Script/MassEntity.MassFragment" },
		{ "Category", "Query" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObservedOperation_MetaData[] = {
		{ "Category", "Query" },
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FragmentRequirements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FragmentRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagRequirements_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TagRequirements;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObservedFragment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObservedOperation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ObservedOperation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSObserverProcessorBP_BPExecute, "BPExecute" }, // 1051498296
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSObserverProcessorBP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_FragmentRequirements_Inner = { "FragmentRequirements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_FragmentRequirements = { "FragmentRequirements", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSObserverProcessorBP, FragmentRequirements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentRequirements_MetaData), NewProp_FragmentRequirements_MetaData) }; // 1627169465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_TagRequirements_Inner = { "TagRequirements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 1627169465
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_TagRequirements = { "TagRequirements", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSObserverProcessorBP, TagRequirements), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRequirements_MetaData), NewProp_TagRequirements_MetaData) }; // 1627169465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_ObservedFragment = { "ObservedFragment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSObserverProcessorBP, ObservedFragment), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedFragment_MetaData), NewProp_ObservedFragment_MetaData) }; // 1627169465
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_ObservedOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_ObservedOperation = { "ObservedOperation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSObserverProcessorBP, ObservedOperation), Z_Construct_UEnum_MassCommunitySample_EMassObservedOperationBP, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObservedOperation_MetaData), NewProp_ObservedOperation_MetaData) }; // 2012552247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSObserverProcessorBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_FragmentRequirements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_FragmentRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_TagRequirements_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_TagRequirements,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_ObservedFragment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_ObservedOperation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSObserverProcessorBP_Statics::NewProp_ObservedOperation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverProcessorBP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSObserverProcessorBP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverProcessorBP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSObserverProcessorBP_Statics::ClassParams = {
	&UMSObserverProcessorBP::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMSObserverProcessorBP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverProcessorBP_Statics::PropPointers),
	0,
	0x401030A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverProcessorBP_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSObserverProcessorBP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSObserverProcessorBP()
{
	if (!Z_Registration_Info_UClass_UMSObserverProcessorBP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSObserverProcessorBP.OuterSingleton, Z_Construct_UClass_UMSObserverProcessorBP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSObserverProcessorBP.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSObserverProcessorBP);
UMSObserverProcessorBP::~UMSObserverProcessorBP() {}
// ********** End Class UMSObserverProcessorBP *****************************************************

// ********** Begin Class UMSObserverSettings ******************************************************
void UMSObserverSettings::StaticRegisterNativesUMSObserverSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSObserverSettings;
UClass* UMSObserverSettings::GetPrivateStaticClass()
{
	using TClass = UMSObserverSettings;
	if (!Z_Registration_Info_UClass_UMSObserverSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSObserverSettings"),
			Z_Registration_Info_UClass_UMSObserverSettings.InnerSingleton,
			StaticRegisterNativesUMSObserverSettings,
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
	return Z_Registration_Info_UClass_UMSObserverSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSObserverSettings_NoRegister()
{
	return UMSObserverSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSObserverSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Blueprint Observers" },
		{ "IncludePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObserversToRegister_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Visible" },
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ObserversToRegister_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObserversToRegister;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSObserverSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMSObserverSettings_Statics::NewProp_ObserversToRegister_Inner = { "ObserversToRegister", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMSObserverProcessorBP_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMSObserverSettings_Statics::NewProp_ObserversToRegister = { "ObserversToRegister", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMSObserverSettings, ObserversToRegister), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObserversToRegister_MetaData), NewProp_ObserversToRegister_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMSObserverSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSObserverSettings_Statics::NewProp_ObserversToRegister_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMSObserverSettings_Statics::NewProp_ObserversToRegister,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMSObserverSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSObserverSettings_Statics::ClassParams = {
	&UMSObserverSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMSObserverSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSObserverSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSObserverSettings()
{
	if (!Z_Registration_Info_UClass_UMSObserverSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSObserverSettings.OuterSingleton, Z_Construct_UClass_UMSObserverSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSObserverSettings.OuterSingleton;
}
UMSObserverSettings::UMSObserverSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSObserverSettings);
UMSObserverSettings::~UMSObserverSettings() {}
// ********** End Class UMSObserverSettings ********************************************************

// ********** Begin Class UMSObserverSubsystem *****************************************************
void UMSObserverSubsystem::StaticRegisterNativesUMSObserverSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSObserverSubsystem;
UClass* UMSObserverSubsystem::GetPrivateStaticClass()
{
	using TClass = UMSObserverSubsystem;
	if (!Z_Registration_Info_UClass_UMSObserverSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSObserverSubsystem"),
			Z_Registration_Info_UClass_UMSObserverSubsystem.InnerSingleton,
			StaticRegisterNativesUMSObserverSubsystem,
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
	return Z_Registration_Info_UClass_UMSObserverSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSObserverSubsystem_NoRegister()
{
	return UMSObserverSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSObserverSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
		{ "ModuleRelativePath", "Experimental/BlueprintIntegration/MSObserverProcessor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSObserverSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSObserverSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSObserverSubsystem_Statics::ClassParams = {
	&UMSObserverSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSObserverSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSObserverSubsystem()
{
	if (!Z_Registration_Info_UClass_UMSObserverSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSObserverSubsystem.OuterSingleton, Z_Construct_UClass_UMSObserverSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSObserverSubsystem.OuterSingleton;
}
UMSObserverSubsystem::UMSObserverSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSObserverSubsystem);
UMSObserverSubsystem::~UMSObserverSubsystem() {}
// ********** End Class UMSObserverSubsystem *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_BlueprintIntegration_MSObserverProcessor_h__Script_MassCommunitySample_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMassObservedOperationBP_StaticEnum, TEXT("EMassObservedOperationBP"), &Z_Registration_Info_UEnum_EMassObservedOperationBP, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2012552247U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSObserverProcessorBP, UMSObserverProcessorBP::StaticClass, TEXT("UMSObserverProcessorBP"), &Z_Registration_Info_UClass_UMSObserverProcessorBP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSObserverProcessorBP), 597717217U) },
		{ Z_Construct_UClass_UMSObserverSettings, UMSObserverSettings::StaticClass, TEXT("UMSObserverSettings"), &Z_Registration_Info_UClass_UMSObserverSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSObserverSettings), 678795201U) },
		{ Z_Construct_UClass_UMSObserverSubsystem, UMSObserverSubsystem::StaticClass, TEXT("UMSObserverSubsystem"), &Z_Registration_Info_UClass_UMSObserverSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSObserverSubsystem), 1243579979U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_BlueprintIntegration_MSObserverProcessor_h__Script_MassCommunitySample_3537570384(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_BlueprintIntegration_MSObserverProcessor_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_BlueprintIntegration_MSObserverProcessor_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_BlueprintIntegration_MSObserverProcessor_h__Script_MassCommunitySample_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_BlueprintIntegration_MSObserverProcessor_h__Script_MassCommunitySample_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
