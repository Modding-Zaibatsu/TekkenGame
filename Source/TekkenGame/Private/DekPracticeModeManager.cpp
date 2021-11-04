// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGame.h"
#include "DekPracticeModeManager.h"


// Sets default values
ADekPracticeModeManager::ADekPracticeModeManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADekPracticeModeManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADekPracticeModeManager::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void ADekPracticeModeManager::SetDekVisibility(bool bIsVisible, bool bToggleCPUVisible) {

}

void ADekPracticeModeManager::ReInit(int DEK_PlayerNumber) {

}

bool ADekPracticeModeManager::IsInitialized() {
	return false;
}

void ADekPracticeModeManager::InitCompleted() {

}

void ADekPracticeModeManager::Init(int DEK_PlayerNumber) {

}