// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchInteractionAsset.h"

#ifdef POSESEARCH_PoseSearchInteractionAsset_generated_h
#error "PoseSearchInteractionAsset.generated.h already included, missing '#pragma once' in PoseSearchInteractionAsset.h"
#endif
#define POSESEARCH_PoseSearchInteractionAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPoseSearchInteractionAssetItem ***********************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchInteractionAssetItem_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchInteractionAssetItem;
// ********** End ScriptStruct FPoseSearchInteractionAssetItem *************************************

// ********** Begin Class UPoseSearchInteractionAsset **********************************************
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchInteractionAsset_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchInteractionAsset(); \
	friend struct Z_Construct_UClass_UPoseSearchInteractionAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchInteractionAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchInteractionAsset, UMultiAnimAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchInteractionAsset_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchInteractionAsset)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchInteractionAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchInteractionAsset(UPoseSearchInteractionAsset&&) = delete; \
	UPoseSearchInteractionAsset(const UPoseSearchInteractionAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchInteractionAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchInteractionAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchInteractionAsset) \
	POSESEARCH_API virtual ~UPoseSearchInteractionAsset();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h_48_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchInteractionAsset;

// ********** End Class UPoseSearchInteractionAsset ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchInteractionAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
