// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CharacterManager.generated.h"

UENUM()
enum class EFighterId : uint8
{
	ID_PAU = 0,
	ID_LAW = 1,
	ID_KIN = 2,
	ID_YOS = 3,
	ID_HWO = 4,
	ID_XIA = 5,
	ID_JIN = 6,
	ID_BRY = 7,
	ID_HEI = 8,
	ID_KAZ = 9,
	ID_STE = 10,
	ID_JAC = 11,
	ID_ASK = 12,
	ID_DVJ = 13,
	ID_FEN = 14,
	ID_LIL = 15,
	ID_DRA = 16,
	ID_LEO = 17,
	ID_LAR = 18,
	ID_ASA = 19,
	ID_ITA = 20,
	ID_LTN = 21,
	ID_DNC = 22,
	ID_ARB = 23,
	ID_MUT = 24,
	ID_CRZ = 25,
	ID_KZM = 26,
	ID_BS7 = 27,
	ID_NIN = 28,
	ID_FRV = 29,
	ID_LEE = 30,
	ID_BOB = 31,
	ID_MRX = 32,
	ID_KUM = 33,
	ID_PAN = 34,
	ID_EDD = 35,
	ID_ELZ = 36,
	ID_MIG = 37,
	ID_ZAK = 38,
	ID_YKZ = 39,
	ID_JA4 = 40,
	ID_YHE = 41,
	ID_DEK = 42,
	ID_MRY = 43,
	ID_MRZ = 44,
	ID_ANN = 45,
	ID_LEI = 46,
	ID_MAR = 47,
	ID_AKI = 48,
	ID_JUL = 49,
	ID_NSA = 50,
	ID_NSB = 51,
	ID_ZAF = 52,
	ID_GAN = 53,
	ID_NSC = 54,
	ID_KNM = 55,
	ID_NSD = 56,
	ID_LAST = 57,
	ID_MAX = 58,
};


UCLASS()
class TEKKENGAME_API ACharacterManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACharacterManager();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
