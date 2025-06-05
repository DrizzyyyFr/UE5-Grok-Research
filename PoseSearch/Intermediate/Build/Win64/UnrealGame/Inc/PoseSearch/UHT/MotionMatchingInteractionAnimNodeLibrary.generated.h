// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/MotionMatchingInteractionAnimNodeLibrary.h"

#ifdef POSESEARCH_MotionMatchingInteractionAnimNodeLibrary_generated_h
#error "MotionMatchingInteractionAnimNodeLibrary.generated.h already included, missing '#pragma once' in MotionMatchingInteractionAnimNodeLibrary.h"
#endif
#define POSESEARCH_MotionMatchingInteractionAnimNodeLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FMotionMatchingInteractionAnimNodeReference;
struct FPoseSearchInteractionAvailability;

// ********** Begin ScriptStruct FMotionMatchingInteractionAnimNodeReference ***********************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionMatchingInteractionAnimNodeReference_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FMotionMatchingInteractionAnimNodeReference;
// ********** End ScriptStruct FMotionMatchingInteractionAnimNodeReference *************************

// ********** Begin Class UMotionMatchingInteractionAnimNodeLibrary ********************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsInteracting); \
	DECLARE_FUNCTION(execSetAvailabilities); \
	DECLARE_FUNCTION(execConvertToMotionMatchingInteractionNodePure); \
	DECLARE_FUNCTION(execConvertToMotionMatchingInteractionNode);


POSESEARCH_API UClass* Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionMatchingInteractionAnimNodeLibrary(); \
	friend struct Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionMatchingInteractionAnimNodeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UMotionMatchingInteractionAnimNodeLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMotionMatchingInteractionAnimNodeLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UMotionMatchingInteractionAnimNodeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionMatchingInteractionAnimNodeLibrary(UMotionMatchingInteractionAnimNodeLibrary&&) = delete; \
	UMotionMatchingInteractionAnimNodeLibrary(const UMotionMatchingInteractionAnimNodeLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UMotionMatchingInteractionAnimNodeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionMatchingInteractionAnimNodeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionMatchingInteractionAnimNodeLibrary) \
	POSESEARCH_API virtual ~UMotionMatchingInteractionAnimNodeLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_22_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionMatchingInteractionAnimNodeLibrary;

// ********** End Class UMotionMatchingInteractionAnimNodeLibrary **********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingInteractionAnimNodeLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
