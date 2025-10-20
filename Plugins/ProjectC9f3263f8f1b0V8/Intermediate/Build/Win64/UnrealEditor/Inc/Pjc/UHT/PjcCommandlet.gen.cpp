// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PjcCommandlet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePjcCommandlet() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
PJC_API UClass* Z_Construct_UClass_UPjcCommandlet();
PJC_API UClass* Z_Construct_UClass_UPjcCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Pjc();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPjcCommandlet ***********************************************************
void UPjcCommandlet::StaticRegisterNativesUPjcCommandlet()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPjcCommandlet;
UClass* UPjcCommandlet::GetPrivateStaticClass()
{
	using TClass = UPjcCommandlet;
	if (!Z_Registration_Info_UClass_UPjcCommandlet.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PjcCommandlet"),
			Z_Registration_Info_UClass_UPjcCommandlet.InnerSingleton,
			StaticRegisterNativesUPjcCommandlet,
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
	return Z_Registration_Info_UClass_UPjcCommandlet.InnerSingleton;
}
UClass* Z_Construct_UClass_UPjcCommandlet_NoRegister()
{
	return UPjcCommandlet::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPjcCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/PjcCommandlet.h" },
		{ "ModuleRelativePath", "Private/Commandlets/PjcCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPjcCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPjcCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_Pjc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPjcCommandlet_Statics::ClassParams = {
	&UPjcCommandlet::StaticClass,
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
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UPjcCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPjcCommandlet()
{
	if (!Z_Registration_Info_UClass_UPjcCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPjcCommandlet.OuterSingleton, Z_Construct_UClass_UPjcCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPjcCommandlet.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPjcCommandlet);
UPjcCommandlet::~UPjcCommandlet() {}
// ********** End Class UPjcCommandlet *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Private_Commandlets_PjcCommandlet_h__Script_Pjc_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPjcCommandlet, UPjcCommandlet::StaticClass, TEXT("UPjcCommandlet"), &Z_Registration_Info_UClass_UPjcCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPjcCommandlet), 1951528150U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Private_Commandlets_PjcCommandlet_h__Script_Pjc_390262180(TEXT("/Script/Pjc"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Private_Commandlets_PjcCommandlet_h__Script_Pjc_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Private_Commandlets_PjcCommandlet_h__Script_Pjc_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
