// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchAssetSamplerLibrary.h"

#ifdef POSESEARCH_PoseSearchAssetSamplerLibrary_generated_h
#error "PoseSearchAssetSamplerLibrary.generated.h already included, missing '#pragma once' in PoseSearchAssetSamplerLibrary.h"
#endif
#define POSESEARCH_PoseSearchAssetSamplerLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAnimInstance;
enum class EPoseSearchAssetSamplerSpace : uint8;
struct FPoseSearchAssetSamplerInput;
struct FPoseSearchAssetSamplerPose;

// ********** Begin ScriptStruct FPoseSearchAssetSamplerInput **************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchAssetSamplerInput_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchAssetSamplerInput;
// ********** End ScriptStruct FPoseSearchAssetSamplerInput ****************************************

// ********** Begin ScriptStruct FPoseSearchAssetSamplerPose ***************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchAssetSamplerPose_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


struct FPoseSearchAssetSamplerPose;
// ********** End ScriptStruct FPoseSearchAssetSamplerPose *****************************************

// ********** Begin Class UPoseSearchAssetSamplerLibrary *******************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDraw); \
	DECLARE_FUNCTION(execGetTransformByName); \
	DECLARE_FUNCTION(execSamplePose);


POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchAssetSamplerLibrary_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchAssetSamplerLibrary(); \
	friend struct Z_Construct_UClass_UPoseSearchAssetSamplerLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchAssetSamplerLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchAssetSamplerLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchAssetSamplerLibrary_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchAssetSamplerLibrary)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchAssetSamplerLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchAssetSamplerLibrary(UPoseSearchAssetSamplerLibrary&&) = delete; \
	UPoseSearchAssetSamplerLibrary(const UPoseSearchAssetSamplerLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchAssetSamplerLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchAssetSamplerLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchAssetSamplerLibrary) \
	POSESEARCH_API virtual ~UPoseSearchAssetSamplerLibrary();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_69_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchAssetSamplerLibrary;

// ********** End Class UPoseSearchAssetSamplerLibrary *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchAssetSamplerLibrary_h

// ********** Begin Enum EPoseSearchAssetSamplerSpace **********************************************
#define FOREACH_ENUM_EPOSESEARCHASSETSAMPLERSPACE(op) \
	op(EPoseSearchAssetSamplerSpace::Local) \
	op(EPoseSearchAssetSamplerSpace::Component) \
	op(EPoseSearchAssetSamplerSpace::World) 

enum class EPoseSearchAssetSamplerSpace : uint8;
template<> struct TIsUEnumClass<EPoseSearchAssetSamplerSpace> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchAssetSamplerSpace>();
// ********** End Enum EPoseSearchAssetSamplerSpace ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
