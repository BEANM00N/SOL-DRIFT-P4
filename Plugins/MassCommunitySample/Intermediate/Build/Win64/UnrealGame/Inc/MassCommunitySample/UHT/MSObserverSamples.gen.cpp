// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Processors/MSObserverSamples.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSObserverSamples() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSObserverOnAdd();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSObserverOnAdd_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSObserverOnAdd *********************************************************
void UMSObserverOnAdd::StaticRegisterNativesUMSObserverOnAdd()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSObserverOnAdd;
UClass* UMSObserverOnAdd::GetPrivateStaticClass()
{
	using TClass = UMSObserverOnAdd;
	if (!Z_Registration_Info_UClass_UMSObserverOnAdd.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSObserverOnAdd"),
			Z_Registration_Info_UClass_UMSObserverOnAdd.InnerSingleton,
			StaticRegisterNativesUMSObserverOnAdd,
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
	return Z_Registration_Info_UClass_UMSObserverOnAdd.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSObserverOnAdd_NoRegister()
{
	return UMSObserverOnAdd::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSObserverOnAdd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Common/Processors/MSObserverSamples.h" },
		{ "ModuleRelativePath", "Common/Processors/MSObserverSamples.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSObserverOnAdd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSObserverOnAdd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverOnAdd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSObserverOnAdd_Statics::ClassParams = {
	&UMSObserverOnAdd::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSObserverOnAdd_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSObserverOnAdd_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSObserverOnAdd()
{
	if (!Z_Registration_Info_UClass_UMSObserverOnAdd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSObserverOnAdd.OuterSingleton, Z_Construct_UClass_UMSObserverOnAdd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSObserverOnAdd.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSObserverOnAdd);
UMSObserverOnAdd::~UMSObserverOnAdd() {}
// ********** End Class UMSObserverOnAdd ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSObserverSamples_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSObserverOnAdd, UMSObserverOnAdd::StaticClass, TEXT("UMSObserverOnAdd"), &Z_Registration_Info_UClass_UMSObserverOnAdd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSObserverOnAdd), 261020950U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSObserverSamples_h__Script_MassCommunitySample_2437070173(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSObserverSamples_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Processors_MSObserverSamples_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
