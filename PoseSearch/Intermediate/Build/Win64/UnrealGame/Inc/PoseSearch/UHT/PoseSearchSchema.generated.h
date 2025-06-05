// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchSchema.h"

#ifdef POSESEARCH_PoseSearchSchema_generated_h
#error "PoseSearchSchema.generated.h already included, missing '#pragma once' in PoseSearchSchema.h"
#endif
#define POSESEARCH_PoseSearchSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPoseSearchRoledSkeleton ******************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchRoledSkeleton_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchRoledSkeleton;
// ********** End ScriptStruct FPoseSearchRoledSkeleton ********************************************

// ********** Begin Class UPoseSearchSchema ********************************************************
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSchema_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchSchema(); \
	friend struct Z_Construct_UClass_UPoseSearchSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchSchema, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchSchema_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchSchema)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchSchema(UPoseSearchSchema&&) = delete; \
	UPoseSearchSchema(const UPoseSearchSchema&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchSchema); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchSchema) \
	POSESEARCH_API virtual ~UPoseSearchSchema();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_69_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchSchema;

// ********** End Class UPoseSearchSchema **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSchema_h

// ********** Begin Enum EPoseSearchDataPreprocessor ***********************************************
#define FOREACH_ENUM_EPOSESEARCHDATAPREPROCESSOR(op) \
	op(EPoseSearchDataPreprocessor::None) \
	op(EPoseSearchDataPreprocessor::Normalize) \
	op(EPoseSearchDataPreprocessor::NormalizeOnlyByDeviation) \
	op(EPoseSearchDataPreprocessor::NormalizeWithCommonSchema) 

enum class EPoseSearchDataPreprocessor : int32;
template<> struct TIsUEnumClass<EPoseSearchDataPreprocessor> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchDataPreprocessor>();
// ********** End Enum EPoseSearchDataPreprocessor *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
