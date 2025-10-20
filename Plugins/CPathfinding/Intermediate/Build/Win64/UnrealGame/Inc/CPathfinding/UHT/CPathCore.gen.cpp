// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPathCore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPathCore() {}

// ********** Begin Cross Module References ********************************************************
CPATHFINDING_API UClass* Z_Construct_UClass_ACPathCore();
CPATHFINDING_API UClass* Z_Construct_UClass_ACPathCore_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPathCore ***************************************************************
void ACPathCore::StaticRegisterNativesACPathCore()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPathCore;
UClass* ACPathCore::GetPrivateStaticClass()
{
	using TClass = ACPathCore;
	if (!Z_Registration_Info_UClass_ACPathCore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPathCore"),
			Z_Registration_Info_UClass_ACPathCore.InnerSingleton,
			StaticRegisterNativesACPathCore,
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
	return Z_Registration_Info_UClass_ACPathCore.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPathCore_NoRegister()
{
	return ACPathCore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPathCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPathCore.h" },
		{ "ModuleRelativePath", "Public/CPathCore.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPathCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPathCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CPathfinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPathCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPathCore_Statics::ClassParams = {
	&ACPathCore::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPathCore_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPathCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPathCore()
{
	if (!Z_Registration_Info_UClass_ACPathCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPathCore.OuterSingleton, Z_Construct_UClass_ACPathCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPathCore.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPathCore);
// ********** End Class ACPathCore *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathCore_h__Script_CPathfinding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPathCore, ACPathCore::StaticClass, TEXT("ACPathCore"), &Z_Registration_Info_UClass_ACPathCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPathCore), 3028232694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathCore_h__Script_CPathfinding_2015270452(TEXT("/Script/CPathfinding"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathCore_h__Script_CPathfinding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathCore_h__Script_CPathfinding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
