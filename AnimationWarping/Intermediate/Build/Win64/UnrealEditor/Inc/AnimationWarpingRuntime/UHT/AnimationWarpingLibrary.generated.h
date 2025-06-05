// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationWarpingLibrary.h"

#ifdef ANIMATIONWARPINGRUNTIME_AnimationWarpingLibrary_generated_h
#error "AnimationWarpingLibrary.generated.h already included, missing '#pragma once' in AnimationWarpingLibrary.h"
#endif
#define ANIMATIONWARPINGRUNTIME_AnimationWarpingLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAnimSequenceBase;
struct FAnimNodeReference;

// ********** Begin Class UAnimationWarpingLibrary *************************************************
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurveValueFromAnimation); \
	DECLARE_FUNCTION(execGetOffsetRootTransform);


ANIMATIONWARPINGRUNTIME_API UClass* Z_Construct_UClass_UAnimationWarpingLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationWarpingLibrary(); \
	friend struct Z_Construct_UClass_UAnimationWarpingLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATIONWARPINGRUNTIME_API UClass* Z_Construct_UClass_UAnimationWarpingLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimationWarpingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationWarpingRuntime"), Z_Construct_UClass_UAnimationWarpingLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAnimationWarpingLibrary)


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMATIONWARPINGRUNTIME_API UAnimationWarpingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimationWarpingLibrary(UAnimationWarpingLibrary&&) = delete; \
	UAnimationWarpingLibrary(const UAnimationWarpingLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMATIONWARPINGRUNTIME_API, UAnimationWarpingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationWarpingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationWarpingLibrary) \
	ANIMATIONWARPINGRUNTIME_API virtual ~UAnimationWarpingLibrary();


#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_15_PROLOG
#define FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimationWarpingLibrary;

// ********** End Class UAnimationWarpingLibrary ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_AnimationWarpingLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
