// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchEvent.h"

#ifdef POSESEARCH_PoseSearchEvent_generated_h
#error "PoseSearchEvent.generated.h already included, missing '#pragma once' in PoseSearchEvent.h"
#endif
#define POSESEARCH_PoseSearchEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FPoseSearchEvent;

// ********** Begin ScriptStruct FPoseSearchEvent **************************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchEvent_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchEvent;
// ********** End ScriptStruct FPoseSearchEvent ****************************************************

// ********** Begin Class UPoseSearchEventLibrary **************************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePoseSearchEvent);


POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchEventLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchEventLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchEventLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchEventLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchEventLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchEventLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchEventLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchEventLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchEventLibrary(UPoseSearchEventLibrary&&) = delete; \
	UPoseSearchEventLibrary(const UPoseSearchEventLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchEventLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchEventLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchEventLibrary) \
	POSESEARCH_API virtual ~UPoseSearchEventLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h_44_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchEventLibrary;

// ********** End Class UPoseSearchEventLibrary ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
