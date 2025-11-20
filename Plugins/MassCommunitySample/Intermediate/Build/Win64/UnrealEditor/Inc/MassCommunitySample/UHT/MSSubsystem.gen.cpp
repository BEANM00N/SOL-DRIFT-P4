// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MSSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSSubsystem() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMassSampleSettings();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMassSampleSettings_NoRegister();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSSubsystem();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSSubsystem_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassSubsystemBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSSubsystem Function SampleSpawnEntityExamples **************************
struct Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics
{
	struct MSSubsystem_eventSampleSpawnEntityExamples_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MSSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSSubsystem_eventSampleSpawnEntityExamples_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMSSubsystem, nullptr, "SampleSpawnEntityExamples", Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::MSSubsystem_eventSampleSpawnEntityExamples_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::MSSubsystem_eventSampleSpawnEntityExamples_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMSSubsystem::execSampleSpawnEntityExamples)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SampleSpawnEntityExamples();
	P_NATIVE_END;
}
// ********** End Class UMSSubsystem Function SampleSpawnEntityExamples ****************************

// ********** Begin Class UMSSubsystem *************************************************************
void UMSSubsystem::StaticRegisterNativesUMSSubsystem()
{
	UClass* Class = UMSSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SampleSpawnEntityExamples", &UMSSubsystem::execSampleSpawnEntityExamples },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSSubsystem;
UClass* UMSSubsystem::GetPrivateStaticClass()
{
	using TClass = UMSSubsystem;
	if (!Z_Registration_Info_UClass_UMSSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSSubsystem"),
			Z_Registration_Info_UClass_UMSSubsystem.InnerSingleton,
			StaticRegisterNativesUMSSubsystem,
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
	return Z_Registration_Info_UClass_UMSSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSSubsystem_NoRegister()
{
	return UMSSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple world subsystem that stores our octree and shows some simple mass examples\n *  This inherits from UMassSubsystemBase whichs helps making it easier to use in a Mass Queries\n */" },
#endif
		{ "IncludePath", "MSSubsystem.h" },
		{ "ModuleRelativePath", "MSSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple world subsystem that stores our octree and shows some simple mass examples\nThis inherits from UMassSubsystemBase whichs helps making it easier to use in a Mass Queries" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMSSubsystem_SampleSpawnEntityExamples, "SampleSpawnEntityExamples" }, // 2900785651
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassSubsystemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSSubsystem_Statics::ClassParams = {
	&UMSSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSSubsystem()
{
	if (!Z_Registration_Info_UClass_UMSSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSSubsystem.OuterSingleton, Z_Construct_UClass_UMSSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSSubsystem.OuterSingleton;
}
UMSSubsystem::UMSSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSSubsystem);
UMSSubsystem::~UMSSubsystem() {}
// ********** End Class UMSSubsystem ***************************************************************

// ********** Begin Class UMassSampleSettings ******************************************************
void UMassSampleSettings::StaticRegisterNativesUMassSampleSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMassSampleSettings;
UClass* UMassSampleSettings::GetPrivateStaticClass()
{
	using TClass = UMassSampleSettings;
	if (!Z_Registration_Info_UClass_UMassSampleSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MassSampleSettings"),
			Z_Registration_Info_UClass_UMassSampleSettings.InnerSingleton,
			StaticRegisterNativesUMassSampleSettings,
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
	return Z_Registration_Info_UClass_UMassSampleSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassSampleSettings_NoRegister()
{
	return UMassSampleSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassSampleSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MSSubsystem.h" },
		{ "ModuleRelativePath", "MSSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctreeBoundsSize_MetaData[] = {
		{ "Category", "Visible" },
		{ "ModuleRelativePath", "MSSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OctreeBoundsSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSampleSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassSampleSettings_Statics::NewProp_OctreeBoundsSize = { "OctreeBoundsSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassSampleSettings, OctreeBoundsSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctreeBoundsSize_MetaData), NewProp_OctreeBoundsSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSampleSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSampleSettings_Statics::NewProp_OctreeBoundsSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSampleSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMassSampleSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSampleSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSampleSettings_Statics::ClassParams = {
	&UMassSampleSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassSampleSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassSampleSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassSampleSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassSampleSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMassSampleSettings()
{
	if (!Z_Registration_Info_UClass_UMassSampleSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSampleSettings.OuterSingleton, Z_Construct_UClass_UMassSampleSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassSampleSettings.OuterSingleton;
}
UMassSampleSettings::UMassSampleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSampleSettings);
UMassSampleSettings::~UMassSampleSettings() {}
// ********** End Class UMassSampleSettings ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_MSSubsystem_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSSubsystem, UMSSubsystem::StaticClass, TEXT("UMSSubsystem"), &Z_Registration_Info_UClass_UMSSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSSubsystem), 128463667U) },
		{ Z_Construct_UClass_UMassSampleSettings, UMassSampleSettings::StaticClass, TEXT("UMassSampleSettings"), &Z_Registration_Info_UClass_UMassSampleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSampleSettings), 3340603067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_MSSubsystem_h__Script_MassCommunitySample_4080586174(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_MSSubsystem_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_joshm_Desktop_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_MSSubsystem_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
