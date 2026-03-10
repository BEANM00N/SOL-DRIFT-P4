// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Common/Misc/SpacedGridLocationsSpawnDataGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpacedGridLocationsSpawnDataGenerator() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpacedGridLocationsSpawnDataGenerator ***********************************
void USpacedGridLocationsSpawnDataGenerator::StaticRegisterNativesUSpacedGridLocationsSpawnDataGenerator()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USpacedGridLocationsSpawnDataGenerator;
UClass* USpacedGridLocationsSpawnDataGenerator::GetPrivateStaticClass()
{
	using TClass = USpacedGridLocationsSpawnDataGenerator;
	if (!Z_Registration_Info_UClass_USpacedGridLocationsSpawnDataGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpacedGridLocationsSpawnDataGenerator"),
			Z_Registration_Info_UClass_USpacedGridLocationsSpawnDataGenerator.InnerSingleton,
			StaticRegisterNativesUSpacedGridLocationsSpawnDataGenerator,
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
	return Z_Registration_Info_UClass_USpacedGridLocationsSpawnDataGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_NoRegister()
{
	return USpacedGridLocationsSpawnDataGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Common/Misc/SpacedGridLocationsSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Common/Misc/SpacedGridLocationsSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[] = {
		{ "Category", "SpacedGridLocationsSpawnDataGenerator" },
		{ "ModuleRelativePath", "Common/Misc/SpacedGridLocationsSpawnDataGenerator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Spacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpacedGridLocationsSpawnDataGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpacedGridLocationsSpawnDataGenerator, Spacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spacing_MetaData), NewProp_Spacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::NewProp_Spacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::ClassParams = {
	&USpacedGridLocationsSpawnDataGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator()
{
	if (!Z_Registration_Info_UClass_USpacedGridLocationsSpawnDataGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpacedGridLocationsSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpacedGridLocationsSpawnDataGenerator.OuterSingleton;
}
USpacedGridLocationsSpawnDataGenerator::USpacedGridLocationsSpawnDataGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpacedGridLocationsSpawnDataGenerator);
USpacedGridLocationsSpawnDataGenerator::~USpacedGridLocationsSpawnDataGenerator() {}
// ********** End Class USpacedGridLocationsSpawnDataGenerator *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_SpacedGridLocationsSpawnDataGenerator_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpacedGridLocationsSpawnDataGenerator, USpacedGridLocationsSpawnDataGenerator::StaticClass, TEXT("USpacedGridLocationsSpawnDataGenerator"), &Z_Registration_Info_UClass_USpacedGridLocationsSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpacedGridLocationsSpawnDataGenerator), 3010969788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_SpacedGridLocationsSpawnDataGenerator_h__Script_MassCommunitySample_1133212590(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_SpacedGridLocationsSpawnDataGenerator_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_UnrealProjects_SOL_DRIFT_CurrentVersion_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Common_Misc_SpacedGridLocationsSpawnDataGenerator_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
