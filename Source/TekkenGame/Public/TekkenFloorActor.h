// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/StaticMeshActor.h"
#include "TekkenFloorActor.generated.h"

/**
 * 
 */
UCLASS()
class TEKKENGAME_API ATekkenFloorActor : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int FloorNo;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int RelatedStageSequenceId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFloorBreakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHaveValidHeight;
};
