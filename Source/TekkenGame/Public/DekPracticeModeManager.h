// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ModularTekkenPlayer.h"
#include "DekPracticeModeManager.generated.h"

UCLASS()
class TEKKENGAME_API ADekPracticeModeManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADekPracticeModeManager();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	UPROPERTY()
	AModularTekkenPlayer* DekActor;
	UPROPERTY()
	AModularTekkenPlayer* CPUActor;
	UPROPERTY(BlueprintReadWrite = true, Category = "DekPracticeModeManager")
	int RenderingPlayerNumber;

	UFUNCTION(BlueprintCallable, Category = "DekPracticeModeManager")
	void SetDekVisibility(bool bIsVisible, bool bToggleCPUVisible);
	UFUNCTION(BlueprintCallable, Category = "DekPracticeModeManager")
	void ReInit(int DEK_PlayerNumber);
	UFUNCTION(BlueprintCallable, Category = "DekPracticeModeManager")
	bool IsInitialized();
	UFUNCTION(BlueprintCallable, Category = "DekPracticeModeManager")
	void InitCompleted();
	UFUNCTION(BlueprintCallable, Category = "DekPracticeModeManager")
	void Init(int DEK_PlayerNumber);
};
