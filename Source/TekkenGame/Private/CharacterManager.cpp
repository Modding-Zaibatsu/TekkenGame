// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGame.h"
#include "CharacterManager.h"


// Sets default values
ACharacterManager::ACharacterManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterManager::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

