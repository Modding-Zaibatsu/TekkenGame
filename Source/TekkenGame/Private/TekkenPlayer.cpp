// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGame.h"
#include "TekkenPlayer.h"


// Sets default values
ATekkenPlayer::ATekkenPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATekkenPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATekkenPlayer::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ATekkenPlayer::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

