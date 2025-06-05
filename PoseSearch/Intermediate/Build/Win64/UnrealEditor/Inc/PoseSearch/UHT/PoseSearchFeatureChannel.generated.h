// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchFeatureChannel.h"

#ifdef POSESEARCH_PoseSearchFeatureChannel_generated_h
#error "PoseSearchFeatureChannel.generated.h already included, missing '#pragma once' in PoseSearchFeatureChannel.h"
#endif
#define POSESEARCH_PoseSearchFeatureChannel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoseSearchFeatureChannel ************************************************
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchFeatureChannel(); \
	friend struct Z_Construct_UClass_UPoseSearchFeatureChannel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchFeatureChannel, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchFeatureChannel_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchFeatureChannel) \
	virtual UObject* _getUObject() const override { return const_cast<UPoseSearchFeatureChannel*>(this); }


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	POSESEARCH_API UPoseSearchFeatureChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchFeatureChannel(UPoseSearchFeatureChannel&&) = delete; \
	UPoseSearchFeatureChannel(const UPoseSearchFeatureChannel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchFeatureChannel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchFeatureChannel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchFeatureChannel) \
	POSESEARCH_API virtual ~UPoseSearchFeatureChannel();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_116_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchFeatureChannel;

// ********** End Class UPoseSearchFeatureChannel **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_h

// ********** Begin Enum EComponentStrippingVector *************************************************
#define FOREACH_ENUM_ECOMPONENTSTRIPPINGVECTOR(op) \
	op(EComponentStrippingVector::None) \
	op(EComponentStrippingVector::StripXY) \
	op(EComponentStrippingVector::StripZ) 

enum class EComponentStrippingVector : uint8;
template<> struct TIsUEnumClass<EComponentStrippingVector> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EComponentStrippingVector>();
// ********** End Enum EComponentStrippingVector ***************************************************

// ********** Begin Enum EInputQueryPose ***********************************************************
#define FOREACH_ENUM_EINPUTQUERYPOSE(op) \
	op(EInputQueryPose::UseCharacterPose) \
	op(EInputQueryPose::UseContinuingPose) 

enum class EInputQueryPose : uint8;
template<> struct TIsUEnumClass<EInputQueryPose> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EInputQueryPose>();
// ********** End Enum EInputQueryPose *************************************************************

// ********** Begin Enum EPermutationTimeType ******************************************************
#define FOREACH_ENUM_EPERMUTATIONTIMETYPE(op) \
	op(EPermutationTimeType::UseSampleTime) \
	op(EPermutationTimeType::UsePermutationTime) \
	op(EPermutationTimeType::UseSampleToPermutationTime) 

enum class EPermutationTimeType : uint8;
template<> struct TIsUEnumClass<EPermutationTimeType> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPermutationTimeType>();
// ********** End Enum EPermutationTimeType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
