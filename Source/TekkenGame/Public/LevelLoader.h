// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "LevelLoader.generated.h"

UCLASS()
class TEKKENGAME_API ALevelLoader : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelLoader();

	UPROPERTY()
	TArray<FString> LevelNames;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	/*
	UFUNCTION(BlueprintImplementableEvent = true, BlueprintCallable = true, Category = "LoadLevel")
	void UnloadStreamLevel(FString& LevelName, bool DirectLoad);

	UFUNCTION(BlueprintImplementableEvent = true, BlueprintCallable = true, Category = "LoadLevel")
	void ReloadStreamLevel(FName& LevelName);

	UFUNCTION(BlueprintImplementableEvent = true, BlueprintCallable = true, Category = "LoadLevel")
	void LoadStreamLevel(FString& LevelName, bool DirectLoad);

	UFUNCTION(BlueprintImplementableEvent = true, BlueprintCallable = true, Category = "LoadLevel")
	bool IsExistLevelsPendingPurge();
	*/
};
