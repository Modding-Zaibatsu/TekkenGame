// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "TekkenPlayerController.h"
#include "TekkenBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TEKKENGAME_API UTekkenBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Tekken")
	static FVector ToUnrealCoord(FVector& TekkenCoord);
	UFUNCTION(BlueprintCallable, Category = "Tekken")
	static FVector ToTekkenCoord(FVector& UnrealCoord);
	UFUNCTION(BlueprintCallable, Category = "Tekken")
	static void TogglePause();
	UFUNCTION(BlueprintCallable, Category = "Tekken")
	static bool IsVSyncEnabled();
	UFUNCTION(BlueprintCallable, Category = "Tekken")
	static UObject* LoadObjectFromAssetPath(UClass* ObjectClass, const FName& Path);
	UFUNCTION(BlueprintCallable, Category = "Tekken")
	static ATekkenPlayerController* GetTekkenPlayerController();
	//UFUNCTION(BlueprintCallable, Category = "Tekken")
	//static ATekkenPlayerController* GetTekkenPlayerController();
};
