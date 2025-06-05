// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchDatabase.h"

#ifdef POSESEARCH_PoseSearchDatabase_generated_h
#error "PoseSearchDatabase.generated.h already included, missing '#pragma once' in PoseSearchDatabase.h"
#endif
#define POSESEARCH_PoseSearchDatabase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin ScriptStruct FPoseSearchDatabaseAnimationAssetBase *****************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchDatabaseAnimationAssetBase;
// ********** End ScriptStruct FPoseSearchDatabaseAnimationAssetBase *******************************

// ********** Begin ScriptStruct FPoseSearchDatabaseSequence ***************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


struct FPoseSearchDatabaseSequence;
// ********** End ScriptStruct FPoseSearchDatabaseSequence *****************************************

// ********** Begin ScriptStruct FPoseSearchDatabaseBlendSpace *************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


struct FPoseSearchDatabaseBlendSpace;
// ********** End ScriptStruct FPoseSearchDatabaseBlendSpace ***************************************

// ********** Begin ScriptStruct FPoseSearchDatabaseAnimComposite **********************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_274_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


struct FPoseSearchDatabaseAnimComposite;
// ********** End ScriptStruct FPoseSearchDatabaseAnimComposite ************************************

// ********** Begin ScriptStruct FPoseSearchDatabaseAnimMontage ************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_318_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


struct FPoseSearchDatabaseAnimMontage;
// ********** End ScriptStruct FPoseSearchDatabaseAnimMontage **************************************

// ********** Begin ScriptStruct FPoseSearchDatabaseMultiAnimAsset *********************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_361_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


struct FPoseSearchDatabaseMultiAnimAsset;
// ********** End ScriptStruct FPoseSearchDatabaseMultiAnimAsset ***********************************

// ********** Begin Class UPoseSearchDatabase ******************************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_423_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAnimationAsset); \
	DECLARE_FUNCTION(execGetNumAnimationAssets);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_423_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseSearchDatabase, POSESEARCH_API)


POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_423_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchDatabase(); \
	friend struct Z_Construct_UClass_UPoseSearchDatabase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchDatabase_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchDatabase_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchDatabase) \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_423_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_423_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchDatabase(UPoseSearchDatabase&&) = delete; \
	UPoseSearchDatabase(const UPoseSearchDatabase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchDatabase)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_420_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_423_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_423_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_423_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_423_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchDatabase;

// ********** End Class UPoseSearchDatabase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h

// ********** Begin Enum EPoseSearchMode ***********************************************************
#define FOREACH_ENUM_EPOSESEARCHMODE(op) \
	op(EPoseSearchMode::BruteForce) \
	op(EPoseSearchMode::PCAKDTree) \
	op(EPoseSearchMode::VPTree) \
	op(EPoseSearchMode::EventOnly) 

enum class EPoseSearchMode : int32;
template<> struct TIsUEnumClass<EPoseSearchMode> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMode>();
// ********** End Enum EPoseSearchMode *************************************************************

// ********** Begin Enum EPoseSearchMirrorOption ***************************************************
#define FOREACH_ENUM_EPOSESEARCHMIRROROPTION(op) \
	op(EPoseSearchMirrorOption::UnmirroredOnly) \
	op(EPoseSearchMirrorOption::MirroredOnly) \
	op(EPoseSearchMirrorOption::UnmirroredAndMirrored) 

enum class EPoseSearchMirrorOption : int32;
template<> struct TIsUEnumClass<EPoseSearchMirrorOption> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMirrorOption>();
// ********** End Enum EPoseSearchMirrorOption *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
