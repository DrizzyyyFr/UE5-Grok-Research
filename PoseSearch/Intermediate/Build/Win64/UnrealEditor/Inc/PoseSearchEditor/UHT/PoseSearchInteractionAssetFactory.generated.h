// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchInteractionAssetFactory.h"

#ifdef POSESEARCHEDITOR_PoseSearchInteractionAssetFactory_generated_h
#error "PoseSearchInteractionAssetFactory.generated.h already included, missing '#pragma once' in PoseSearchInteractionAssetFactory.h"
#endif
#define POSESEARCHEDITOR_PoseSearchInteractionAssetFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseSearchInteractionAssetFactory ***************************************
POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchInteractionAssetFactory_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchInteractionAssetFactory_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPoseSearchInteractionAssetFactory(); \
	friend struct Z_Construct_UClass_UPoseSearchInteractionAssetFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchInteractionAssetFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchInteractionAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), Z_Construct_UClass_UPoseSearchInteractionAssetFactory_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchInteractionAssetFactory)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchInteractionAssetFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchInteractionAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchInteractionAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchInteractionAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchInteractionAssetFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchInteractionAssetFactory(UPoseSearchInteractionAssetFactory&&) = delete; \
	UPoseSearchInteractionAssetFactory(const UPoseSearchInteractionAssetFactory&) = delete; \
	NO_API virtual ~UPoseSearchInteractionAssetFactory();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchInteractionAssetFactory_h_10_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchInteractionAssetFactory_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchInteractionAssetFactory_h_13_INCLASS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchInteractionAssetFactory_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchInteractionAssetFactory;

// ********** End Class UPoseSearchInteractionAssetFactory *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchInteractionAssetFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
