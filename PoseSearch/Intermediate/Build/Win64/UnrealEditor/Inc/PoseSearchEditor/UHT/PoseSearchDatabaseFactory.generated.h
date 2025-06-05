// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearchDatabaseFactory.h"

#ifdef POSESEARCHEDITOR_PoseSearchDatabaseFactory_generated_h
#error "PoseSearchDatabaseFactory.generated.h already included, missing '#pragma once' in PoseSearchDatabaseFactory.h"
#endif
#define POSESEARCHEDITOR_PoseSearchDatabaseFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseSearchDatabaseFactory ***********************************************
POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseFactory_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPoseSearchDatabaseFactory(); \
	friend struct Z_Construct_UClass_UPoseSearchDatabaseFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDatabaseFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchDatabaseFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearchEditor"), Z_Construct_UClass_UPoseSearchDatabaseFactory_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchDatabaseFactory)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchDatabaseFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchDatabaseFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchDatabaseFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchDatabaseFactory); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchDatabaseFactory(UPoseSearchDatabaseFactory&&) = delete; \
	UPoseSearchDatabaseFactory(const UPoseSearchDatabaseFactory&) = delete; \
	NO_API virtual ~UPoseSearchDatabaseFactory();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_13_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_INCLASS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchDatabaseFactory;

// ********** End Class UPoseSearchDatabaseFactory *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Editor_Public_PoseSearchDatabaseFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
