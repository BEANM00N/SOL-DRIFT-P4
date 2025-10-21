// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPathVolume.h"
#include "CPathNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPathVolume() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
CPATHFINDING_API UClass* Z_Construct_UClass_ACPathCore_NoRegister();
CPATHFINDING_API UClass* Z_Construct_UClass_ACPathVolume();
CPATHFINDING_API UClass* Z_Construct_UClass_ACPathVolume_NoRegister();
CPATHFINDING_API UEnum* Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum();
CPATHFINDING_API UEnum* Z_Construct_UEnum_CPathfinding_EAgentShape();
CPATHFINDING_API UEnum* Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason();
CPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FCPathNode();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_CPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPathVolume Function DebugDrawNeighbours ********************************
struct Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics
{
	struct CPathVolume_eventDebugDrawNeighbours_Parms
	{
		FVector WorldLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CPath|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draws FREE neighbouring leafs\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws FREE neighbouring leafs" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventDebugDrawNeighbours_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::NewProp_WorldLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPathVolume, nullptr, "DebugDrawNeighbours", Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::CPathVolume_eventDebugDrawNeighbours_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::CPathVolume_eventDebugDrawNeighbours_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPathVolume::execDebugDrawNeighbours)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugDrawNeighbours(Z_Param_WorldLocation);
	P_NATIVE_END;
}
// ********** End Class ACPathVolume Function DebugDrawNeighbours **********************************

// ********** Begin Class ACPathVolume Function DrawDebugNodesAroundLocation ***********************
struct Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics
{
	struct CPathVolume_eventDrawDebugNodesAroundLocation_Parms
	{
		FVector WorldLocation;
		int32 VoxelLimit;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CPath|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draws the octree structure around WorldLocation, up tp VoxelLlimit\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws the octree structure around WorldLocation, up tp VoxelLlimit" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VoxelLimit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventDrawDebugNodesAroundLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::NewProp_VoxelLimit = { "VoxelLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventDrawDebugNodesAroundLocation_Parms, VoxelLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventDrawDebugNodesAroundLocation_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::NewProp_VoxelLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPathVolume, nullptr, "DrawDebugNodesAroundLocation", Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::CPathVolume_eventDrawDebugNodesAroundLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::CPathVolume_eventDrawDebugNodesAroundLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPathVolume::execDrawDebugNodesAroundLocation)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_PROPERTY(FIntProperty,Z_Param_VoxelLimit);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugNodesAroundLocation(Z_Param_WorldLocation,Z_Param_VoxelLimit,Z_Param_Duration);
	P_NATIVE_END;
}
// ********** End Class ACPathVolume Function DrawDebugNodesAroundLocation *************************

// ********** Begin Class ACPathVolume Function DrawDebugPath **************************************
struct Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics
{
	struct CPathVolume_eventDrawDebugPath_Parms
	{
		TArray<FCPathNode> Path;
		float Duration;
		bool DrawPoints;
		FColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CPath|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Draws path with points, for visualization only\n// Duration == 0 - draw for one frame\n// Duration < 0 - persistent\n" },
#endif
		{ "CPP_Default_Color", "(R=255,G=0,B=255,A=255)" },
		{ "CPP_Default_DrawPoints", "true" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws path with points, for visualization only\nDuration == 0 - draw for one frame\nDuration < 0 - persistent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_DrawPoints_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCPathNode, METADATA_PARAMS(0, nullptr) }; // 1717991457
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventDrawDebugPath_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) }; // 1717991457
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventDrawDebugPath_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_DrawPoints_SetBit(void* Obj)
{
	((CPathVolume_eventDrawDebugPath_Parms*)Obj)->DrawPoints = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_DrawPoints = { "DrawPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CPathVolume_eventDrawDebugPath_Parms), &Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_DrawPoints_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventDrawDebugPath_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_DrawPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPathVolume, nullptr, "DrawDebugPath", Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::CPathVolume_eventDrawDebugPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::CPathVolume_eventDrawDebugPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPathVolume_DrawDebugPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPathVolume_DrawDebugPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPathVolume::execDrawDebugPath)
{
	P_GET_TARRAY_REF(FCPathNode,Z_Param_Out_Path);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_DrawPoints);
	P_GET_STRUCT(FColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DrawDebugPath(Z_Param_Out_Path,Z_Param_Duration,Z_Param_DrawPoints,Z_Param_Color);
	P_NATIVE_END;
}
// ********** End Class ACPathVolume Function DrawDebugPath ****************************************

// ********** Begin Class ACPathVolume Function FindPathSynchronous ********************************
struct Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics
{
	struct CPathVolume_eventFindPathSynchronous_Parms
	{
		TEnumAsByte<BranchFailSuccessEnum> Branches;
		TArray<FCPathNode> Path;
		TEnumAsByte<ECPathfindingFailReason> FailReason;
		FVector Start;
		FVector End;
		int32 SmoothingPasses;
		int32 UserData;
		float TimeLimit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint exposed version\n// This searches for a path on this thread, so the result is available here and now.\n// Increase TimeLimit at your own risk. \n// Default time of 2ms means that in the worst case scenatio, this call will increse your frametime by 2ms!\n// Use this only for small graphs or very short paths (for example, <=1000 node graph)\n// Whenever possible, use FindPathAsync instead\n// IMPORTANT: When using with dynamic obstacles, this might fail with reason GraphNotGenerated while the graph is being updated!\n" },
#endif
		{ "CPP_Default_SmoothingPasses", "2" },
		{ "CPP_Default_TimeLimit", "0.002000" },
		{ "CPP_Default_UserData", "0" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint exposed version\nThis searches for a path on this thread, so the result is available here and now.\nIncrease TimeLimit at your own risk.\nDefault time of 2ms means that in the worst case scenatio, this call will increse your frametime by 2ms!\nUse this only for small graphs or very short paths (for example, <=1000 node graph)\nWhenever possible, use FindPathAsync instead\nIMPORTANT: When using with dynamic obstacles, this might fail with reason GraphNotGenerated while the graph is being updated!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Branches;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Path_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Path;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailReason;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingPasses;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventFindPathSynchronous_Parms, Branches), Z_Construct_UEnum_CPathfinding_BranchFailSuccessEnum, METADATA_PARAMS(0, nullptr) }; // 701982543
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_Path_Inner = { "Path", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCPathNode, METADATA_PARAMS(0, nullptr) }; // 1717991457
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventFindPathSynchronous_Parms, Path), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1717991457
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventFindPathSynchronous_Parms, FailReason), Z_Construct_UEnum_CPathfinding_ECPathfindingFailReason, METADATA_PARAMS(0, nullptr) }; // 4250217323
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventFindPathSynchronous_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventFindPathSynchronous_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_SmoothingPasses = { "SmoothingPasses", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventFindPathSynchronous_Parms, SmoothingPasses), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventFindPathSynchronous_Parms, UserData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPathVolume_eventFindPathSynchronous_Parms, TimeLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_Branches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_Path_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_FailReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_SmoothingPasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_UserData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::NewProp_TimeLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPathVolume, nullptr, "FindPathSynchronous", Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::CPathVolume_eventFindPathSynchronous_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::CPathVolume_eventFindPathSynchronous_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPathVolume_FindPathSynchronous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPathVolume_FindPathSynchronous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPathVolume::execFindPathSynchronous)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Branches);
	P_GET_TARRAY_REF(FCPathNode,Z_Param_Out_Path);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_FailReason);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FIntProperty,Z_Param_SmoothingPasses);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserData);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeLimit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindPathSynchronous((TEnumAsByte<BranchFailSuccessEnum>&)(Z_Param_Out_Branches),Z_Param_Out_Path,(TEnumAsByte<ECPathfindingFailReason>&)(Z_Param_Out_FailReason),Z_Param_Start,Z_Param_End,Z_Param_SmoothingPasses,Z_Param_UserData,Z_Param_TimeLimit);
	P_NATIVE_END;
}
// ********** End Class ACPathVolume Function FindPathSynchronous **********************************

// ********** Begin Class ACPathVolume *************************************************************
void ACPathVolume::StaticRegisterNativesACPathVolume()
{
	UClass* Class = ACPathVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DebugDrawNeighbours", &ACPathVolume::execDebugDrawNeighbours },
		{ "DrawDebugNodesAroundLocation", &ACPathVolume::execDrawDebugNodesAroundLocation },
		{ "DrawDebugPath", &ACPathVolume::execDrawDebugPath },
		{ "FindPathSynchronous", &ACPathVolume::execFindPathSynchronous },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPathVolume;
UClass* ACPathVolume::GetPrivateStaticClass()
{
	using TClass = ACPathVolume;
	if (!Z_Registration_Info_UClass_ACPathVolume.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPathVolume"),
			Z_Registration_Info_UClass_ACPathVolume.InnerSingleton,
			StaticRegisterNativesACPathVolume,
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
	return Z_Registration_Info_UClass_ACPathVolume.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPathVolume_NoRegister()
{
	return ACPathVolume::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPathVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPathVolume.h" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBox_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Box to mark the area to generate graph in. It should not be rotated, the rotation will be ignored.\n" },
#endif
		{ "EditCondition", "GenerationStarted==false" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box to mark the area to generate graph in. It should not be rotated, the rotation will be ignored." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "CPath" },
		{ "EditCondition", "GenerationStarted==false" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentShape_MetaData[] = {
		{ "Category", "CPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spports Capsule, sphere and box.\n" },
#endif
		{ "EditCondition", "GenerationStarted==false" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spports Capsule, sphere and box." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentRadius_MetaData[] = {
		{ "Category", "CPath" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In case of a box, this is X and Y extent. Z and Y should be the same, since the actual agent will most likely rotate.\n" },
#endif
		{ "EditCondition", "GenerationStarted==false" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In case of a box, this is X and Y extent. Z and Y should be the same, since the actual agent will most likely rotate." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentHalfHeight_MetaData[] = {
		{ "Category", "CPath" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In case of a box, this is Z extent.\n" },
#endif
		{ "EditCondition", "GenerationStarted==false && AgentShape!=EAgentShape::Sphere" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In case of a box, this is Z extent." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[] = {
		{ "Category", "CPath" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Size of the smallest voxel edge.\n// In most cases, setting this to min(AgentRadius, AgentHalfHeight)*2 is enough.\n// For precise (dense) graph - set this to min(AgentRadius, AgentHalfHeight).\n// Small values increase memory cost, and potentially CPU load.\n" },
#endif
		{ "EditCondition", "GenerationStarted==false" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the smallest voxel edge.\nIn most cases, setting this to min(AgentRadius, AgentHalfHeight)*2 is enough.\nFor precise (dense) graph - set this to min(AgentRadius, AgentHalfHeight).\nSmall values increase memory cost, and potentially CPU load." },
#endif
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicObstaclesUpdateRate_MetaData[] = {
		{ "Category", "CPath" },
		{ "ClampMax", "30" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How many times per second do parts of the volume get regenerated based on dynamic obstacles, in seconds.\n// Values higher than 5 are an overkill, but for the purpose of user freedom, I leave it unlocked.\n// If no dynamic obstacles were added, this doesnt have any performance impact\n" },
#endif
		{ "EditCondition", "GenerationStarted==false" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many times per second do parts of the volume get regenerated based on dynamic obstacles, in seconds.\nValues higher than 5 are an overkill, but for the purpose of user freedom, I leave it unlocked.\nIf no dynamic obstacles were added, this doesnt have any performance impact" },
#endif
		{ "UIMax", "30" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctreeDepth_MetaData[] = {
		{ "Category", "CPath" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2 Is optimal in most cases. If you have very large open speces with small amount of obstacles, then 3 will be better.\n// For dense labirynths with little to no open space, 1 or even 0 will be faster.\n// Check documentation for detailed performance guidance.\n" },
#endif
		{ "EditCondition", "GenerationStarted==false" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2 Is optimal in most cases. If you have very large open speces with small amount of obstacles, then 3 will be better.\nFor dense labirynths with little to no open space, 1 or even 0 will be faster.\nCheck documentation for detailed performance guidance." },
#endif
		{ "UIMax", "3" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateOnBeginPlay_MetaData[] = {
		{ "Category", "CPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If want to call Generate() later or with some condition.\n// Note that volume wont be usable before it is generated\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If want to call Generate() later or with some condition.\nNote that volume wont be usable before it is generated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwriteMaxGenerationThreads_MetaData[] = {
		{ "Category", "CPath" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set a custom generation thread limit. By default, it's system's Physical Core count - 1.\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a custom generation thread limit. By default, it's system's Physical Core count - 1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGenerationThreads_MetaData[] = {
		{ "Category", "CPath" },
		{ "ClampMax", "31" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How many threads can graph generation split into. \n// If left <=0 (RECOMMENDED), it uses system's Physical Core count - 1. \n// Generation threads are allocated dynamically, so it only uses more than 1 thread when necessary.\n" },
#endif
		{ "EditCondition", "GenerationStarted==false && OverwriteMaxGenerationThreads==true" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many threads can graph generation split into.\nIf left <=0 (RECOMMENDED), it uses system's Physical Core count - 1.\nGeneration threads are allocated dynamically, so it only uses more than 1 thread when necessary." },
#endif
		{ "UIMax", "31" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawFree_MetaData[] = {
		{ "Category", "CPath|Render" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawOccupied_MetaData[] = {
		{ "Category", "CPath|Render" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthsToDraw_MetaData[] = {
		{ "Category", "CPath|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You can hide selected depths from rendering\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You can hide selected depths from rendering" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugBoxesThickness_MetaData[] = {
		{ "Category", "CPath|Render" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How thick should the green and red debug boxes be\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How thick should the green and red debug boxes be" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugPathThickness_MetaData[] = {
		{ "Category", "CPath|Render" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationStarted_MetaData[] = {
		{ "Category", "CPath|Info" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OctreeCountAtDepth_MetaData[] = {
		{ "Category", "CPath|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a read only info about initially generated graph\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a read only info about initially generated graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalNodeCount_MetaData[] = {
		{ "Category", "CPath|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is a read only info about initially generated graph\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is a read only info about initially generated graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialGenerationFinished_MetaData[] = {
		{ "Category", "CPath|Info" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Before this is true, the graph is inoperable\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Before this is true, the graph is inoperable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformBenchmarkAfterGeneration_MetaData[] = {
		{ "Category", "CPath|Benchmark" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// WARNING: This will freeze the game for the benchmark duration!\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WARNING: This will freeze the game for the benchmark duration!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BenchmarkDurationSeconds_MetaData[] = {
		{ "Category", "CPath|Benchmark" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Benchmark duration in seconds\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Benchmark duration in seconds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BenchmarkFindPathUserData_MetaData[] = {
		{ "Category", "CPath|Benchmark" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BenchmarkFindPathTimeLimit_MetaData[] = {
		{ "Category", "CPath|Benchmark" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BenchmarkName_MetaData[] = {
		{ "Category", "CPath|Benchmark" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveBenchmarkResultToFile_MetaData[] = {
		{ "Category", "CPath|Benchmark" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveBenchmarksWithUnreliableResults_MetaData[] = {
		{ "Category", "CPath|Benchmark" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if sample size of successful searches is too low, don't save the results to file\n" },
#endif
		{ "EditCondition", "SaveBenchmarkResultToFile==true" },
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if sample size of successful searches is too low, don't save the results to file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This is for find path requests, shouldn't be accessed directly unless you know what you're doing\n// UPROPERTY() is here so that UE's garabge collector doesn't randomly\n// decide that this is useless and destroy it -_-\n" },
#endif
		{ "ModuleRelativePath", "Public/CPathVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is for find path requests, shouldn't be accessed directly unless you know what you're doing\nUPROPERTY() is here so that UE's garabge collector doesn't randomly\ndecide that this is useless and destroy it -_-" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeBox;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AgentShape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AgentHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicObstaclesUpdateRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OctreeDepth;
	static void NewProp_GenerateOnBeginPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateOnBeginPlay;
	static void NewProp_OverwriteMaxGenerationThreads_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteMaxGenerationThreads;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGenerationThreads;
	static void NewProp_DrawFree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawFree;
	static void NewProp_DrawOccupied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawOccupied;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DepthsToDraw_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DepthsToDraw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugBoxesThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugPathThickness;
	static void NewProp_GenerationStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerationStarted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OctreeCountAtDepth_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OctreeCountAtDepth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNodeCount;
	static void NewProp_InitialGenerationFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InitialGenerationFinished;
	static void NewProp_PerformBenchmarkAfterGeneration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PerformBenchmarkAfterGeneration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BenchmarkDurationSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BenchmarkFindPathUserData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BenchmarkFindPathTimeLimit;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BenchmarkName;
	static void NewProp_SaveBenchmarkResultToFile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveBenchmarkResultToFile;
	static void NewProp_SaveBenchmarksWithUnreliableResults_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveBenchmarksWithUnreliableResults;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoreInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPathVolume_DebugDrawNeighbours, "DebugDrawNeighbours" }, // 1698179179
		{ &Z_Construct_UFunction_ACPathVolume_DrawDebugNodesAroundLocation, "DrawDebugNodesAroundLocation" }, // 2586926386
		{ &Z_Construct_UFunction_ACPathVolume_DrawDebugPath, "DrawDebugPath" }, // 2387217279
		{ &Z_Construct_UFunction_ACPathVolume_FindPathSynchronous, "FindPathSynchronous" }, // 2062123850
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPathVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_VolumeBox = { "VolumeBox", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, VolumeBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeBox_MetaData), NewProp_VolumeBox_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_AgentShape = { "AgentShape", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, AgentShape), Z_Construct_UEnum_CPathfinding_EAgentShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentShape_MetaData), NewProp_AgentShape_MetaData) }; // 3991755297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_AgentRadius = { "AgentRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, AgentRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentRadius_MetaData), NewProp_AgentRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_AgentHalfHeight = { "AgentHalfHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, AgentHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentHalfHeight_MetaData), NewProp_AgentHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, VoxelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelSize_MetaData), NewProp_VoxelSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_DynamicObstaclesUpdateRate = { "DynamicObstaclesUpdateRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, DynamicObstaclesUpdateRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicObstaclesUpdateRate_MetaData), NewProp_DynamicObstaclesUpdateRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_OctreeDepth = { "OctreeDepth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, OctreeDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctreeDepth_MetaData), NewProp_OctreeDepth_MetaData) };
void Z_Construct_UClass_ACPathVolume_Statics::NewProp_GenerateOnBeginPlay_SetBit(void* Obj)
{
	((ACPathVolume*)Obj)->GenerateOnBeginPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_GenerateOnBeginPlay = { "GenerateOnBeginPlay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPathVolume), &Z_Construct_UClass_ACPathVolume_Statics::NewProp_GenerateOnBeginPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateOnBeginPlay_MetaData), NewProp_GenerateOnBeginPlay_MetaData) };
void Z_Construct_UClass_ACPathVolume_Statics::NewProp_OverwriteMaxGenerationThreads_SetBit(void* Obj)
{
	((ACPathVolume*)Obj)->OverwriteMaxGenerationThreads = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_OverwriteMaxGenerationThreads = { "OverwriteMaxGenerationThreads", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPathVolume), &Z_Construct_UClass_ACPathVolume_Statics::NewProp_OverwriteMaxGenerationThreads_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwriteMaxGenerationThreads_MetaData), NewProp_OverwriteMaxGenerationThreads_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_MaxGenerationThreads = { "MaxGenerationThreads", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, MaxGenerationThreads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGenerationThreads_MetaData), NewProp_MaxGenerationThreads_MetaData) };
void Z_Construct_UClass_ACPathVolume_Statics::NewProp_DrawFree_SetBit(void* Obj)
{
	((ACPathVolume*)Obj)->DrawFree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_DrawFree = { "DrawFree", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPathVolume), &Z_Construct_UClass_ACPathVolume_Statics::NewProp_DrawFree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawFree_MetaData), NewProp_DrawFree_MetaData) };
void Z_Construct_UClass_ACPathVolume_Statics::NewProp_DrawOccupied_SetBit(void* Obj)
{
	((ACPathVolume*)Obj)->DrawOccupied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_DrawOccupied = { "DrawOccupied", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPathVolume), &Z_Construct_UClass_ACPathVolume_Statics::NewProp_DrawOccupied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawOccupied_MetaData), NewProp_DrawOccupied_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_DepthsToDraw_Inner = { "DepthsToDraw", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_DepthsToDraw = { "DepthsToDraw", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, DepthsToDraw), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthsToDraw_MetaData), NewProp_DepthsToDraw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_DebugBoxesThickness = { "DebugBoxesThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, DebugBoxesThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugBoxesThickness_MetaData), NewProp_DebugBoxesThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_DebugPathThickness = { "DebugPathThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, DebugPathThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugPathThickness_MetaData), NewProp_DebugPathThickness_MetaData) };
void Z_Construct_UClass_ACPathVolume_Statics::NewProp_GenerationStarted_SetBit(void* Obj)
{
	((ACPathVolume*)Obj)->GenerationStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_GenerationStarted = { "GenerationStarted", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPathVolume), &Z_Construct_UClass_ACPathVolume_Statics::NewProp_GenerationStarted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationStarted_MetaData), NewProp_GenerationStarted_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_OctreeCountAtDepth_Inner = { "OctreeCountAtDepth", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_OctreeCountAtDepth = { "OctreeCountAtDepth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, OctreeCountAtDepth), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OctreeCountAtDepth_MetaData), NewProp_OctreeCountAtDepth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_TotalNodeCount = { "TotalNodeCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, TotalNodeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalNodeCount_MetaData), NewProp_TotalNodeCount_MetaData) };
void Z_Construct_UClass_ACPathVolume_Statics::NewProp_InitialGenerationFinished_SetBit(void* Obj)
{
	((ACPathVolume*)Obj)->InitialGenerationFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_InitialGenerationFinished = { "InitialGenerationFinished", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPathVolume), &Z_Construct_UClass_ACPathVolume_Statics::NewProp_InitialGenerationFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialGenerationFinished_MetaData), NewProp_InitialGenerationFinished_MetaData) };
void Z_Construct_UClass_ACPathVolume_Statics::NewProp_PerformBenchmarkAfterGeneration_SetBit(void* Obj)
{
	((ACPathVolume*)Obj)->PerformBenchmarkAfterGeneration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_PerformBenchmarkAfterGeneration = { "PerformBenchmarkAfterGeneration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPathVolume), &Z_Construct_UClass_ACPathVolume_Statics::NewProp_PerformBenchmarkAfterGeneration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformBenchmarkAfterGeneration_MetaData), NewProp_PerformBenchmarkAfterGeneration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_BenchmarkDurationSeconds = { "BenchmarkDurationSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, BenchmarkDurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BenchmarkDurationSeconds_MetaData), NewProp_BenchmarkDurationSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_BenchmarkFindPathUserData = { "BenchmarkFindPathUserData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, BenchmarkFindPathUserData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BenchmarkFindPathUserData_MetaData), NewProp_BenchmarkFindPathUserData_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_BenchmarkFindPathTimeLimit = { "BenchmarkFindPathTimeLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, BenchmarkFindPathTimeLimit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BenchmarkFindPathTimeLimit_MetaData), NewProp_BenchmarkFindPathTimeLimit_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_BenchmarkName = { "BenchmarkName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, BenchmarkName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BenchmarkName_MetaData), NewProp_BenchmarkName_MetaData) };
void Z_Construct_UClass_ACPathVolume_Statics::NewProp_SaveBenchmarkResultToFile_SetBit(void* Obj)
{
	((ACPathVolume*)Obj)->SaveBenchmarkResultToFile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_SaveBenchmarkResultToFile = { "SaveBenchmarkResultToFile", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPathVolume), &Z_Construct_UClass_ACPathVolume_Statics::NewProp_SaveBenchmarkResultToFile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveBenchmarkResultToFile_MetaData), NewProp_SaveBenchmarkResultToFile_MetaData) };
void Z_Construct_UClass_ACPathVolume_Statics::NewProp_SaveBenchmarksWithUnreliableResults_SetBit(void* Obj)
{
	((ACPathVolume*)Obj)->SaveBenchmarksWithUnreliableResults = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_SaveBenchmarksWithUnreliableResults = { "SaveBenchmarksWithUnreliableResults", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACPathVolume), &Z_Construct_UClass_ACPathVolume_Statics::NewProp_SaveBenchmarksWithUnreliableResults_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveBenchmarksWithUnreliableResults_MetaData), NewProp_SaveBenchmarksWithUnreliableResults_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPathVolume_Statics::NewProp_CoreInstance = { "CoreInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPathVolume, CoreInstance), Z_Construct_UClass_ACPathCore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreInstance_MetaData), NewProp_CoreInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPathVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_VolumeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_AgentShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_AgentRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_AgentHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_VoxelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_DynamicObstaclesUpdateRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_OctreeDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_GenerateOnBeginPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_OverwriteMaxGenerationThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_MaxGenerationThreads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_DrawFree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_DrawOccupied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_DepthsToDraw_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_DepthsToDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_DebugBoxesThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_DebugPathThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_GenerationStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_OctreeCountAtDepth_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_OctreeCountAtDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_TotalNodeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_InitialGenerationFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_PerformBenchmarkAfterGeneration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_BenchmarkDurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_BenchmarkFindPathUserData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_BenchmarkFindPathTimeLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_BenchmarkName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_SaveBenchmarkResultToFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_SaveBenchmarksWithUnreliableResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPathVolume_Statics::NewProp_CoreInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPathVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPathVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CPathfinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPathVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPathVolume_Statics::ClassParams = {
	&ACPathVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPathVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPathVolume_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPathVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPathVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPathVolume()
{
	if (!Z_Registration_Info_UClass_ACPathVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPathVolume.OuterSingleton, Z_Construct_UClass_ACPathVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPathVolume.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPathVolume);
ACPathVolume::~ACPathVolume() {}
// ********** End Class ACPathVolume ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h__Script_CPathfinding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPathVolume, ACPathVolume::StaticClass, TEXT("ACPathVolume"), &Z_Registration_Info_UClass_ACPathVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPathVolume), 934734777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h__Script_CPathfinding_3854524558(TEXT("/Script/CPathfinding"),
	Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h__Script_CPathfinding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WORK_SOL_DRIFT_SOL_DRIFT_P4_Plugins_CPathfinding_Source_CPathfinding_Public_CPathVolume_h__Script_CPathfinding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
