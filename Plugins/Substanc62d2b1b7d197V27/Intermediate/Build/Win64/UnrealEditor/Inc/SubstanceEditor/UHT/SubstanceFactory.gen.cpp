// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSubstanceFactory() {}

// ********** Begin Cross Module References ********************************************************
SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory();
SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USubstanceFactory Function CreateInstance ********************************
struct Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics
{
	struct SubstanceFactory_eventCreateInstance_Parms
	{
		bool value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
	};
#endif // WITH_METADATA
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::NewProp_value_SetBit(void* Obj)
{
	((SubstanceFactory_eventCreateInstance_Parms*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubstanceFactory_eventCreateInstance_Parms), &Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceFactory, nullptr, "CreateInstance", Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::SubstanceFactory_eventCreateInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::SubstanceFactory_eventCreateInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceFactory_CreateInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceFactory_CreateInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceFactory::execCreateInstance)
{
	P_GET_UBOOL(Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateInstance(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class USubstanceFactory Function CreateInstance **********************************

// ********** Begin Class USubstanceFactory Function CreateMaterial ********************************
struct Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics
{
	struct SubstanceFactory_eventCreateMaterial_Parms
	{
		bool value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
	};
#endif // WITH_METADATA
	static void NewProp_value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::NewProp_value_SetBit(void* Obj)
{
	((SubstanceFactory_eventCreateMaterial_Parms*)Obj)->value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SubstanceFactory_eventCreateMaterial_Parms), &Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceFactory, nullptr, "CreateMaterial", Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::SubstanceFactory_eventCreateMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::SubstanceFactory_eventCreateMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceFactory_CreateMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceFactory_CreateMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceFactory::execCreateMaterial)
{
	P_GET_UBOOL(Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateMaterial(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class USubstanceFactory Function CreateMaterial **********************************

// ********** Begin Class USubstanceFactory Function ImportArchive *********************************
struct Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics
{
	struct SubstanceFactory_eventImportArchive_Parms
	{
		FString destinationPpath;
		FString filename;
		USubstanceInstanceFactory* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Import an sbsar */" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
		{ "ToolTip", "Import an sbsar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_destinationPpath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_destinationPpath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_filename;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_destinationPpath = { "destinationPpath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceFactory_eventImportArchive_Parms, destinationPpath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_destinationPpath_MetaData), NewProp_destinationPpath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceFactory_eventImportArchive_Parms, filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_filename_MetaData), NewProp_filename_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubstanceFactory_eventImportArchive_Parms, ReturnValue), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_destinationPpath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceFactory, nullptr, "ImportArchive", Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::SubstanceFactory_eventImportArchive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::SubstanceFactory_eventImportArchive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubstanceFactory_ImportArchive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceFactory_ImportArchive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceFactory::execImportArchive)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_destinationPpath);
	P_GET_PROPERTY(FStrProperty,Z_Param_filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USubstanceInstanceFactory**)Z_Param__Result=P_THIS->ImportArchive(Z_Param_destinationPpath,Z_Param_filename);
	P_NATIVE_END;
}
// ********** End Class USubstanceFactory Function ImportArchive ***********************************

// ********** Begin Class USubstanceFactory Function SuppressImportOverwriteDialog *****************
struct Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/** Suppresses the dialog box that, when importing over an existing texture, asks if the users wishes to overwrite its settings. */" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
		{ "ToolTip", "Suppresses the dialog box that, when importing over an existing texture, asks if the users wishes to overwrite its settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USubstanceFactory, nullptr, "SuppressImportOverwriteDialog", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USubstanceFactory::execSuppressImportOverwriteDialog)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SuppressImportOverwriteDialog();
	P_NATIVE_END;
}
// ********** End Class USubstanceFactory Function SuppressImportOverwriteDialog *******************

// ********** Begin Class USubstanceFactory ********************************************************
void USubstanceFactory::StaticRegisterNativesUSubstanceFactory()
{
	UClass* Class = USubstanceFactory::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateInstance", &USubstanceFactory::execCreateInstance },
		{ "CreateMaterial", &USubstanceFactory::execCreateMaterial },
		{ "ImportArchive", &USubstanceFactory::execImportArchive },
		{ "SuppressImportOverwriteDialog", &USubstanceFactory::execSuppressImportOverwriteDialog },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USubstanceFactory;
UClass* USubstanceFactory::GetPrivateStaticClass()
{
	using TClass = USubstanceFactory;
	if (!Z_Registration_Info_UClass_USubstanceFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SubstanceFactory"),
			Z_Registration_Info_UClass_USubstanceFactory.InnerSingleton,
			StaticRegisterNativesUSubstanceFactory,
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
	return Z_Registration_Info_UClass_USubstanceFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_USubstanceFactory_NoRegister()
{
	return USubstanceFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USubstanceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/SubstanceFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceFactory_CreateInstance, "CreateInstance" }, // 2033139493
		{ &Z_Construct_UFunction_USubstanceFactory_CreateMaterial, "CreateMaterial" }, // 1663159594
		{ &Z_Construct_UFunction_USubstanceFactory_ImportArchive, "ImportArchive" }, // 2605485449
		{ &Z_Construct_UFunction_USubstanceFactory_SuppressImportOverwriteDialog, "SuppressImportOverwriteDialog" }, // 2635712374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubstanceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubstanceFactory_Statics::ClassParams = {
	&USubstanceFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_USubstanceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubstanceFactory()
{
	if (!Z_Registration_Info_UClass_USubstanceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubstanceFactory.OuterSingleton, Z_Construct_UClass_USubstanceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubstanceFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceFactory);
USubstanceFactory::~USubstanceFactory() {}
// ********** End Class USubstanceFactory **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h__Script_SubstanceEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubstanceFactory, USubstanceFactory::StaticClass, TEXT("USubstanceFactory"), &Z_Registration_Info_UClass_USubstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubstanceFactory), 948990500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h__Script_SubstanceEditor_3804595871(TEXT("/Script/SubstanceEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h__Script_SubstanceEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Substance_Source_SubstanceEditor_Classes_SubstanceFactory_h__Script_SubstanceEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
