// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectileSim/MSProjectileBPLib.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMSProjectileBPLib() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSProjectileBPLib();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UMSProjectileBPLib_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMSProjectileBPLib *******************************************************
void UMSProjectileBPLib::StaticRegisterNativesUMSProjectileBPLib()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMSProjectileBPLib;
UClass* UMSProjectileBPLib::GetPrivateStaticClass()
{
	using TClass = UMSProjectileBPLib;
	if (!Z_Registration_Info_UClass_UMSProjectileBPLib.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MSProjectileBPLib"),
			Z_Registration_Info_UClass_UMSProjectileBPLib.InnerSingleton,
			StaticRegisterNativesUMSProjectileBPLib,
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
	return Z_Registration_Info_UClass_UMSProjectileBPLib.InnerSingleton;
}
UClass* Z_Construct_UClass_UMSProjectileBPLib_NoRegister()
{
	return UMSProjectileBPLib::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMSProjectileBPLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ProjectileSim/MSProjectileBPLib.h" },
		{ "ModuleRelativePath", "ProjectileSim/MSProjectileBPLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMSProjectileBPLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMSProjectileBPLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileBPLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMSProjectileBPLib_Statics::ClassParams = {
	&UMSProjectileBPLib::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMSProjectileBPLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UMSProjectileBPLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMSProjectileBPLib()
{
	if (!Z_Registration_Info_UClass_UMSProjectileBPLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMSProjectileBPLib.OuterSingleton, Z_Construct_UClass_UMSProjectileBPLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMSProjectileBPLib.OuterSingleton;
}
UMSProjectileBPLib::UMSProjectileBPLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMSProjectileBPLib);
UMSProjectileBPLib::~UMSProjectileBPLib() {}
// ********** End Class UMSProjectileBPLib *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MSProjectileBPLib_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMSProjectileBPLib, UMSProjectileBPLib::StaticClass, TEXT("UMSProjectileBPLib"), &Z_Registration_Info_UClass_UMSProjectileBPLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMSProjectileBPLib), 3121931117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MSProjectileBPLib_h__Script_MassCommunitySample_654206261(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MSProjectileBPLib_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_ProjectileSim_MSProjectileBPLib_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
