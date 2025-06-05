// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchInteractionLibrary.h"

#ifdef POSESEARCH_PoseSearchInteractionLibrary_generated_h
#error "PoseSearchInteractionLibrary.generated.h already included, missing '#pragma once' in PoseSearchInteractionLibrary.h"
#endif
#define POSESEARCH_PoseSearchInteractionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAnimInstance;
class UObject;
struct FPoseSearchBlueprintResult;
struct FPoseSearchContinuingProperties;
struct FPoseSearchInteractionAvailability;

// ********** Begin Class UPoseSearchInteractionLibrary ********************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMontageContinuingProperties); \
	DECLARE_FUNCTION(execMotionMatchInteraction); \
	DECLARE_FUNCTION(execMotionMatchInteraction_Pure);


POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchInteractionLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchInteractionLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchInteractionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchInteractionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchInteractionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchInteractionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchInteractionLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchInteractionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchInteractionLibrary(UPoseSearchInteractionLibrary&&) = delete; \
	UPoseSearchInteractionLibrary(const UPoseSearchInteractionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchInteractionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchInteractionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchInteractionLibrary) \
	POSESEARCH_API virtual ~UPoseSearchInteractionLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_12_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchInteractionLibrary;

// ********** End Class UPoseSearchInteractionLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
