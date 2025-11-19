// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Experimental/LambdaBasedMassProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLambdaBasedMassProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_ULambdaMassProcessor();
MASSCOMMUNITYSAMPLE_API UClass* Z_Construct_UClass_ULambdaMassProcessor_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
UPackage* Z_Construct_UPackage__Script_MassCommunitySample();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULambdaMassProcessor *****************************************************
void ULambdaMassProcessor::StaticRegisterNativesULambdaMassProcessor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULambdaMassProcessor;
UClass* ULambdaMassProcessor::GetPrivateStaticClass()
{
	using TClass = ULambdaMassProcessor;
	if (!Z_Registration_Info_UClass_ULambdaMassProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LambdaMassProcessor"),
			Z_Registration_Info_UClass_ULambdaMassProcessor.InnerSingleton,
			StaticRegisterNativesULambdaMassProcessor,
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
	return Z_Registration_Info_UClass_ULambdaMassProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_ULambdaMassProcessor_NoRegister()
{
	return ULambdaMassProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULambdaMassProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple Mass processer template to make stuff faster\n *\n *  Currrenlty handles MSMassUtils::Query<T...>  types\n *\n *\n * Example that creates query for FTransformFragment (read/write)FOtherFragment (readonly)\n * Note the const indicating readonly in the template params\n * MSMassUtils::Processor<FTransformFragment, const FOtherFragment>(EntitySim).ForEachChunk([this](FMassExecutionContext& Context)\n *\x09{\n *\x09\x09""auto Transforms = Context.GetMutableFragmentView<FTransformFragment>();\n *      auto OtherFragment = Context.GetFragmentView<FOtherFragment>();\n *\x09\x09""for (int32 i = 0; i < Context.GetNumEntities(); i++)\n *\x09\x09{\n *\x09\x09\x09// do stuff as normal \n *\x09\x09}\n *\x09});\n *\n * MSMassUtils::GameThreadProcessor for GT only\n *\n *\n *\n * \n * Observer listening for FOtherFragment added:\n *\n *  * MSMassUtils::Processor<FTransformFragment, const FOtherFragment>(EntitySim).OnAdded<FOtherFragment>([this](FMassExecutionContext& Context)\n *\x09{\n *\x09\x09""auto Transforms = Context.GetMutableFragmentView<FTransformFragment>();\n *      auto OtherFragment = Context.GetFragmentView<FOtherFragment>();\n *\x09\x09""for (int32 i = 0; i < Context.GetNumEntities(); i++)\n *\x09\x09{\n *\x09\x09\x09// do stuff as normal \n *\x09\x09}\n *\x09});\n *\n *   \n */" },
#endif
		{ "IncludePath", "Experimental/LambdaBasedMassProcessor.h" },
		{ "ModuleRelativePath", "Experimental/LambdaBasedMassProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple Mass processer template to make stuff faster\n\nCurrrenlty handles MSMassUtils::Query<T...>  types\n\n\nExample that creates query for FTransformFragment (read/write)FOtherFragment (readonly)\nNote the const indicating readonly in the template params\nMSMassUtils::Processor<FTransformFragment, const FOtherFragment>(EntitySim).ForEachChunk([this](FMassExecutionContext& Context)\n   {\n           auto Transforms = Context.GetMutableFragmentView<FTransformFragment>();\n    auto OtherFragment = Context.GetFragmentView<FOtherFragment>();\n           for (int32 i = 0; i < Context.GetNumEntities(); i++)\n           {\n                   // do stuff as normal\n           }\n   });\n\nMSMassUtils::GameThreadProcessor for GT only\n\n\n\n\nObserver listening for FOtherFragment added:\n\n* MSMassUtils::Processor<FTransformFragment, const FOtherFragment>(EntitySim).OnAdded<FOtherFragment>([this](FMassExecutionContext& Context)\n   {\n           auto Transforms = Context.GetMutableFragmentView<FTransformFragment>();\n    auto OtherFragment = Context.GetFragmentView<FOtherFragment>();\n           for (int32 i = 0; i < Context.GetNumEntities(); i++)\n           {\n                   // do stuff as normal\n           }\n   });" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULambdaMassProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULambdaMassProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassCommunitySample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULambdaMassProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULambdaMassProcessor_Statics::ClassParams = {
	&ULambdaMassProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULambdaMassProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_ULambdaMassProcessor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULambdaMassProcessor()
{
	if (!Z_Registration_Info_UClass_ULambdaMassProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULambdaMassProcessor.OuterSingleton, Z_Construct_UClass_ULambdaMassProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULambdaMassProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULambdaMassProcessor);
ULambdaMassProcessor::~ULambdaMassProcessor() {}
// ********** End Class ULambdaMassProcessor *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_LambdaBasedMassProcessor_h__Script_MassCommunitySample_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULambdaMassProcessor, ULambdaMassProcessor::StaticClass, TEXT("ULambdaMassProcessor"), &Z_Registration_Info_UClass_ULambdaMassProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULambdaMassProcessor), 878855209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_LambdaBasedMassProcessor_h__Script_MassCommunitySample_294835484(TEXT("/Script/MassCommunitySample"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_LambdaBasedMassProcessor_h__Script_MassCommunitySample_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_MassCommunitySample_Source_MassCommunitySample_Experimental_LambdaBasedMassProcessor_h__Script_MassCommunitySample_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
