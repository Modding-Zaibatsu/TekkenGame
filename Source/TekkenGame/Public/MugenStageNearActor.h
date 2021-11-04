// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "MugenStageNearActor.generated.h"

UCLASS()
class TEKKENGAME_API AMugenStageNearActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY()
	float NearFloorRadius;

	UPROPERTY()
	FString NearFloorTag;
	
public:	
	// Sets default values for this actor's properties
	AMugenStageNearActor();

	

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	void SetTileNum(int X, int Y);
	void SetTileLocation(class UObject* pObj, const struct FVector& Pos);
	void SetSize(float X, float Y);
	void SetRadiusOfNearFloor(float R);
	void SetCenterPos(const struct FVector& centerPos);
	void MySetLocation2(TArray<class UObject*> tiles);
	bool IsOutOfBounds(const struct FVector& Pos);
	void CalcTileOffset();
	struct FVector CalcRelativePos(int Index, float Z);
};
