// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PjcTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePjcTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
PJC_API UClass* Z_Construct_UClass_UPjcAssetExcludeSettings();
PJC_API UClass* Z_Construct_UClass_UPjcAssetExcludeSettings_NoRegister();
PJC_API UClass* Z_Construct_UClass_UPjcFileExcludeSettings();
PJC_API UClass* Z_Construct_UClass_UPjcFileExcludeSettings_NoRegister();
PJC_API UScriptStruct* Z_Construct_UScriptStruct_FPjcAssetIndirectInfo();
PJC_API UScriptStruct* Z_Construct_UScriptStruct_FPjcFileInfo();
UPackage* Z_Construct_UPackage__Script_Pjc();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPjcAssetExcludeSettings *************************************************
void UPjcAssetExcludeSettings::StaticRegisterNativesUPjcAssetExcludeSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPjcAssetExcludeSettings;
UClass* UPjcAssetExcludeSettings::GetPrivateStaticClass()
{
	using TClass = UPjcAssetExcludeSettings;
	if (!Z_Registration_Info_UClass_UPjcAssetExcludeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PjcAssetExcludeSettings"),
			Z_Registration_Info_UClass_UPjcAssetExcludeSettings.InnerSingleton,
			StaticRegisterNativesUPjcAssetExcludeSettings,
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
	return Z_Registration_Info_UClass_UPjcAssetExcludeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPjcAssetExcludeSettings_NoRegister()
{
	return UPjcAssetExcludeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPjcAssetExcludeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PjcTypes.h" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedFolders_MetaData[] = {
		{ "Category", "AssetExcludeSettings" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consider assets in specified folders as used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedClasses_MetaData[] = {
		{ "Category", "AssetExcludeSettings" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Consider assets of specified classes as used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedAssets_MetaData[] = {
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedFolders_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedFolders;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ExcludedClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedClasses;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ExcludedAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPjcAssetExcludeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedFolders_Inner = { "ExcludedFolders", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedFolders = { "ExcludedFolders", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPjcAssetExcludeSettings, ExcludedFolders), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedFolders_MetaData), NewProp_ExcludedFolders_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedClasses_Inner = { "ExcludedClasses", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedClasses = { "ExcludedClasses", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPjcAssetExcludeSettings, ExcludedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedClasses_MetaData), NewProp_ExcludedClasses_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedAssets_Inner = { "ExcludedAssets", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedAssets = { "ExcludedAssets", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPjcAssetExcludeSettings, ExcludedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedAssets_MetaData), NewProp_ExcludedAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedFolders_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedFolders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::NewProp_ExcludedAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Pjc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::ClassParams = {
	&UPjcAssetExcludeSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPjcAssetExcludeSettings()
{
	if (!Z_Registration_Info_UClass_UPjcAssetExcludeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPjcAssetExcludeSettings.OuterSingleton, Z_Construct_UClass_UPjcAssetExcludeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPjcAssetExcludeSettings.OuterSingleton;
}
UPjcAssetExcludeSettings::UPjcAssetExcludeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPjcAssetExcludeSettings);
UPjcAssetExcludeSettings::~UPjcAssetExcludeSettings() {}
// ********** End Class UPjcAssetExcludeSettings ***************************************************

// ********** Begin Class UPjcFileExcludeSettings **************************************************
void UPjcFileExcludeSettings::StaticRegisterNativesUPjcFileExcludeSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPjcFileExcludeSettings;
UClass* UPjcFileExcludeSettings::GetPrivateStaticClass()
{
	using TClass = UPjcFileExcludeSettings;
	if (!Z_Registration_Info_UClass_UPjcFileExcludeSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PjcFileExcludeSettings"),
			Z_Registration_Info_UClass_UPjcFileExcludeSettings.InnerSingleton,
			StaticRegisterNativesUPjcFileExcludeSettings,
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
	return Z_Registration_Info_UClass_UPjcFileExcludeSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UPjcFileExcludeSettings_NoRegister()
{
	return UPjcFileExcludeSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPjcFileExcludeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PjcTypes.h" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedFiles_MetaData[] = {
		{ "Category", "FileExcludeSettings" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
		{ "RelativeToGameDir", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exclude specified files from scanning" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedExtensions_MetaData[] = {
		{ "Category", "FileExcludeSettings" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exclude files with specified extensions from scanning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedFiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedFiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedExtensions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedExtensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPjcFileExcludeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPjcFileExcludeSettings_Statics::NewProp_ExcludedFiles_Inner = { "ExcludedFiles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPjcFileExcludeSettings_Statics::NewProp_ExcludedFiles = { "ExcludedFiles", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPjcFileExcludeSettings, ExcludedFiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedFiles_MetaData), NewProp_ExcludedFiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPjcFileExcludeSettings_Statics::NewProp_ExcludedExtensions_Inner = { "ExcludedExtensions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPjcFileExcludeSettings_Statics::NewProp_ExcludedExtensions = { "ExcludedExtensions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPjcFileExcludeSettings, ExcludedExtensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludedExtensions_MetaData), NewProp_ExcludedExtensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPjcFileExcludeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcFileExcludeSettings_Statics::NewProp_ExcludedFiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcFileExcludeSettings_Statics::NewProp_ExcludedFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcFileExcludeSettings_Statics::NewProp_ExcludedExtensions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPjcFileExcludeSettings_Statics::NewProp_ExcludedExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcFileExcludeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPjcFileExcludeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Pjc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcFileExcludeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPjcFileExcludeSettings_Statics::ClassParams = {
	&UPjcFileExcludeSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPjcFileExcludeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPjcFileExcludeSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPjcFileExcludeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPjcFileExcludeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPjcFileExcludeSettings()
{
	if (!Z_Registration_Info_UClass_UPjcFileExcludeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPjcFileExcludeSettings.OuterSingleton, Z_Construct_UClass_UPjcFileExcludeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPjcFileExcludeSettings.OuterSingleton;
}
UPjcFileExcludeSettings::UPjcFileExcludeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPjcFileExcludeSettings);
UPjcFileExcludeSettings::~UPjcFileExcludeSettings() {}
// ********** End Class UPjcFileExcludeSettings ****************************************************

// ********** Begin ScriptStruct FPjcFileInfo ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPjcFileInfo;
class UScriptStruct* FPjcFileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPjcFileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPjcFileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPjcFileInfo, (UObject*)Z_Construct_UPackage__Script_Pjc(), TEXT("PjcFileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FPjcFileInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPjcFileInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileNum_MetaData[] = {
		{ "Category", "FileInfo" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "FileInfo" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPjcFileInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPjcFileInfo_Statics::NewProp_FileNum = { "FileNum", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPjcFileInfo, FileNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileNum_MetaData), NewProp_FileNum_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPjcFileInfo_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPjcFileInfo, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPjcFileInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPjcFileInfo_Statics::NewProp_FileNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPjcFileInfo_Statics::NewProp_FilePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPjcFileInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPjcFileInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Pjc,
	nullptr,
	&NewStructOps,
	"PjcFileInfo",
	Z_Construct_UScriptStruct_FPjcFileInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPjcFileInfo_Statics::PropPointers),
	sizeof(FPjcFileInfo),
	alignof(FPjcFileInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPjcFileInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPjcFileInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPjcFileInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FPjcFileInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPjcFileInfo.InnerSingleton, Z_Construct_UScriptStruct_FPjcFileInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPjcFileInfo.InnerSingleton;
}
// ********** End ScriptStruct FPjcFileInfo ********************************************************

// ********** Begin ScriptStruct FPjcAssetIndirectInfo *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPjcAssetIndirectInfo;
class UScriptStruct* FPjcAssetIndirectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPjcAssetIndirectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPjcAssetIndirectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPjcAssetIndirectInfo, (UObject*)Z_Construct_UPackage__Script_Pjc(), TEXT("PjcAssetIndirectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FPjcAssetIndirectInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "AssetIndirectInfo" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "AssetIndirectInfo" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileNum_MetaData[] = {
		{ "Category", "AssetIndirectInfo" },
		{ "ModuleRelativePath", "Public/PjcTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPjcAssetIndirectInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPjcAssetIndirectInfo, Asset), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPjcAssetIndirectInfo, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::NewProp_FileNum = { "FileNum", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPjcAssetIndirectInfo, FileNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileNum_MetaData), NewProp_FileNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::NewProp_FileNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Pjc,
	nullptr,
	&NewStructOps,
	"PjcAssetIndirectInfo",
	Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::PropPointers),
	sizeof(FPjcAssetIndirectInfo),
	alignof(FPjcAssetIndirectInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPjcAssetIndirectInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FPjcAssetIndirectInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPjcAssetIndirectInfo.InnerSingleton, Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPjcAssetIndirectInfo.InnerSingleton;
}
// ********** End ScriptStruct FPjcAssetIndirectInfo ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcTypes_h__Script_Pjc_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPjcFileInfo::StaticStruct, Z_Construct_UScriptStruct_FPjcFileInfo_Statics::NewStructOps, TEXT("PjcFileInfo"), &Z_Registration_Info_UScriptStruct_FPjcFileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPjcFileInfo), 3217242629U) },
		{ FPjcAssetIndirectInfo::StaticStruct, Z_Construct_UScriptStruct_FPjcAssetIndirectInfo_Statics::NewStructOps, TEXT("PjcAssetIndirectInfo"), &Z_Registration_Info_UScriptStruct_FPjcAssetIndirectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPjcAssetIndirectInfo), 1501831047U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPjcAssetExcludeSettings, UPjcAssetExcludeSettings::StaticClass, TEXT("UPjcAssetExcludeSettings"), &Z_Registration_Info_UClass_UPjcAssetExcludeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPjcAssetExcludeSettings), 3763629975U) },
		{ Z_Construct_UClass_UPjcFileExcludeSettings, UPjcFileExcludeSettings::StaticClass, TEXT("UPjcFileExcludeSettings"), &Z_Registration_Info_UClass_UPjcFileExcludeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPjcFileExcludeSettings), 3740686690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcTypes_h__Script_Pjc_3393435851(TEXT("/Script/Pjc"),
	Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcTypes_h__Script_Pjc_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcTypes_h__Script_Pjc_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcTypes_h__Script_Pjc_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_ProjectC9f3263f8f1b0V8_Source_Pjc_Public_PjcTypes_h__Script_Pjc_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
