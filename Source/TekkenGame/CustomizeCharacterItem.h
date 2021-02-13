// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/NoExportTypes.h"
#include "CharacterItem.h"
#include "CustomizeCharacterItem.generated.h"

UENUM(BlueprintType)
enum EItemReleaseVer
{
	ItemVersionUnset UMETA(DisplayName = "ItemVersionUnset"),
	ItemFirstRelease UMETA(DisplayName = "ItemFirstRelease"),
	ItemUpdate1 UMETA(DisplayName = "ItemUpdate1"),
	ItemUpdate2 UMETA(DisplayName = "ItemUpdate2"),
	ItemUpdate3 UMETA(DisplayName = "ItemUpdate3"),
	ItemUpdate4 UMETA(DisplayName = "ItemUpdate4"),
	ItemUpdate5 UMETA(DisplayName = "ItemUpdate5"),
	ItemUpdate6 UMETA(DisplayName = "ItemUpdate6"),
	CS_Release_1 UMETA(DisplayName = "CS_Release_1"),
	ItemUpdateLast UMETA(DisplayName = "ItemUpdateLast"),
	EItemReleaseVer_MAX UMETA(DisplayName = "EItemReleaseVer_MAX")
};

UENUM(BlueprintType)
enum ETKCustomizeColorCategory
{
	ColorIndex_Private UMETA(DisplayName = "ColorIndex_Private"),
	ColorIndex UMETA(DisplayName = "ColorIndex"),
	ColorIndex01 UMETA(DisplayName = "ColorIndex01"),
	ColorIndex02 UMETA(DisplayName = "ColorIndex02"),
	ColorIndex03 UMETA(DisplayName = "ColorIndex03"),
	ColorIndex04 UMETA(DisplayName = "ColorIndex04"),
	ColorIndex_MAX UMETA(DisplayName = "ColorIndex_MAX")
};

USTRUCT()
struct FCustomizeMaterialScalarData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = CustomizeMaterialScalarData)
		FString DescName;

	UPROPERTY(EditAnywhere, Category = CustomizeMaterialScalarData)
		float Scalar;

	FCustomizeMaterialScalarData()
	{
		DescName = FString(TEXT(""));
		Scalar = 1;
	}
};


USTRUCT()
struct FCustomizeMaterialInstanceColorData {
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		class UMaterialInstance* MaterialInstanceOverride;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		FString LocationName;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		class UTexture2D* Pattern;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		float PatternAlpha;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		float PatternHue;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		float PatternSaturation;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		float PatternScaleLRV1;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		float PatternScaleLRV2;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		float PatternScaleULV1;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		float PatternScaleULV2;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		float PatternTiling;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		float PatternRotate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		TArray<struct FLinearColor> InstanceColors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		TArray<TEnumAsByte<ETKCustomizeColorCategory>> ColorIndicies;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		TArray<struct FCustomizeMaterialScalarData> ScalarParameters;
	UPROPERTY(EditAnywhere, Category = CustomizeMaterialInstanceColorData)
		int32 InstanceIndex;

	FCustomizeMaterialInstanceColorData() {
		MaterialInstanceOverride = nullptr;
		LocationName = FString(TEXT(""));
		Pattern = nullptr;
		PatternAlpha = 0;
		PatternHue = 0;
		PatternScaleLRV1 = 0;
		PatternScaleLRV2 = 0;
		PatternScaleULV1 = 0;
		PatternScaleULV2 = 0;
		PatternTiling = 0;
		PatternRotate = 0;
		//InstanceColors = TArray<struct FLinearColor>();
		//ColorIndicies = TArray<TEnumAsByte<ETKCustomizeColorCategory>>();
		//ScalarParameters = TArray<struct FCustomizeMaterialScalarData>();
		InstanceIndex = 0;
	}
};


/**
 * 
 */
UCLASS()
class TEKKENGAME_API UCustomizeCharacterItem : public UObject
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = CustomizeCharacterItem)
		class UCharacterItem* CharacterItem;
	UPROPERTY(EditAnywhere, Category = CustomizeCharacterItem)
		TArray<struct FCustomizeMaterialInstanceColorData> ItemColors;
	UPROPERTY(EditAnywhere, Category = CustomizeCharacterItem)
		TArray<struct FLinearColor> IndexColors;
	UPROPERTY(EditAnywhere, Category = CustomizeCharacterItem)
		TArray<struct FLinearColor> Index0Colors;
	UPROPERTY(EditAnywhere, Category = CustomizeCharacterItem)
		TArray<class UCustomizeCharacterItem*> DependencyItems;
};
