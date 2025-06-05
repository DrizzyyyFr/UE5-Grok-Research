// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrajectoryExportOperation.h"

#ifdef TRAJECTORYTOOLS_TrajectoryExportOperation_generated_h
#error "TrajectoryExportOperation.generated.h already included, missing '#pragma once' in TrajectoryExportOperation.h"
#endif
#define TRAJECTORYTOOLS_TrajectoryExportOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTrajectoryExportSettings *****************************************
#define FID_Engine_Plugins_Experimental_Animation_TrajectoryTools_Source_TrajectoryTools_Public_TrajectoryExportOperation_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrajectoryExportSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTrajectoryExportSettings;
// ********** End ScriptStruct FTrajectoryExportSettings *******************************************

// ********** Begin ScriptStruct FTrajectoryExportAssetInfo ****************************************
#define FID_Engine_Plugins_Experimental_Animation_TrajectoryTools_Source_TrajectoryTools_Public_TrajectoryExportOperation_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrajectoryExportAssetInfo_Statics; \
	static class UScriptStruct* StaticStruct();


struct FTrajectoryExportAssetInfo;
// ********** End ScriptStruct FTrajectoryExportAssetInfo ******************************************

// ********** Begin Class UTrajectoryExportOperation ***********************************************
TRAJECTORYTOOLS_API UClass* Z_Construct_UClass_UTrajectoryExportOperation_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_TrajectoryTools_Source_TrajectoryTools_Public_TrajectoryExportOperation_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTrajectoryExportOperation(); \
	friend struct Z_Construct_UClass_UTrajectoryExportOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TRAJECTORYTOOLS_API UClass* Z_Construct_UClass_UTrajectoryExportOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrajectoryExportOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TrajectoryTools"), Z_Construct_UClass_UTrajectoryExportOperation_NoRegister) \
	DECLARE_SERIALIZER(UTrajectoryExportOperation)


#define FID_Engine_Plugins_Experimental_Animation_TrajectoryTools_Source_TrajectoryTools_Public_TrajectoryExportOperation_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrajectoryExportOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrajectoryExportOperation(UTrajectoryExportOperation&&) = delete; \
	UTrajectoryExportOperation(const UTrajectoryExportOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrajectoryExportOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrajectoryExportOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrajectoryExportOperation) \
	NO_API virtual ~UTrajectoryExportOperation();


#define FID_Engine_Plugins_Experimental_Animation_TrajectoryTools_Source_TrajectoryTools_Public_TrajectoryExportOperation_h_105_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_TrajectoryTools_Source_TrajectoryTools_Public_TrajectoryExportOperation_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_TrajectoryTools_Source_TrajectoryTools_Public_TrajectoryExportOperation_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_TrajectoryTools_Source_TrajectoryTools_Public_TrajectoryExportOperation_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrajectoryExportOperation;

// ********** End Class UTrajectoryExportOperation *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_TrajectoryTools_Source_TrajectoryTools_Public_TrajectoryExportOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
