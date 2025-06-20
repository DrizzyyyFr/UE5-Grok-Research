// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraphNode_MotionMatching.h"

#ifdef POSESEARCHEDITOR_AnimGraphNode_MotionMatching_generated_h
#error "AnimGraphNode_MotionMatching.generated.h already included, missing '#pragma once' in AnimGraphNode_MotionMatching.h"
#endif
#define POSESEARCHEDITOR_AnimGraphNode_MotionMatching_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_MotionMatching ********************************************
POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_MotionMatching_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_MotionMatching(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_MotionMatching_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_MotionMatching_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_MotionMatching, UAnimGraphNode_BlendStack_Base, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), Z_Construct_UClass_UAnimGraphNode_MotionMatching_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_MotionMatching)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCHEDITOR_API UAnimGraphNode_MotionMatching(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_MotionMatching(UAnimGraphNode_MotionMatching&&) = delete; \
	UAnimGraphNode_MotionMatching(const UAnimGraphNode_MotionMatching&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCHEDITOR_API, UAnimGraphNode_MotionMatching); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_MotionMatching); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_MotionMatching) \
	POSESEARCHEDITOR_API virtual ~UAnimGraphNode_MotionMatching();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_13_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_MotionMatching;

// ********** End Class UAnimGraphNode_MotionMatching **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_AnimGraphNode_MotionMatching_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
