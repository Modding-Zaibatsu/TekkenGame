// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGame.h"
#include "CharacterItemFactory.h"
#include "Developer/AssetTools/Public/AssetTypeCategories.h"

UCharacterItemFactory::UCharacterItemFactory() {
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterItem::StaticClass();
}

uint32 UCharacterItemFactory::GetMenuCategories() const
{
	return EAssetTypeCategories::Basic | EAssetTypeCategories::Misc;
}

UObject* UCharacterItemFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UCharacterItem* CharacterItemAsset = NewObject<UCharacterItem>(InParent, Class, Name, Flags);
	return CharacterItemAsset;
}