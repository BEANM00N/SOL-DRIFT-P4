// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelPreviewWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModelPreviewWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PROCTEXPLUGIN_API UClass* Z_Construct_UClass_UModelPreviewWidget();
PROCTEXPLUGIN_API UClass* Z_Construct_UClass_UModelPreviewWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_ProcTexPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UModelPreviewWidget Function ApplyMeshAsset ******************************
struct Z_Construct_UFunction_UModelPreviewWidget_ApplyMeshAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "3D Preview" },
		{ "ModuleRelativePath", "Public/ModelPreviewWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelPreviewWidget_ApplyMeshAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UModelPreviewWidget, nullptr, "ApplyMeshAsset", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_ApplyMeshAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelPreviewWidget_ApplyMeshAsset_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UModelPreviewWidget_ApplyMeshAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelPreviewWidget_ApplyMeshAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelPreviewWidget::execApplyMeshAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyMeshAsset();
	P_NATIVE_END;
}
// ********** End Class UModelPreviewWidget Function ApplyMeshAsset ********************************

// ********** Begin Class UModelPreviewWidget Function SetMaterial *********************************
struct Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics
{
	struct ModelPreviewWidget_eventSetMaterial_Parms
	{
		int32 ElementIndex;
		UMaterialInterface* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "3D Preview" },
		{ "ModuleRelativePath", "Public/ModelPreviewWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::NewProp_ElementIndex = { "ElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelPreviewWidget_eventSetMaterial_Parms, ElementIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelPreviewWidget_eventSetMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::NewProp_ElementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UModelPreviewWidget, nullptr, "SetMaterial", Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::ModelPreviewWidget_eventSetMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::ModelPreviewWidget_eventSetMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelPreviewWidget_SetMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelPreviewWidget_SetMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelPreviewWidget::execSetMaterial)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIndex);
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaterial(Z_Param_ElementIndex,Z_Param_Material);
	P_NATIVE_END;
}
// ********** End Class UModelPreviewWidget Function SetMaterial ***********************************

// ********** Begin Class UModelPreviewWidget Function SetSkeletalMesh *****************************
struct Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics
{
	struct ModelPreviewWidget_eventSetSkeletalMesh_Parms
	{
		USkeletalMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "3D Preview" },
		{ "ModuleRelativePath", "Public/ModelPreviewWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelPreviewWidget_eventSetSkeletalMesh_Parms, NewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UModelPreviewWidget, nullptr, "SetSkeletalMesh", Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::ModelPreviewWidget_eventSetSkeletalMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::ModelPreviewWidget_eventSetSkeletalMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelPreviewWidget::execSetSkeletalMesh)
{
	P_GET_OBJECT(USkeletalMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkeletalMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// ********** End Class UModelPreviewWidget Function SetSkeletalMesh *******************************

// ********** Begin Class UModelPreviewWidget Function SetStaticMesh *******************************
struct Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics
{
	struct ModelPreviewWidget_eventSetStaticMesh_Parms
	{
		UStaticMesh* NewMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "3D Preview" },
		{ "ModuleRelativePath", "Public/ModelPreviewWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModelPreviewWidget_eventSetStaticMesh_Parms, NewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::NewProp_NewMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UModelPreviewWidget, nullptr, "SetStaticMesh", Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::ModelPreviewWidget_eventSetStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::ModelPreviewWidget_eventSetStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModelPreviewWidget::execSetStaticMesh)
{
	P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStaticMesh(Z_Param_NewMesh);
	P_NATIVE_END;
}
// ********** End Class UModelPreviewWidget Function SetStaticMesh *********************************

// ********** Begin Class UModelPreviewWidget ******************************************************
void UModelPreviewWidget::StaticRegisterNativesUModelPreviewWidget()
{
	UClass* Class = UModelPreviewWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyMeshAsset", &UModelPreviewWidget::execApplyMeshAsset },
		{ "SetMaterial", &UModelPreviewWidget::execSetMaterial },
		{ "SetSkeletalMesh", &UModelPreviewWidget::execSetSkeletalMesh },
		{ "SetStaticMesh", &UModelPreviewWidget::execSetStaticMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModelPreviewWidget;
UClass* UModelPreviewWidget::GetPrivateStaticClass()
{
	using TClass = UModelPreviewWidget;
	if (!Z_Registration_Info_UClass_UModelPreviewWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModelPreviewWidget"),
			Z_Registration_Info_UClass_UModelPreviewWidget.InnerSingleton,
			StaticRegisterNativesUModelPreviewWidget,
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
	return Z_Registration_Info_UClass_UModelPreviewWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UModelPreviewWidget_NoRegister()
{
	return UModelPreviewWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UModelPreviewWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ModelPreviewWidget.h" },
		{ "ModuleRelativePath", "Public/ModelPreviewWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshAsset_MetaData[] = {
		{ "AllowedClasses", "StaticMesh,SkeletalMesh" },
		{ "Category", "3D Preview" },
		{ "ModuleRelativePath", "Public/ModelPreviewWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMeshAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModelPreviewWidget_ApplyMeshAsset, "ApplyMeshAsset" }, // 3778451179
		{ &Z_Construct_UFunction_UModelPreviewWidget_SetMaterial, "SetMaterial" }, // 3466623540
		{ &Z_Construct_UFunction_UModelPreviewWidget_SetSkeletalMesh, "SetSkeletalMesh" }, // 2399536556
		{ &Z_Construct_UFunction_UModelPreviewWidget_SetStaticMesh, "SetStaticMesh" }, // 3317013078
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelPreviewWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModelPreviewWidget_Statics::NewProp_PreviewMeshAsset = { "PreviewMeshAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModelPreviewWidget, PreviewMeshAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshAsset_MetaData), NewProp_PreviewMeshAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelPreviewWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelPreviewWidget_Statics::NewProp_PreviewMeshAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelPreviewWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModelPreviewWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ProcTexPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModelPreviewWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelPreviewWidget_Statics::ClassParams = {
	&UModelPreviewWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModelPreviewWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModelPreviewWidget_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModelPreviewWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UModelPreviewWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModelPreviewWidget()
{
	if (!Z_Registration_Info_UClass_UModelPreviewWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelPreviewWidget.OuterSingleton, Z_Construct_UClass_UModelPreviewWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModelPreviewWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModelPreviewWidget);
// ********** End Class UModelPreviewWidget ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h__Script_ProcTexPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModelPreviewWidget, UModelPreviewWidget::StaticClass, TEXT("UModelPreviewWidget"), &Z_Registration_Info_UClass_UModelPreviewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelPreviewWidget), 1213051998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h__Script_ProcTexPlugin_800648922(TEXT("/Script/ProcTexPlugin"),
	Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h__Script_ProcTexPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SOL_DRIFT_P4_Plugins_ProcTexPlugin_Source_ProcTexPlugin_Public_ModelPreviewWidget_h__Script_ProcTexPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
