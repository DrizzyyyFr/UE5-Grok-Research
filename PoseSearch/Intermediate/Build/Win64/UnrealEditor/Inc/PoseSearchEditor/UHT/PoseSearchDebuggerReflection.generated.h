// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchDebuggerReflection.h"

#ifdef POSESEARCHEDITOR_PoseSearchDebuggerReflection_generated_h
#error "PoseSearchDebuggerReflection.generated.h already included, missing '#pragma once' in PoseSearchDebuggerReflection.h"
#endif
#define POSESEARCHEDITOR_PoseSearchDebuggerReflection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseSearchDebuggerReflection ********************************************
POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchDebuggerReflection(); \
	friend struct Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchDebuggerReflection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), Z_Construct_UClass_UPoseSearchDebuggerReflection_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchDebuggerReflection)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchDebuggerReflection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchDebuggerReflection(UPoseSearchDebuggerReflection&&) = delete; \
	UPoseSearchDebuggerReflection(const UPoseSearchDebuggerReflection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchDebuggerReflection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchDebuggerReflection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchDebuggerReflection) \
	NO_API virtual ~UPoseSearchDebuggerReflection();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_11_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchDebuggerReflection;

// ********** End Class UPoseSearchDebuggerReflection **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
