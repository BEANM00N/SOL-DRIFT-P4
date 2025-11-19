// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Misc/MSDocumentationActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSDocumentationActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_AMSDocumentationActor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_AMSDocumentationActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMSDocumentationActor Function NavigateToFunctionSource ******************
struct Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics
{
	struct MSDocumentationActor_eventNavigateToFunctionSource_Parms
	{
		FString SymbolName;
		FString ModuleName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CPP_Default_ModuleName", "MassSample" },
		{ "ModuleRelativePath", "Common/Misc/MSDocumentationActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SymbolName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SymbolName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModuleName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::NewProp_SymbolName = { "SymbolName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDocumentationActor_eventNavigateToFunctionSource_Parms, SymbolName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SymbolName_MetaData), NewProp_SymbolName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MSDocumentationActor_eventNavigateToFunctionSource_Parms, ModuleName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleName_MetaData), NewProp_ModuleName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::NewProp_SymbolName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::NewProp_ModuleName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMSDocumentationActor, nullptr, "NavigateToFunctionSource", Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::MSDocumentationActor_eventNavigateToFunctionSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::MSDocumentationActor_eventNavigateToFunctionSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMSDocumentationActor::execNavigateToFunctionSource)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SymbolName);
	P_GET_PROPERTY(FStrProperty,Z_Param_ModuleName);
	P_FINISH;
	P_NATIVE_BEGIN;
	AMSDocumentationActor::NavigateToFunctionSource(Z_Param_SymbolName,Z_Param_ModuleName);
	P_NATIVE_END;
}
// ********** End Class AMSDocumentationActor Function NavigateToFunctionSource ********************

// ********** Begin Class AMSDocumentationActor ****************************************************
void AMSDocumentationActor::StaticRegisterNativesAMSDocumentationActor()
{
	UClass* Class = AMSDocumentationActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NavigateToFunctionSource", &AMSDocumentationActor::execNavigateToFunctionSource },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMSDocumentationActor;
UClass* AMSDocumentationActor::GetPrivateStaticClass()
{
	using TClass = AMSDocumentationActor;
	if (!Z_Registration_Info_UClass_AMSDocumentationActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSDocumentationActor"),
			Z_Registration_Info_UClass_AMSDocumentationActor.InnerSingleton,
			StaticRegisterNativesAMSDocumentationActor,
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
	return Z_Registration_Info_UClass_AMSDocumentationActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMSDocumentationActor_NoRegister()
{
	return AMSDocumentationActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMSDocumentationActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Common/Misc/MSDocumentationActor.h" },
		{ "ModuleRelativePath", "Common/Misc/MSDocumentationActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMSDocumentationActor_NavigateToFunctionSource, "NavigateToFunctionSource" }, // 4196599800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMSDocumentationActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMSDocumentationActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDocumentationActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMSDocumentationActor_Statics::ClassParams = {
	&AMSDocumentationActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMSDocumentationActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMSDocumentationActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMSDocumentationActor()
{
	if (!Z_Registration_Info_UClass_AMSDocumentationActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMSDocumentationActor.OuterSingleton, Z_Construct_UClass_AMSDocumentationActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMSDocumentationActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMSDocumentationActor);
AMSDocumentationActor::~AMSDocumentationActor() {}
// ********** End Class AMSDocumentationActor ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSDocumentationActor_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMSDocumentationActor, AMSDocumentationActor::StaticClass, TEXT("AMSDocumentationActor"), &Z_Registration_Info_UClass_AMSDocumentationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMSDocumentationActor), 3351891386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSDocumentationActor_h__Script_MassCommunitySample_486687402(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSDocumentationActor_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_MSDocumentationActor_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
