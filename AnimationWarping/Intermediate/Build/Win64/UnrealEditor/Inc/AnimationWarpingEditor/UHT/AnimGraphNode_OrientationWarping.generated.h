// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraph/AnimGraphNode_OrientationWarping.h"

#ifdef ANIMATIONWARPINGEDITOR_AnimGraphNode_OrientationWarping_generated_h
#error "AnimGraphNode_OrientationWarping.generated.h already included, missing '#pragma once' in AnimGraphNode_OrientationWarping.h"
#endif
#define ANIMATIONWARPINGEDITOR_AnimGraphNode_OrientationWarping_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_OrientationWarping ****************************************
ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_OrientationWarping_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_OrientationWarping_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_OrientationWarping(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_OrientationWarping_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_OrientationWarping_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_OrientationWarping, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationWarpingEditor"), Z_Construct_UClass_UAnimGraphNode_OrientationWarping_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_OrientationWarping)


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_OrientationWarping_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_OrientationWarping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_OrientationWarping) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_OrientationWarping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_OrientationWarping); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_OrientationWarping(UAnimGraphNode_OrientationWarping&&) = delete; \
	UAnimGraphNode_OrientationWarping(const UAnimGraphNode_OrientationWarping&) = delete; \
	NO_API virtual ~UAnimGraphNode_OrientationWarping();


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_OrientationWarping_h_10_PROLOG
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_OrientationWarping_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_OrientationWarping_h_13_INCLASS \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_OrientationWarping_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_OrientationWarping;

// ********** End Class UAnimGraphNode_OrientationWarping ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_OrientationWarping_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
