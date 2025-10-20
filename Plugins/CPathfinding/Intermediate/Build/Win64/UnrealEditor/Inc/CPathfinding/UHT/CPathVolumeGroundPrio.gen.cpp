// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPathVolumeGroundPrio.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPathVolumeGroundPrio() {}

// ********** Begin Cross Module References ********************************************************
CPATHFINDING_API UClass* Z_Construct_UClass_ACPathVolume();
CPATHFINDING_API UClass* Z_Construct_UClass_ACPathVolumeGroundPrio();
CPATHFINDING_API UClass* Z_Construct_UClass_ACPathVolumeGroundPrio_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPathVolumeGroundPrio ***************************************************
void ACPathVolumeGroundPrio::StaticRegisterNativesACPathVolumeGroundPrio()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPathVolumeGroundPrio;
UClass* ACPathVolumeGroundPrio::GetPrivateStaticClass()
{
	using TClass = ACPathVolumeGroundPrio;
	if (!Z_Registration_Info_UClass_ACPathVolumeGroundPrio.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPathVolumeGroundPrio"),
			Z_Registration_Info_UClass_ACPathVolumeGroundPrio.InnerSingleton,
			StaticRegisterNativesACPathVolumeGroundPrio,
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
	return Z_Registration_Info_UClass_ACPathVolumeGroundPrio.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPathVolumeGroundPrio_NoRegister()
{
	return ACPathVolumeGroundPrio::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPathVolumeGroundPrio_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CPathVolumeGroundPrio.h" },
		{ "ModuleRelativePath", "Public/CPathVolumeGroundPrio.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPathVolumeGroundPrio>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPathVolumeGroundPrio_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACPathVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_CPathfinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPathVolumeGroundPrio_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPathVolumeGroundPrio_Statics::ClassParams = {
	&ACPathVolumeGroundPrio::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPathVolumeGroundPrio_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPathVolumeGroundPrio_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPathVolumeGroundPrio()
{
	if (!Z_Registration_Info_UClass_ACPathVolumeGroundPrio.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPathVolumeGroundPrio.OuterSingleton, Z_Construct_UClass_ACPathVolumeGroundPrio_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPathVolumeGroundPrio.OuterSingleton;
}
ACPathVolumeGroundPrio::ACPathVolumeGroundPrio() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPathVolumeGroundPrio);
ACPathVolumeGroundPrio::~ACPathVolumeGroundPrio() {}
// ********** End Class ACPathVolumeGroundPrio *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolumeGroundPrio_h__Script_CPathfinding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPathVolumeGroundPrio, ACPathVolumeGroundPrio::StaticClass, TEXT("ACPathVolumeGroundPrio"), &Z_Registration_Info_UClass_ACPathVolumeGroundPrio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPathVolumeGroundPrio), 1146413586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolumeGroundPrio_h__Script_CPathfinding_1559825410(TEXT("/Script/CPathfinding"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolumeGroundPrio_h__Script_CPathfinding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolumeGroundPrio_h__Script_CPathfinding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
