// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGame.h"
#include "CharacterItemFactory.h"

UCharacterItemFactory::UCharacterItemFactory() {
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterItem::StaticClass();
}

UObject* UCharacterItemFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UCharacterItem* CharacterItemAsset = NewObject<UCharacterItem>(InParent, Class, Name, Flags);
	return CharacterItemAsset;
}