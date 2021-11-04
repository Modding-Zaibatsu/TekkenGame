// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGame.h"
#include "TekkenBlueprintLibrary.h"


//static ATekkenPlayerController controller;

FVector UTekkenBlueprintLibrary::ToUnrealCoord(FVector& TekkenCoord) {
	FVector UnrealCoord;
	UnrealCoord.X = TekkenCoord.X * 0.1f;
	UnrealCoord.Y = TekkenCoord.Y * 0.1f;
	UnrealCoord.Z = TekkenCoord.Z * 0.1f;

	return UnrealCoord;
}

FVector UTekkenBlueprintLibrary::ToTekkenCoord(FVector& UnrealCoord) {
	FVector TekkenCoord;
	TekkenCoord.X = UnrealCoord.X * 1000.0f;
	TekkenCoord.Y = UnrealCoord.Y * 1000.0f;
	TekkenCoord.Z = UnrealCoord.Z * 1000.0f;

	return TekkenCoord;
}

void UTekkenBlueprintLibrary::TogglePause() {

}

bool UTekkenBlueprintLibrary::IsVSyncEnabled() {
	return true;
}

UObject* UTekkenBlueprintLibrary::LoadObjectFromAssetPath(UClass* ObjectClass, const FName& Path) {
	return nullptr;
}

ATekkenPlayerController* UTekkenBlueprintLibrary::GetTekkenPlayerController() {
	return nullptr;
}

/*ATekkenPlayerController* UTekkenBlueprintLibrary::GetTekkenPlayerController() {
	return &controller;
}*/