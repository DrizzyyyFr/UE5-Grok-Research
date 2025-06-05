// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchDebuggerSettings.h"

#ifdef POSESEARCHEDITOR_PoseSearchDebuggerSettings_generated_h
#error "PoseSearchDebuggerSettings.generated.h already included, missing '#pragma once' in PoseSearchDebuggerSettings.h"
#endif
#define POSESEARCHEDITOR_PoseSearchDebuggerSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseSearchDebuggerConfig ************************************************
POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDebuggerConfig_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchDebuggerConfig(); \
	friend struct Z_Construct_UClass_UPoseSearchDebuggerConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDebuggerConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchDebuggerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), Z_Construct_UClass_UPoseSearchDebuggerConfig_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchDebuggerConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchDebuggerConfig(UPoseSearchDebuggerConfig&&) = delete; \
	UPoseSearchDebuggerConfig(const UPoseSearchDebuggerConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCHEDITOR_API, UPoseSearchDebuggerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchDebuggerConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoseSearchDebuggerConfig) \
	POSESEARCHEDITOR_API virtual ~UPoseSearchDebuggerConfig();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerSettings_h_11_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchDebuggerConfig;

// ********** End Class UPoseSearchDebuggerConfig **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
