// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_FootPlacement.h"

#ifdef ANIMATIONWARPINGRUNTIME_AnimNode_FootPlacement_generated_h
#error "AnimNode_FootPlacement.generated.h already included, missing '#pragma once' in AnimNode_FootPlacement.h"
#endif
#define ANIMATIONWARPINGRUNTIME_AnimNode_FootPlacement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFootPlacementInterpolationSettings *******************************
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_233_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


struct FFootPlacementInterpolationSettings;
// ********** End ScriptStruct FFootPlacementInterpolationSettings *********************************

// ********** Begin ScriptStruct FFootPlacementTraceSettings ***************************************
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_279_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


struct FFootPlacementTraceSettings;
// ********** End ScriptStruct FFootPlacementTraceSettings *****************************************

// ********** Begin ScriptStruct FFootPlacementRootDefinition **************************************
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_321_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


struct FFootPlacementRootDefinition;
// ********** End ScriptStruct FFootPlacementRootDefinition ****************************************

// ********** Begin ScriptStruct FFootPlacementPelvisSettings **************************************
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_364_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


struct FFootPlacementPelvisSettings;
// ********** End ScriptStruct FFootPlacementPelvisSettings ****************************************

// ********** Begin ScriptStruct FFootPlacemenLegDefinition ****************************************
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_417_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


struct FFootPlacemenLegDefinition;
// ********** End ScriptStruct FFootPlacemenLegDefinition ******************************************

// ********** Begin ScriptStruct FFootPlacementPlantSettings ***************************************
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_456_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct();


struct FFootPlacementPlantSettings;
// ********** End ScriptStruct FFootPlacementPlantSettings *****************************************

// ********** Begin ScriptStruct FAnimNode_FootPlacement *******************************************
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_525_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics; \
	ANIMATIONWARPINGRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


struct FAnimNode_FootPlacement;
// ********** End ScriptStruct FAnimNode_FootPlacement *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h

// ********** Begin Enum EFootPlacementLockType ****************************************************
#define FOREACH_ENUM_EFOOTPLACEMENTLOCKTYPE(op) \
	op(EFootPlacementLockType::Unlocked) \
	op(EFootPlacementLockType::PivotAroundBall) \
	op(EFootPlacementLockType::PivotAroundAnkle) \
	op(EFootPlacementLockType::LockRotation) 

enum class EFootPlacementLockType : uint8;
template<> struct TIsUEnumClass<EFootPlacementLockType> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EFootPlacementLockType>();
// ********** End Enum EFootPlacementLockType ******************************************************

// ********** Begin Enum EPelvisHeightMode *********************************************************
#define FOREACH_ENUM_EPELVISHEIGHTMODE(op) \
	op(EPelvisHeightMode::AllLegs) \
	op(EPelvisHeightMode::AllPlantedFeet) \
	op(EPelvisHeightMode::FrontPlantedFeetUphill_FrontFeetDownhill) 

enum class EPelvisHeightMode : uint8;
template<> struct TIsUEnumClass<EPelvisHeightMode> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EPelvisHeightMode>();
// ********** End Enum EPelvisHeightMode ***********************************************************

// ********** Begin Enum EActorMovementCompensationMode ********************************************
#define FOREACH_ENUM_EACTORMOVEMENTCOMPENSATIONMODE(op) \
	op(EActorMovementCompensationMode::ComponentSpace) \
	op(EActorMovementCompensationMode::WorldSpace) \
	op(EActorMovementCompensationMode::SuddenMotionOnly) 

enum class EActorMovementCompensationMode : uint8;
template<> struct TIsUEnumClass<EActorMovementCompensationMode> { enum { Value = true }; };
template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EActorMovementCompensationMode>();
// ********** End Enum EActorMovementCompensationMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
