// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGame.h"
#include "LevelLoader.h"


// Sets default values
ALevelLoader::ALevelLoader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALevelLoader::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALevelLoader::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

/*void ALevelLoader::UnloadStreamLevel(FString& LevelName, bool DirectLoad) {

}

void ALevelLoader::ReloadStreamLevel(FName& LevelName) {

}

void ALevelLoader::LoadStreamLevel(FString& LevelName, bool DirectLoad) {

}

bool ALevelLoader::IsExistLevelsPendingPurge() {
	return false;
}*/