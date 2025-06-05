// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/MotionMatchingAnimNodeLibrary.h"

#ifdef POSESEARCH_MotionMatchingAnimNodeLibrary_generated_h
#error "MotionMatchingAnimNodeLibrary.generated.h already included, missing '#pragma once' in MotionMatchingAnimNodeLibrary.h"
#endif
#define POSESEARCH_MotionMatchingAnimNodeLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UPoseSearchDatabase;
enum class EAnimNodeReferenceConversionResult : uint8;
enum class EPoseSearchInterruptMode : uint8;
struct FAnimNodeReference;
struct FMotionMatchingAnimNodeReference;
struct FMotionMatchingBlueprintBlendSettings;
struct FPoseSearchBlueprintResult;

// ********** Begin ScriptStruct FMotionMatchingBlueprintBlendSettings *****************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionMatchingBlueprintBlendSettings_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FMotionMatchingBlueprintBlendSettings;
// ********** End ScriptStruct FMotionMatchingBlueprintBlendSettings *******************************

// ********** Begin ScriptStruct FMotionMatchingAnimNodeReference **********************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionMatchingAnimNodeReference_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FMotionMatchingAnimNodeReference;
// ********** End ScriptStruct FMotionMatchingAnimNodeReference ************************************

// ********** Begin Class UMotionMatchingAnimNodeLibrary *******************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInterruptMode); \
	DECLARE_FUNCTION(execResetDatabasesToSearch); \
	DECLARE_FUNCTION(execSetDatabasesToSearch); \
	DECLARE_FUNCTION(execSetDatabaseToSearch); \
	DECLARE_FUNCTION(execOverrideMotionMatchingBlendSettings); \
	DECLARE_FUNCTION(execGetMotionMatchingBlendSettings); \
	DECLARE_FUNCTION(execGetMotionMatchingSearchResult); \
	DECLARE_FUNCTION(execConvertToMotionMatchingNodePure); \
	DECLARE_FUNCTION(execConvertToMotionMatchingNode);


POSESEARCH_API UClass* Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMotionMatchingAnimNodeLibrary(); \
	friend struct Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMotionMatchingAnimNodeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UMotionMatchingAnimNodeLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMotionMatchingAnimNodeLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UMotionMatchingAnimNodeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMotionMatchingAnimNodeLibrary(UMotionMatchingAnimNodeLibrary&&) = delete; \
	UMotionMatchingAnimNodeLibrary(const UMotionMatchingAnimNodeLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UMotionMatchingAnimNodeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMotionMatchingAnimNodeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMotionMatchingAnimNodeLibrary) \
	POSESEARCH_API virtual ~UMotionMatchingAnimNodeLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_46_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMotionMatchingAnimNodeLibrary;

// ********** End Class UMotionMatchingAnimNodeLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_MotionMatchingAnimNodeLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
