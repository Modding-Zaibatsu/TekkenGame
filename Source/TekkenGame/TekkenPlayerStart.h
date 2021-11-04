// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerStart.h"
#include "TekkenPlayerStart.generated.h"

UENUM(BlueprintType)
enum ETekkenPlayerStart {
	ETekkenPlayerStart__SPT_DRAMA_START UMETA(DisplayName = "Drama Start"),
	ETekkenPlayerStart__SPT_GAME_START UMETA(DisplayName = "Game Start"),
	ETekkenPlayerStart__SPT_DRAMA_WIN UMETA(DisplayName = "Drama Win"),
	ETekkenPlayerStart__SPT_DRAMA_CONTINUE UMETA(DisplayName = "Drama Continue"),
	ETekkenPlayerStart__SPT_DRAMA_SPECIAL UMETA(DisplayName = "Drama Special"),
	ETekkenPlayerStart__SPT_MAX UMETA(DisplayName = "MAX")
};

/**
 * 
 */
UCLASS()
class TEKKENGAME_API ATekkenPlayerStart : public APlayerStart
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TekkenPlayerStart)
	int FloorNo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TekkenPlayerStart)
	int StageSequenceId;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = TekkenPlayerStart)
	TEnumAsByte<ETekkenPlayerStart> PosType;
	int GetStageSequenceID();
	int GetStagePositionType();
	int GetFloorNo();
};
