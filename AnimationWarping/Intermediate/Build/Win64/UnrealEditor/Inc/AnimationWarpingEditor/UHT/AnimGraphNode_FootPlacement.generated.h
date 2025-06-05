// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimGraph/AnimGraphNode_FootPlacement.h"

#ifdef ANIMATIONWARPINGEDITOR_AnimGraphNode_FootPlacement_generated_h
#error "AnimGraphNode_FootPlacement.generated.h already included, missing '#pragma once' in AnimGraphNode_FootPlacement.h"
#endif
#define ANIMATIONWARPINGEDITOR_AnimGraphNode_FootPlacement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAnimGraphNode_FootPlacement *********************************************
ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacement_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_FootPlacement_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimGraphNode_FootPlacement(); \
	friend struct Z_Construct_UClass_UAnimGraphNode_FootPlacement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacement_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimGraphNode_FootPlacement, UAnimGraphNode_SkeletalControlBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationWarpingEditor"), Z_Construct_UClass_UAnimGraphNode_FootPlacement_NoRegister) \
	DECLARE_SERIALIZER(UAnimGraphNode_FootPlacement)


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_FootPlacement_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimGraphNode_FootPlacement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimGraphNode_FootPlacement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimGraphNode_FootPlacement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimGraphNode_FootPlacement); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimGraphNode_FootPlacement(UAnimGraphNode_FootPlacement&&) = delete; \
	UAnimGraphNode_FootPlacement(const UAnimGraphNode_FootPlacement&) = delete; \
	NO_API virtual ~UAnimGraphNode_FootPlacement();


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_FootPlacement_h_10_PROLOG
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_FootPlacement_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_FootPlacement_h_13_INCLASS \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_FootPlacement_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimGraphNode_FootPlacement;

// ********** End Class UAnimGraphNode_FootPlacement ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimGraph_AnimGraphNode_FootPlacement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
