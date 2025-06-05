// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchLibrary.h"

#ifdef POSESEARCH_PoseSearchLibrary_generated_h
#error "PoseSearchLibrary.generated.h already included, missing '#pragma once' in PoseSearchLibrary.h"
#endif
#define POSESEARCH_PoseSearchLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAnimInstance;
class UObject;
class UPoseSearchDatabase;
struct FPoseSearchBlueprintResult;
struct FPoseSearchContinuingProperties;
struct FPoseSearchFutureProperties;

// ********** Begin ScriptStruct FMotionMatchingState **********************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionMatchingState_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FMotionMatchingState;
// ********** End ScriptStruct FMotionMatchingState ************************************************

// ********** Begin ScriptStruct FPoseSearchFutureProperties ***************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchFutureProperties_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchFutureProperties;
// ********** End ScriptStruct FPoseSearchFutureProperties *****************************************

// ********** Begin ScriptStruct FPoseSearchContinuingProperties ***********************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchContinuingProperties_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchContinuingProperties;
// ********** End ScriptStruct FPoseSearchContinuingProperties *************************************

// ********** Begin Class UPoseSearchLibrary *******************************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDatabaseTags); \
	DECLARE_FUNCTION(execIsAnimationAssetLooping); \
	DECLARE_FUNCTION(execMotionMatch);


POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchLibrary(UPoseSearchLibrary&&) = delete; \
	UPoseSearchLibrary(const UPoseSearchLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchLibrary) \
	POSESEARCH_API virtual ~UPoseSearchLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_143_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchLibrary;

// ********** End Class UPoseSearchLibrary *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchLibrary_h

// ********** Begin Enum EPoseSearchInterruptMode **************************************************
#define FOREACH_ENUM_EPOSESEARCHINTERRUPTMODE(op) \
	op(EPoseSearchInterruptMode::DoNotInterrupt) \
	op(EPoseSearchInterruptMode::InterruptOnDatabaseChange) \
	op(EPoseSearchInterruptMode::InterruptOnDatabaseChangeAndInvalidateContinuingPose) \
	op(EPoseSearchInterruptMode::ForceInterrupt) \
	op(EPoseSearchInterruptMode::ForceInterruptAndInvalidateContinuingPose) 

enum class EPoseSearchInterruptMode : uint8;
template<> struct TIsUEnumClass<EPoseSearchInterruptMode> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchInterruptMode>();
// ********** End Enum EPoseSearchInterruptMode ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
