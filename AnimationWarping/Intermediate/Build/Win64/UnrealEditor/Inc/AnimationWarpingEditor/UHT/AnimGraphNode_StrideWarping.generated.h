// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraph/AnimGraphNode_StrideWarping.h"

#ifdef ANIMATIONWARPINGEDITOR_AnimGraphNode_StrideWarping_generated_h
#error "AnimGraphNode_StrideWarping.generated.h already included, missing '#pragma once' in AnimGraphNode_StrideWarping.h"
#endif
#define ANIMATIONWARPINGEDITOR_AnimGraphNode_StrideWarping_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_StrideWarping *********************************************
ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_StrideWarping_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_StrideWarping_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_StrideWarping(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_StrideWarping_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_StrideWarping_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_StrideWarping, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationWarpingEditor"), Z_Construct_UClass_UAnimGraphNode_StrideWarping_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_StrideWarping)


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_StrideWarping_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_StrideWarping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_StrideWarping) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_StrideWarping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_StrideWarping); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_StrideWarping(UAnimGraphNode_StrideWarping&&) = delete; \
	UAnimGraphNode_StrideWarping(const UAnimGraphNode_StrideWarping&) = delete; \
	NO_API virtual ~UAnimGraphNode_StrideWarping();


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_StrideWarping_h_12_PROLOG
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_StrideWarping_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_StrideWarping_h_15_INCLASS \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_StrideWarping_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_StrideWarping;

// ********** End Class UAnimGraphNode_StrideWarping ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_StrideWarping_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
