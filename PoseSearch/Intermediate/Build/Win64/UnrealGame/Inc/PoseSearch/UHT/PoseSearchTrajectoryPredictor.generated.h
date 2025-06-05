// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchTrajectoryPredictor.h"

#ifdef POSESEARCH_PoseSearchTrajectoryPredictor_generated_h
#error "PoseSearchTrajectoryPredictor.generated.h already included, missing '#pragma once' in PoseSearchTrajectoryPredictor.h"
#endif
#define POSESEARCH_PoseSearchTrajectoryPredictor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FTransformTrajectory;

// ********** Begin Interface UPoseSearchTrajectoryPredictorInterface ******************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetGravity); \
	DECLARE_FUNCTION(execPredict);


POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchTrajectoryPredictorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchTrajectoryPredictorInterface(UPoseSearchTrajectoryPredictorInterface&&) = delete; \
	UPoseSearchTrajectoryPredictorInterface(const UPoseSearchTrajectoryPredictorInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchTrajectoryPredictorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchTrajectoryPredictorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchTrajectoryPredictorInterface) \
	virtual ~UPoseSearchTrajectoryPredictorInterface() = default;


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPoseSearchTrajectoryPredictorInterface(); \
	friend struct Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchTrajectoryPredictorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchTrajectoryPredictorInterface)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPoseSearchTrajectoryPredictorInterface() {} \
public: \
	typedef UPoseSearchTrajectoryPredictorInterface UClassType; \
	typedef IPoseSearchTrajectoryPredictorInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_11_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchTrajectoryPredictorInterface;

// ********** End Interface UPoseSearchTrajectoryPredictorInterface ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchTrajectoryPredictor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
