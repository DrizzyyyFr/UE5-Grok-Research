// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_MotionMatchingInteraction.h"

#ifdef POSESEARCHEDITOR_AnimGraphNode_MotionMatchingInteraction_generated_h
#error "AnimGraphNode_MotionMatchingInteraction.generated.h already included, missing '#pragma once' in AnimGraphNode_MotionMatchingInteraction.h"
#endif
#define POSESEARCHEDITOR_AnimGraphNode_MotionMatchingInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_MotionMatchingInteraction *********************************
POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_MotionMatchingInteraction_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatchingInteraction_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_MotionMatchingInteraction(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_MotionMatchingInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_MotionMatchingInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_MotionMatchingInteraction, UAnimGraphNode_BlendStack_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), Z_Construct_UClass_UAnimGraphNode_MotionMatchingInteraction_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_MotionMatchingInteraction)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatchingInteraction_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_MotionMatchingInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_MotionMatchingInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_MotionMatchingInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_MotionMatchingInteraction); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_MotionMatchingInteraction(UAnimGraphNode_MotionMatchingInteraction&&) = delete; \
	UAnimGraphNode_MotionMatchingInteraction(const UAnimGraphNode_MotionMatchingInteraction&) = delete; \
	NO_API virtual ~UAnimGraphNode_MotionMatchingInteraction();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatchingInteraction_h_9_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatchingInteraction_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatchingInteraction_h_12_INCLASS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatchingInteraction_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_MotionMatchingInteraction;

// ********** End Class UAnimGraphNode_MotionMatchingInteraction ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatchingInteraction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
