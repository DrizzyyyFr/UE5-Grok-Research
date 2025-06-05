// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_OrientationWarping.h"

#ifdef ANIMATIONWARPINGRUNTIME_AnimNode_OrientationWarping_generated_h
#error "AnimNode_OrientationWarping.generated.h already included, missing '#pragma once' in AnimNode_OrientationWarping.h"
#endif
#define ANIMATIONWARPINGRUNTIME_AnimNode_OrientationWarping_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAnimNode_OrientationWarping **************************************
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


struct FAnimNode_OrientationWarping;
// ********** End ScriptStruct FAnimNode_OrientationWarping ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h

// ********** Begin Enum EOrientationWarpingSpace **************************************************
#define FOREACH_ENUM_EORIENTATIONWARPINGSPACE(op) \
	op(EOrientationWarpingSpace::ComponentTransform) \
	op(EOrientationWarpingSpace::RootBoneTransform) \
	op(EOrientationWarpingSpace::CustomTransform) 

enum class EOrientationWarpingSpace : uint8;
template<> struct TIsUEnumClass<EOrientationWarpingSpace> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EOrientationWarpingSpace>();
// ********** End Enum EOrientationWarpingSpace ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
