// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchHistoryCollectorAnimNodeLibrary.h"

#ifdef POSESEARCH_PoseSearchHistoryCollectorAnimNodeLibrary_generated_h
#error "PoseSearchHistoryCollectorAnimNodeLibrary.generated.h already included, missing '#pragma once' in PoseSearchHistoryCollectorAnimNodeLibrary.h"
#endif
#define POSESEARCH_PoseSearchHistoryCollectorAnimNodeLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FPoseSearchHistoryCollectorAnimNodeReference;
struct FTransformTrajectory;

// ********** Begin ScriptStruct FPoseSearchHistoryCollectorAnimNodeReference **********************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchHistoryCollectorAnimNodeReference_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


struct FPoseSearchHistoryCollectorAnimNodeReference;
// ********** End ScriptStruct FPoseSearchHistoryCollectorAnimNodeReference ************************

// ********** Begin Class UPoseSearchHistoryCollectorAnimNodeLibrary *******************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPoseHistoryNodeTransformTrajectory); \
	DECLARE_FUNCTION(execGetPoseHistoryNodeTransformTrajectory); \
	DECLARE_FUNCTION(execConvertToPoseHistoryNodePure); \
	DECLARE_FUNCTION(execConvertToPoseHistoryNode);


POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchHistoryCollectorAnimNodeLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchHistoryCollectorAnimNodeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchHistoryCollectorAnimNodeLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchHistoryCollectorAnimNodeLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchHistoryCollectorAnimNodeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchHistoryCollectorAnimNodeLibrary(UPoseSearchHistoryCollectorAnimNodeLibrary&&) = delete; \
	UPoseSearchHistoryCollectorAnimNodeLibrary(const UPoseSearchHistoryCollectorAnimNodeLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchHistoryCollectorAnimNodeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchHistoryCollectorAnimNodeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchHistoryCollectorAnimNodeLibrary) \
	POSESEARCH_API virtual ~UPoseSearchHistoryCollectorAnimNodeLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_27_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchHistoryCollectorAnimNodeLibrary;

// ********** End Class UPoseSearchHistoryCollectorAnimNodeLibrary *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchHistoryCollectorAnimNodeLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
