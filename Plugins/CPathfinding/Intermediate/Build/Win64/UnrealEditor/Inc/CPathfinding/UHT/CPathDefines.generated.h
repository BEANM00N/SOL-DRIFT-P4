// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPathDefines.h"

#ifdef CPATHFINDING_CPathDefines_generated_h
#error "CPathDefines.generated.h already included, missing '#pragma once' in CPathDefines.h"
#endif
#define CPATHFINDING_CPathDefines_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SOL_DRIFT_5_6_Plugins_CPathfinding_Source_CPathfinding_Public_CPathDefines_h

// ********** Begin Enum EAgentShape ***************************************************************
#define FOREACH_ENUM_EAGENTSHAPE(op) \
	op(Capsule) \
	op(Box) \
	op(Sphere) 
// ********** End Enum EAgentShape *****************************************************************

// ********** Begin Enum ECPathfindingFailReason ***************************************************
#define FOREACH_ENUM_ECPATHFINDINGFAILREASON(op) \
	op(None) \
	op(VolumeNotValid) \
	op(VolumeNotGenerated) \
	op(Timeout) \
	op(WrongStartLocation) \
	op(WrongEndLocation) \
	op(EndLocationUnreachable) \
	op(Unknown) 
// ********** End Enum ECPathfindingFailReason *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
