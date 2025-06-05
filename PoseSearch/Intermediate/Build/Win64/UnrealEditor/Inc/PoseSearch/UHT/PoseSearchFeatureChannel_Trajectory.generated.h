// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchFeatureChannel_Trajectory.h"

#ifdef POSESEARCH_PoseSearchFeatureChannel_Trajectory_generated_h
#error "PoseSearchFeatureChannel_Trajectory.generated.h already included, missing '#pragma once' in PoseSearchFeatureChannel_Trajectory.h"
#endif
#define POSESEARCH_PoseSearchFeatureChannel_Trajectory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPoseSearchTrajectorySample ***************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchTrajectorySample_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchTrajectorySample;
// ********** End ScriptStruct FPoseSearchTrajectorySample *****************************************

// ********** Begin Class UPoseSearchFeatureChannel_Trajectory *************************************
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchFeatureChannel_Trajectory(); \
	friend struct Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchFeatureChannel_Trajectory, UPoseSearchFeatureChannel_GroupBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchFeatureChannel_Trajectory_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchFeatureChannel_Trajectory)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchFeatureChannel_Trajectory(UPoseSearchFeatureChannel_Trajectory&&) = delete; \
	UPoseSearchFeatureChannel_Trajectory(const UPoseSearchFeatureChannel_Trajectory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchFeatureChannel_Trajectory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchFeatureChannel_Trajectory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoseSearchFeatureChannel_Trajectory) \
	POSESEARCH_API virtual ~UPoseSearchFeatureChannel_Trajectory();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h_56_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchFeatureChannel_Trajectory;

// ********** End Class UPoseSearchFeatureChannel_Trajectory ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Trajectory_h

// ********** Begin Enum EPoseSearchTrajectoryFlags ************************************************
#define FOREACH_ENUM_EPOSESEARCHTRAJECTORYFLAGS(op) \
	op(EPoseSearchTrajectoryFlags::Velocity) \
	op(EPoseSearchTrajectoryFlags::Position) \
	op(EPoseSearchTrajectoryFlags::VelocityDirection) \
	op(EPoseSearchTrajectoryFlags::FacingDirection) \
	op(EPoseSearchTrajectoryFlags::VelocityXY) \
	op(EPoseSearchTrajectoryFlags::PositionXY) \
	op(EPoseSearchTrajectoryFlags::VelocityDirectionXY) \
	op(EPoseSearchTrajectoryFlags::FacingDirectionXY) 

enum class EPoseSearchTrajectoryFlags : uint32;
template<> struct TIsUEnumClass<EPoseSearchTrajectoryFlags> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchTrajectoryFlags>();
// ********** End Enum EPoseSearchTrajectoryFlags **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
