// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Misc/ThisLocationSpawnDataGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeThisLocationSpawnDataGenerator() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UThisLocationSpawnDataGenerator();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_UThisLocationSpawnDataGenerator_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UThisLocationSpawnDataGenerator ******************************************
void UThisLocationSpawnDataGenerator::StaticRegisterNativesUThisLocationSpawnDataGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UThisLocationSpawnDataGenerator;
UClass* UThisLocationSpawnDataGenerator::GetPrivateStaticClass()
{
	using TClass = UThisLocationSpawnDataGenerator;
	if (!Z_Registration_Info_UClass_UThisLocationSpawnDataGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ThisLocationSpawnDataGenerator"),
			Z_Registration_Info_UClass_UThisLocationSpawnDataGenerator.InnerSingleton,
			StaticRegisterNativesUThisLocationSpawnDataGenerator,
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
	return Z_Registration_Info_UClass_UThisLocationSpawnDataGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UThisLocationSpawnDataGenerator_NoRegister()
{
	return UThisLocationSpawnDataGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UThisLocationSpawnDataGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "This Location SpawnDataGenerator" },
		{ "IncludePath", "Common/Misc/ThisLocationSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Common/Misc/ThisLocationSpawnDataGenerator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThisLocationSpawnDataGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UThisLocationSpawnDataGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThisLocationSpawnDataGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThisLocationSpawnDataGenerator_Statics::ClassParams = {
	&UThisLocationSpawnDataGenerator::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThisLocationSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UThisLocationSpawnDataGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThisLocationSpawnDataGenerator()
{
	if (!Z_Registration_Info_UClass_UThisLocationSpawnDataGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThisLocationSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_UThisLocationSpawnDataGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThisLocationSpawnDataGenerator.OuterSingleton;
}
UThisLocationSpawnDataGenerator::UThisLocationSpawnDataGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThisLocationSpawnDataGenerator);
UThisLocationSpawnDataGenerator::~UThisLocationSpawnDataGenerator() {}
// ********** End Class UThisLocationSpawnDataGenerator ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_ThisLocationSpawnDataGenerator_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThisLocationSpawnDataGenerator, UThisLocationSpawnDataGenerator::StaticClass, TEXT("UThisLocationSpawnDataGenerator"), &Z_Registration_Info_UClass_UThisLocationSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThisLocationSpawnDataGenerator), 1761752326U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_ThisLocationSpawnDataGenerator_h__Script_MassCommunitySample_752295452(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_ThisLocationSpawnDataGenerator_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marcu_Desktop_WORK_SOL_DRIFT_GameFiles_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_ThisLocationSpawnDataGenerator_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
