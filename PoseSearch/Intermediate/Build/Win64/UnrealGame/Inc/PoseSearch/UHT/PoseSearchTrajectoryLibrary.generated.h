// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchTrajectoryLibrary.h"

#ifdef POSESEARCH_PoseSearchTrajectoryLibrary_generated_h
#error "PoseSearchTrajectoryLibrary.generated.h already included, missing '#pragma once' in PoseSearchTrajectoryLibrary.h"
#endif
#define POSESEARCH_PoseSearchTrajectoryLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class IPoseSearchTrajectoryPredictorInterface;
class UAnimInstance;
class UObject;
struct FLinearColor;
struct FPoseSearchTrajectory_WorldCollisionResults;
struct FPoseSearchTrajectoryData;
struct FTransformTrajectory;
struct FTransformTrajectorySample;

// ********** Begin ScriptStruct FPoseSearchTrajectoryData *****************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchTrajectoryData_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchTrajectoryData;
// ********** End ScriptStruct FPoseSearchTrajectoryData *******************************************

// ********** Begin ScriptStruct FPoseSearchTrajectory_WorldCollisionResults ***********************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchTrajectory_WorldCollisionResults;
// ********** End ScriptStruct FPoseSearchTrajectory_WorldCollisionResults *************************

// ********** Begin Class UPoseSearchTrajectoryLibrary *********************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawTransformTrajectory); \
	DECLARE_FUNCTION(execGetTransformTrajectorySampleTransform); \
	DECLARE_FUNCTION(execGetTransformTrajectoryAngularVelocity); \
	DECLARE_FUNCTION(execGetTransformTrajectoryVelocity); \
	DECLARE_FUNCTION(execGetTransformTrajectorySampleAtTime); \
	DECLARE_FUNCTION(execHandleTransformTrajectoryWorldCollisionsWithGravity); \
	DECLARE_FUNCTION(execHandleTransformTrajectoryWorldCollisions); \
	DECLARE_FUNCTION(execPoseSearchGenerateTransformTrajectoryWithPredictor); \
	DECLARE_FUNCTION(execPoseSearchGeneratePredictorTransformTrajectory); \
	DECLARE_FUNCTION(execPoseSearchGenerateTransformTrajectory);


POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchTrajectoryLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchTrajectoryLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchTrajectoryLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchTrajectoryLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchTrajectoryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchTrajectoryLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchTrajectoryLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchTrajectoryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchTrajectoryLibrary(UPoseSearchTrajectoryLibrary&&) = delete; \
	UPoseSearchTrajectoryLibrary(const UPoseSearchTrajectoryLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchTrajectoryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchTrajectoryLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchTrajectoryLibrary) \
	POSESEARCH_API virtual ~UPoseSearchTrajectoryLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_105_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchTrajectoryLibrary;

// ********** End Class UPoseSearchTrajectoryLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
