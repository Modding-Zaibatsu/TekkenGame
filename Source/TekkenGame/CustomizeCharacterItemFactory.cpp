// Fill out your copyright notice in the Description page of Project Settings.

#include "TekkenGame.h"
#include "CustomizeCharacterItemFactory.h"

UCustomizeCharacterItemFactory::UCustomizeCharacterItemFactory() {
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCustomizeCharacterItem::StaticClass();
}

uint32 UCustomizeCharacterItemFactory::GetMenuCategories() const
{
	return EAssetTypeCategories::Basic | EAssetTypeCategories::Misc;
}

UObject* UCustomizeCharacterItemFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UCustomizeCharacterItem* CustomizeCharacterItemAsset = NewObject<UCustomizeCharacterItem>(InParent, Class, Name, Flags);
	return CustomizeCharacterItemAsset;
}