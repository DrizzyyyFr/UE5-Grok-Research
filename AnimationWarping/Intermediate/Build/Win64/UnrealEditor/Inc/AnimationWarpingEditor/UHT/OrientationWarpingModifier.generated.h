// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationModifiers/OrientationWarpingModifier.h"

#ifdef ANIMATIONWARPINGEDITOR_OrientationWarpingModifier_generated_h
#error "OrientationWarpingModifier.generated.h already included, missing '#pragma once' in OrientationWarpingModifier.h"
#endif
#define ANIMATIONWARPINGEDITOR_OrientationWarpingModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOrientationWarpingModifier **********************************************
ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UOrientationWarpingModifier_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOrientationWarpingModifier(); \
	friend struct Z_Construct_UClass_UOrientationWarpingModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONWARPINGEDITOR_API UClass* Z_Construct_UClass_UOrientationWarpingModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UOrientationWarpingModifier, UAnimationModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationWarpingEditor"), Z_Construct_UClass_UOrientationWarpingModifier_NoRegister) \
	DECLARE_SERIALIZER(UOrientationWarpingModifier)


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOrientationWarpingModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOrientationWarpingModifier(UOrientationWarpingModifier&&) = delete; \
	UOrientationWarpingModifier(const UOrientationWarpingModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOrientationWarpingModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOrientationWarpingModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOrientationWarpingModifier) \
	NO_API virtual ~UOrientationWarpingModifier();


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_11_PROLOG
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOrientationWarpingModifier;

// ********** End Class UOrientationWarpingModifier ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Editor_Public_AnimationModifiers_OrientationWarpingModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
