// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchMeshComponent.h"

#ifdef POSESEARCHEDITOR_PoseSearchMeshComponent_generated_h
#error "PoseSearchMeshComponent.generated.h already included, missing '#pragma once' in PoseSearchMeshComponent.h"
#endif
#define POSESEARCHEDITOR_PoseSearchMeshComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseSearchMeshComponent *************************************************
POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchMeshComponent_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchMeshComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchMeshComponent(); \
	friend struct Z_Construct_UClass_UPoseSearchMeshComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchMeshComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchMeshComponent, UPoseableMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), Z_Construct_UClass_UPoseSearchMeshComponent_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchMeshComponent)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchMeshComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchMeshComponent(UPoseSearchMeshComponent&&) = delete; \
	UPoseSearchMeshComponent(const UPoseSearchMeshComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchMeshComponent) \
	NO_API virtual ~UPoseSearchMeshComponent();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchMeshComponent_h_8_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchMeshComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchMeshComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchMeshComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchMeshComponent;

// ********** End Class UPoseSearchMeshComponent ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Private_PoseSearchMeshComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
