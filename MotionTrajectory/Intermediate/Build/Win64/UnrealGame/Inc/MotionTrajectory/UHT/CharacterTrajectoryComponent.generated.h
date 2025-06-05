// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterTrajectoryComponent.h"

#ifdef MOTIONTRAJECTORY_CharacterTrajectoryComponent_generated_h
#error "CharacterTrajectoryComponent.generated.h already included, missing '#pragma once' in CharacterTrajectoryComponent.h"
#endif
#define MOTIONTRAJECTORY_CharacterTrajectoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCharacterTrajectoryComponent ********************************************
#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMovementUpdated);


MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterTrajectoryComponent(); \
	friend struct Z_Construct_UClass_UCharacterTrajectoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterTrajectoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MotionTrajectory"), Z_Construct_UClass_UCharacterTrajectoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UCharacterTrajectoryComponent)


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterTrajectoryComponent(UCharacterTrajectoryComponent&&) = delete; \
	UCharacterTrajectoryComponent(const UCharacterTrajectoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOTIONTRAJECTORY_API, UCharacterTrajectoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterTrajectoryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterTrajectoryComponent) \
	MOTIONTRAJECTORY_API virtual ~UCharacterTrajectoryComponent();


#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterTrajectoryComponent;

// ********** End Class UCharacterTrajectoryComponent **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_CharacterTrajectoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
