// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchInteractionSubsystem.h"

#ifdef POSESEARCH_PoseSearchInteractionSubsystem_generated_h
#error "PoseSearchInteractionSubsystem.generated.h already included, missing '#pragma once' in PoseSearchInteractionSubsystem.h"
#endif
#define POSESEARCH_PoseSearchInteractionSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseSearchInteractionSubsystem ******************************************
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchInteractionSubsystem_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchInteractionSubsystem(); \
	friend struct Z_Construct_UClass_UPoseSearchInteractionSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchInteractionSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchInteractionSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchInteractionSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchInteractionSubsystem)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchInteractionSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchInteractionSubsystem(UPoseSearchInteractionSubsystem&&) = delete; \
	UPoseSearchInteractionSubsystem(const UPoseSearchInteractionSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchInteractionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchInteractionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoseSearchInteractionSubsystem) \
	POSESEARCH_API virtual ~UPoseSearchInteractionSubsystem();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h_64_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchInteractionSubsystem;

// ********** End Class UPoseSearchInteractionSubsystem ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
