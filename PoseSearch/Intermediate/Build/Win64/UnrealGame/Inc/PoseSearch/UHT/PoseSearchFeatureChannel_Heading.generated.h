// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchFeatureChannel_Heading.h"

#ifdef POSESEARCH_PoseSearchFeatureChannel_Heading_generated_h
#error "PoseSearchFeatureChannel_Heading.generated.h already included, missing '#pragma once' in PoseSearchFeatureChannel_Heading.h"
#endif
#define POSESEARCH_PoseSearchFeatureChannel_Heading_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAnimInstance;

// ********** Begin Class UPoseSearchFeatureChannel_Heading ****************************************
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h_24_CALLBACK_WRAPPERS
POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Heading_NoRegister();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchFeatureChannel_Heading(); \
	friend struct Z_Construct_UClass_UPoseSearchFeatureChannel_Heading_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchFeatureChannel_Heading_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseSearchFeatureChannel_Heading, UPoseSearchFeatureChannel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), Z_Construct_UClass_UPoseSearchFeatureChannel_Heading_NoRegister) \
	DECLARE_SERIALIZER(UPoseSearchFeatureChannel_Heading)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseSearchFeatureChannel_Heading(UPoseSearchFeatureChannel_Heading&&) = delete; \
	UPoseSearchFeatureChannel_Heading(const UPoseSearchFeatureChannel_Heading&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(POSESEARCH_API, UPoseSearchFeatureChannel_Heading); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchFeatureChannel_Heading); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoseSearchFeatureChannel_Heading) \
	POSESEARCH_API virtual ~UPoseSearchFeatureChannel_Heading();


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h_21_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseSearchFeatureChannel_Heading;

// ********** End Class UPoseSearchFeatureChannel_Heading ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchFeatureChannel_Heading_h

// ********** Begin Enum EHeadingAxis **************************************************************
#define FOREACH_ENUM_EHEADINGAXIS(op) \
	op(EHeadingAxis::X) \
	op(EHeadingAxis::Y) \
	op(EHeadingAxis::Z) \
	op(EHeadingAxis::Num) 

enum class EHeadingAxis : uint8;
template<> struct TIsUEnumClass<EHeadingAxis> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EHeadingAxis>();
// ********** End Enum EHeadingAxis ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
