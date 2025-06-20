// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Animation/AnimExecutionContext.h"
#include "Animation/AnimNodeReference.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimationWarpingLibrary.generated.h"

#define UE_API ANIMATIONWARPINGRUNTIME_API

struct FAnimNode_OffsetRootBone;

// Exposes operations related to Animation Warping
UCLASS(MinimalAPI, Experimental)
class UAnimationWarpingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Get the current world space transform from the offset root bone animgraph node */
    UFUNCTION(BlueprintPure, Category = "Animation|BlendStack", meta = (BlueprintThreadSafe))
    static UE_API FTransform GetOffsetRootTransform(const FAnimNodeReference& Node);
	
	/** Helper function to extract the value of a curve in an animation at a given time */
	UFUNCTION(BlueprintPure, Category = "Animation", meta = (BlueprintThreadSafe))
	static UE_API bool GetCurveValueFromAnimation(const UAnimSequenceBase* Animation, FName CurveName, float Time, float& OutValue);
};

#undef UE_API
