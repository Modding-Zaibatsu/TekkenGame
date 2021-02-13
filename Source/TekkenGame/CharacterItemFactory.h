// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Factories/Factory.h"
#include "CharacterItem.h"
#include "CharacterItemFactory.generated.h"

/**
*
*/
UCLASS()
class TEKKENGAME_API UCharacterItemFactory : public UFactory
{
	GENERATED_BODY()

public:
	UCharacterItemFactory();

	// Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
};
