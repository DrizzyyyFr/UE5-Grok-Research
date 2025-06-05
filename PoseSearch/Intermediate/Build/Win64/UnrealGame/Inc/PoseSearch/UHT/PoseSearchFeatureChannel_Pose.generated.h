// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchFeatureChannel_Pose.h"

#ifdef POSESEARCH_PoseSearchFeatureChannel_Pose_generated_h
#error "PoseSearchFeatureChannel_Pose.generated.h already included, missing '#pragma once' in PoseSearchFeatureChannel_Pose.h"
#endif
#define POSESEARCH_PoseSearchFeatureChannel_Pose_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPoseSearchBone ***************************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchBone_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchBone;
// ********** End ScriptStruct FPoseSearchBone *****************************************************

// ********** Begin Class UPoseSearchFeatureChannel_Pose *******************************************
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchFeatureChannel_Pose(); \
	friend struct Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchFeatureChannel_Pose, UPoseSearchFeatureChannel_GroupBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchFeatureChannel_Pose_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchFeatureChannel_Pose)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchFeatureChannel_Pose(UPoseSearchFeatureChannel_Pose&&) = delete; \
	UPoseSearchFeatureChannel_Pose(const UPoseSearchFeatureChannel_Pose&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchFeatureChannel_Pose); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchFeatureChannel_Pose); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoseSearchFeatureChannel_Pose) \
	POSESEARCH_API virtual ~UPoseSearchFeatureChannel_Pose();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h_50_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchFeatureChannel_Pose;

// ********** End Class UPoseSearchFeatureChannel_Pose *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Pose_h

// ********** Begin Enum EPoseSearchBoneFlags ******************************************************
#define FOREACH_ENUM_EPOSESEARCHBONEFLAGS(op) \
	op(EPoseSearchBoneFlags::Velocity) \
	op(EPoseSearchBoneFlags::Position) \
	op(EPoseSearchBoneFlags::Rotation) \
	op(EPoseSearchBoneFlags::Phase) 

enum class EPoseSearchBoneFlags : uint32;
template<> struct TIsUEnumClass<EPoseSearchBoneFlags> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchBoneFlags>();
// ********** End Enum EPoseSearchBoneFlags ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
