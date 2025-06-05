// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/MultiAnimAsset.h"

#ifdef POSESEARCH_MultiAnimAsset_generated_h
#error "MultiAnimAsset.generated.h already included, missing '#pragma once' in MultiAnimAsset.h"
#endif
#define POSESEARCH_MultiAnimAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAnimationAsset;

// ********** Begin Class UMultiAnimAsset **********************************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetOrigin); \
	DECLARE_FUNCTION(execBP_GetAnimationAsset);


POSESEARCH_API UClass* Z_Construct_UClass_UMultiAnimAsset_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiAnimAsset(); \
	friend struct Z_Construct_UClass_UMultiAnimAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UMultiAnimAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiAnimAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UMultiAnimAsset_NoRegister) \
	DECLARE_SERIALIZER(UMultiAnimAsset)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UMultiAnimAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiAnimAsset(UMultiAnimAsset&&) = delete; \
	UMultiAnimAsset(const UMultiAnimAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UMultiAnimAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiAnimAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiAnimAsset) \
	POSESEARCH_API virtual ~UMultiAnimAsset();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_16_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiAnimAsset;

// ********** End Class UMultiAnimAsset ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MultiAnimAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
