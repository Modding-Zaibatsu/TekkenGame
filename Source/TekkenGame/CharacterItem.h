// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/NoExportTypes.h"
#include "CharacterItem.generated.h"

UENUM(BlueprintType)
enum class CharacterItemEditor : uint8
{
	ID_PAU UMETA(DisplayName = "CharacterItemEditor::ID_PAU"), // 0
	ID_LAW UMETA(DisplayName = "CharacterItemEditor::ID_LAW"), // 1
	ID_KIN UMETA(DisplayName = "CharacterItemEditor::ID_KIN"), // 2
	ID_YOS UMETA(DisplayName = "CharacterItemEditor::ID_YOS"), // 3
	ID_HWO UMETA(DisplayName = "CharacterItemEditor::ID_HWO"), // 4
	ID_XIA UMETA(DisplayName = "CharacterItemEditor::ID_XIA"), // 5
	ID_JIN UMETA(DisplayName = "CharacterItemEditor::ID_JIN"), // 6
	ID_BRY UMETA(DisplayName = "CharacterItemEditor::ID_BRY"), // 7
	ID_HEI UMETA(DisplayName = "CharacterItemEditor::ID_HEI"), // 8
	ID_KAZ UMETA(DisplayName = "CharacterItemEditor::ID_KAZ"), // 9
	ID_STE UMETA(DisplayName = "CharacterItemEditor::ID_STE"), // 10
	ID_JAC UMETA(DisplayName = "CharacterItemEditor::ID_JAC"), // 11
	ID_ASK UMETA(DisplayName = "CharacterItemEditor::ID_ASK"), // 12
	ID_DVJ UMETA(DisplayName = "CharacterItemEditor::ID_DVJ"), // 13
	ID_FEN UMETA(DisplayName = "CharacterItemEditor::ID_FEN"), // 14
	ID_LIL UMETA(DisplayName = "CharacterItemEditor::ID_LIL"), // 15
	ID_DRA UMETA(DisplayName = "CharacterItemEditor::ID_DRA"), // 16
	ID_LEO UMETA(DisplayName = "CharacterItemEditor::ID_LEO"), // 17
	ID_LAR UMETA(DisplayName = "CharacterItemEditor::ID_LAR"), // 18
	ID_ASA UMETA(DisplayName = "CharacterItemEditor::ID_ASA"), // 19
	ID_ITA UMETA(DisplayName = "CharacterItemEditor::ID_ITA"), // 20
	ID_LTN UMETA(DisplayName = "CharacterItemEditor::ID_LTN"), // 21
	ID_DNC UMETA(DisplayName = "CharacterItemEditor::ID_DNC"), // 22
	ID_ARB UMETA(DisplayName = "CharacterItemEditor::ID_ARB"), // 23
	ID_MUT UMETA(DisplayName = "CharacterItemEditor::ID_MUT"), // 24
	ID_CRZ UMETA(DisplayName = "CharacterItemEditor::ID_CRZ"), // 25
	ID_KZM UMETA(DisplayName = "CharacterItemEditor::ID_KZM"), // 26
	ID_BS7 UMETA(DisplayName = "CharacterItemEditor::ID_BS7"), // 27
	ID_NIN UMETA(DisplayName = "CharacterItemEditor::ID_NIN"), // 28
	ID_FRV UMETA(DisplayName = "CharacterItemEditor::ID_FRV"), // 29
	ID_LEE UMETA(DisplayName = "CharacterItemEditor::ID_LEE"), // 30
	ID_BOB UMETA(DisplayName = "CharacterItemEditor::ID_BOB"), // 31
	ID_MRX UMETA(DisplayName = "CharacterItemEditor::ID_MRX"), // 32
	ID_KUM UMETA(DisplayName = "CharacterItemEditor::ID_KUM"), // 33
	ID_PAN UMETA(DisplayName = "CharacterItemEditor::ID_PAN"), // 34
	ID_EDD UMETA(DisplayName = "CharacterItemEditor::ID_EDD"), // 35
	ID_ELZ UMETA(DisplayName = "CharacterItemEditor::ID_ELZ"), // 36
	ID_MIG UMETA(DisplayName = "CharacterItemEditor::ID_MIG"), // 37
	ID_ZAK UMETA(DisplayName = "CharacterItemEditor::ID_ZAK"), // 38
	ID_YKZ UMETA(DisplayName = "CharacterItemEditor::ID_YKZ"), // 39
	ID_JA4 UMETA(DisplayName = "CharacterItemEditor::ID_JA4"), // 40
	ID_YHE UMETA(DisplayName = "CharacterItemEditor::ID_YHE"), // 41
	ID_DEK UMETA(DisplayName = "CharacterItemEditor::ID_DEK"), // 42
	ID_MRY UMETA(DisplayName = "CharacterItemEditor::ID_MRY"), // 43
	ID_MRZ UMETA(DisplayName = "CharacterItemEditor::ID_MRZ"), // 44
	ID_ANN UMETA(DisplayName = "CharacterItemEditor::ID_ANN"), // 45
	ID_LEI UMETA(DisplayName = "CharacterItemEditor::ID_LEI"), // 46
	ID_MAR UMETA(DisplayName = "CharacterItemEditor::ID_MAR"), // 47
	ID_AKI UMETA(DisplayName = "CharacterItemEditor::ID_AKI"), // 48
	ID_JUL UMETA(DisplayName = "CharacterItemEditor::ID_JUL"), // 49
	ID_NSA UMETA(DisplayName = "CharacterItemEditor::ID_NSA"), // 50
	ID_NSB UMETA(DisplayName = "CharacterItemEditor::ID_NSB"), // 51
	ID_ZAF UMETA(DisplayName = "CharacterItemEditor::ID_ZAF"), // 52
	ID_GAN UMETA(DisplayName = "CharacterItemEditor::ID_GAN"), // 53
	ID_NSC UMETA(DisplayName = "CharacterItemEditor::ID_NSC"), // 54
	ID_KNM UMETA(DisplayName = "CharacterItemEditor::ID_KNM"), // 55
	ID_NSD UMETA(DisplayName = "CharacterItemEditor::ID_NSD"), // 56
	ID_LAST UMETA(DisplayName = "CharacterItemEditor::ID_LAST"), // 57
	ID_MAX UMETA(DisplayName = "CharacterItemEditor::ID_MAX") // 58
};

UENUM(BlueprintType)
enum ItemSlotPosition
{
	NO_POS UMETA(DisplayName = "NO_POS"),
	HEAD UMETA(DisplayName = "HEAD"),
	HAIR UMETA(DisplayName = "HAIR"),
	UPPER UMETA(DisplayName = "UPPER"),
	LOWER UMETA(DisplayName = "LOWER"),
	FULL_BODY UMETA(DisplayName = "FULL_BODY"),
	GLASSES UMETA(DisplayName = "GLASSES"),
	FACE UMETA(DisplayName = "FACE"),
	HAIR_ACC UMETA(DisplayName = "HAIR_ACC"),
	UPPER_ACC UMETA(DisplayName = "UPPER_ACC"),
	LOWER_ACC UMETA(DisplayName = "LOWER_ACC"),
	FACE_HAIR UMETA(DisplayName = "FACE_HAIR"),
	MAKE_UP UMETA(DisplayName = "MAKE_UP"),
	FULL_HEAD UMETA(DisplayName = "FULL_HEAD"),
	EXTRA UMETA(DisplayName = "EXTRA"),
	ItemSlotPosition_MAX UMETA(DisplayName = "ItemSlotPosition_MAX")
};

UENUM(BlueprintType)
enum ItemCommonGroup
{
	unassigned_group UMETA(DisplayName = "unassigned_group"),
	cmn_aur UMETA(DisplayName = "cmn_aur"),
	cmn_eff UMETA(DisplayName = "cmn_eff"),
	cmn_gla UMETA(DisplayName = "cmn_gla"),
	cmn_har UMETA(DisplayName = "cmn_har"),
	cmn_hed_f UMETA(DisplayName = "cmn_hed_f"),
	cmn_hed_mf UMETA(DisplayName = "cmn_hed_mf"),
	cmn_hef UMETA(DisplayName = "cmn_hef"),
	cmn_oph_har UMETA(DisplayName = "cmn_oph_har"),
	cmn_oph_hed UMETA(DisplayName = "cmn_oph_hed"),
	cmn_opl UMETA(DisplayName = "cmn_opl"),
	cmn_opu UMETA(DisplayName = "cmn_opu"),
	wcf_bdf UMETA(DisplayName = "wcf_bdf"),
	wcf_bdl UMETA(DisplayName = "wcf_bdl"),
	wcf_bdu UMETA(DisplayName = "wcf_bdu"),
	wcf_bdu_leo UMETA(DisplayName = "wcf_bdu_leo"),
	wcm_bdl UMETA(DisplayName = "wcm_bdl"),
	wcm_bdu UMETA(DisplayName = "wcm_bdu"),
	wcm_bdu_leo UMETA(DisplayName = "wcm_bdu_leo"),
	wcm_bdu_naked UMETA(DisplayName = "wcm_bdu_naked"),
	unique UMETA(DisplayName = "unique"),
	EItemCommonGroup_MAX UMETA(DisplayName = "EItemCommonGroup_MAX")
};

UENUM(BlueprintType)
enum TKCharacterSkeletonSocketPos
{
	INVALID UMETA(DisplayName = "INVALID"),
	Head_Socket UMETA(DisplayName = "Head_Socket"),
	Spine2_Socket UMETA(DisplayName = "Spine2_Socket"),
	Hip_Socket UMETA(DisplayName = "Hip_Socket"),
	L_Hand_Socket UMETA(DisplayName = "L_Hand_Socket"),
	R_Hand_Socket UMETA(DisplayName = "R_Hand_Socket"),
	L_ForeArm_Socket UMETA(DisplayName = "L_ForeArm_Socket"),
	R_ForeArm_Socket UMETA(DisplayName = "R_ForeArm_Socket"),
	L_Shoulder_Socket UMETA(DisplayName = "L_Shoulder_Socket"),
	R_Shoulder_Socket UMETA(DisplayName = "R_Shoulder_Socket"),
	L_Arm_Socket UMETA(DisplayName = "L_Arm_Socket"),
	R_Arm_Socket UMETA(DisplayName = "R_Arm_Socket"),
	L_Leg_Socket UMETA(DisplayName = "L_Leg_Socket"),
	R_Leg_Socket UMETA(DisplayName = "R_Leg_Socket"),
	L_Foot_Socket UMETA(DisplayName = "L_Foot_Socket"),
	R_Foot_Socket UMETA(DisplayName = "R_Foot_Socket"),
	L_Toe_Socket UMETA(DisplayName = "L_Toe_Socket"),
	R_Toe_Socket UMETA(DisplayName = "R_Toe_Socket"),
	UNSET_SOCKET UMETA(DisplayName = "UNSET_SOCKET"),
	TKCharacterSkeletonSocketPos_MAX UMETA(DisplayName = "TKCharacterSkeletonSocketPos_MAX")
};

UENUM(BlueprintType)
enum TKCharacterCIType
{
	INVALID_AGAIN UMETA(DisplayName = "INVALID_AGAIN"),
	SkeletalMeshAnim UMETA(DisplayName = "SkeletalMeshAnim"),
	StaticMeshSocket UMETA(DisplayName = "StaticMeshSocket"),
	UNSET UMETA(DisplayName = "UNSET"),
	TKCharacterCIType_MAX UMETA(DisplayName = "TKCharacterCIType_MAX")
};

UENUM(BlueprintType)
enum TKAbilityItemId
{
	ITEM_NONE                        UMETA(DisplayName = "ITEM_NONE"),
	ITEM_CHARACTER_EFFECT            UMETA(DisplayName = "ITEM_CHARACTER_EFFECT"),
	ITEM_BASHOSEN                    UMETA(DisplayName = "ITEM_BASHOSEN"),
	ITEM_PEKIN_NABE                  UMETA(DisplayName = "ITEM_PEKIN_NABE"),
	ITEM_100TONHAMMER                UMETA(DisplayName = "ITEM_100TONHAMMER"),
	ITEM_FUKU_HARISEN                UMETA(DisplayName = "ITEM_FUKU_HARISEN"),
	ITEM_JAPANESE_SWORD              UMETA(DisplayName = "ITEM_JAPANESE_SWORD"),
	ITEM_CHINESE_SWORD               UMETA(DisplayName = "ITEM_CHINESE_SWORD"),
	ITEM_GRENADE                     UMETA(DisplayName = "ITEM_GRENADE"),
	ITEM_NUNCHAKU                    UMETA(DisplayName = "ITEM_NUNCHAKU"),
	ITEM_TONFA                       UMETA(DisplayName = "ITEM_TONFA"),
	ITEM_LIGHT_SPEAR                 UMETA(DisplayName = "ITEM_LIGHT_SPEAR"),
	ITEM_BONITO                      UMETA(DisplayName = "ITEM_BONITO"),
	ITEM_CHAMPION_BELT               UMETA(DisplayName = "ITEM_CHAMPION_BELT"),
	ITEM_TOUGOUBLADE                 UMETA(DisplayName = "ITEM_TOUGOUBLADE"),
	ITEM_MISSILEPOD                  UMETA(DisplayName = "ITEM_MISSILEPOD"),
	ITEM_GRENADE_LAUNCHER            UMETA(DisplayName = "ITEM_GRENADE_LAUNCHER"),
	ITEM_BOMB                        UMETA(DisplayName = "ITEM_BOMB"),
	ITEM_KUMA_STUFFED                UMETA(DisplayName = "ITEM_KUMA_STUFFED"),
	ITEM_MAGICAL_STICK               UMETA(DisplayName = "ITEM_MAGICAL_STICK"),
	ITEM_HAMMERHEAD                  UMETA(DisplayName = "ITEM_HAMMERHEAD"),
	ITEM_KINKOJI                     UMETA(DisplayName = "ITEM_KINKOJI"),
	ITEM_HARISEN                     UMETA(DisplayName = "ITEM_HARISEN"),
	ITEM_SLEDGEHAMMER                UMETA(DisplayName = "ITEM_SLEDGEHAMMER"),
	ITEM_NAIL_BAT                    UMETA(DisplayName = "ITEM_NAIL_BAT"),
	ITEM_PIKOPIKOHAMMER              UMETA(DisplayName = "ITEM_PIKOPIKOHAMMER"),
	ITEM_ZAPGUN                      UMETA(DisplayName = "ITEM_ZAPGUN"),
	ITEM_HANDGUN                     UMETA(DisplayName = "ITEM_HANDGUN"),
	ITEM_MODEL_GUN                   UMETA(DisplayName = "ITEM_MODEL_GUN"),
	ITEM_REVOLVER                    UMETA(DisplayName = "ITEM_REVOLVER"),
	ITEM_SHOTGUN                     UMETA(DisplayName = "ITEM_SHOTGUN"),
	ITEM_SHURIKEN                    UMETA(DisplayName = "ITEM_SHURIKEN"),
	ITEM_MEDICAL_BOTTLE              UMETA(DisplayName = "ITEM_MEDICAL_BOTTLE"),
	ITEM_ASSAULT_RIFLE               UMETA(DisplayName = "ITEM_ASSAULT_RIFLE"),
	ITEM_BEAM_RIFLE                  UMETA(DisplayName = "ITEM_BEAM_RIFLE"),
	ITEM_BOUQUET                     UMETA(DisplayName = "ITEM_BOUQUET"),
	ITEM_MAGIC_WAND                  UMETA(DisplayName = "ITEM_MAGIC_WAND"),
	ITEM_TOONKIGOU                   UMETA(DisplayName = "ITEM_TOONKIGOU"),
	ITEM_CHOCO_VANIRA                UMETA(DisplayName = "ITEM_CHOCO_VANIRA"),
	ITEM_MELTDOWN_BODY               UMETA(DisplayName = "ITEM_MELTDOWN_BODY"),
	ITEM_CRANE                       UMETA(DisplayName = "ITEM_CRANE"),
	ITEM_OGRE_CLUB                   UMETA(DisplayName = "ITEM_OGRE_CLUB"),
	ITEM_BAT                         UMETA(DisplayName = "ITEM_BAT"),
	ITEM_NAGINATA                    UMETA(DisplayName = "ITEM_NAGINATA"),
	ITEM_PAINT_CAT_GUN               UMETA(DisplayName = "ITEM_PAINT_CAT_GUN"),
	ITEM_TROMBONE                    UMETA(DisplayName = "ITEM_TROMBONE"),
	ITEM_NAE                         UMETA(DisplayName = "ITEM_NAE"),
	ITEM_FUSEN                       UMETA(DisplayName = "ITEM_FUSEN"),
	ITEM_CUPID_ARROW                 UMETA(DisplayName = "ITEM_CUPID_ARROW"),
	ITEM_LIGHT_BRADE                 UMETA(DisplayName = "ITEM_LIGHT_BRADE"),
	ITEM_GLOVE                       UMETA(DisplayName = "ITEM_GLOVE"),
	ITEM_WING_EFFECT                 UMETA(DisplayName = "ITEM_WING_EFFECT"),
	ITEM_RAGE_EFFECT                 UMETA(DisplayName = "ITEM_RAGE_EFFECT"),
	ITEM_STAN_LOT                    UMETA(DisplayName = "ITEM_STAN_LOT"),
	ITEM_MONKON                      UMETA(DisplayName = "ITEM_MONKON"),
	ITEM_MISSILE                     UMETA(DisplayName = "ITEM_MISSILE"),
	ITEM_YOUTOU_KOKUKEN              UMETA(DisplayName = "ITEM_YOUTOU_KOKUKEN"),
	ITEM_SWITCHEROO_KATYUSHA         UMETA(DisplayName = "ITEM_SWITCHEROO_KATYUSHA"),
	ITEM_FUDE                        UMETA(DisplayName = "ITEM_FUDE"),
	ITEM_ANGEL_CIRCLE                UMETA(DisplayName = "ITEM_ANGEL_CIRCLE"),
	ITEM_THROW_NIFE                  UMETA(DisplayName = "ITEM_THROW_NIFE"),
	ITEM_KZM_TIGER                   UMETA(DisplayName = "ITEM_KZM_TIGER"),
	ITEM_SF_HADOUKEN                 UMETA(DisplayName = "ITEM_SF_HADOUKEN"),
	ITEM_FISH_GUN                    UMETA(DisplayName = "ITEM_FISH_GUN"),
	ITEM_DRONE_STRIKE                UMETA(DisplayName = "ITEM_DRONE_STRIKE"),
	ITEM_MINI_TANK                   UMETA(DisplayName = "ITEM_MINI_TANK"),
	ITEM_MOTORCYCLE                  UMETA(DisplayName = "ITEM_MOTORCYCLE"),
	ITEM_DRINK_HAT                   UMETA(DisplayName = "ITEM_DRINK_HAT"),
	ITEM_WRESTLER_CHAIR              UMETA(DisplayName = "ITEM_WRESTLER_CHAIR"),
	ITEM_BAZOOKA                     UMETA(DisplayName = "ITEM_BAZOOKA"),
	ITEM_TIGER_FEED                  UMETA(DisplayName = "ITEM_TIGER_FEED"),
	ITEM_KUMA_SALMON                 UMETA(DisplayName = "ITEM_KUMA_SALMON"),
	ITEM_LEE_ROSE                    UMETA(DisplayName = "ITEM_LEE_ROSE"),
	ITEM_FRV_SCARECROW               UMETA(DisplayName = "ITEM_FRV_SCARECROW"),
	ITEM_MIG_APPLE                   UMETA(DisplayName = "ITEM_MIG_APPLE"),
	ITEM_LAR_ASSAULT_RIFLE           UMETA(DisplayName = "ITEM_LAR_ASSAULT_RIFLE"),
	ITEM_VIOLET_SUNGLASSES           UMETA(DisplayName = "ITEM_VIOLET_SUNGLASSES"),
	ITEM_WIN_DRAMA_BLOCK             UMETA(DisplayName = "ITEM_WIN_DRAMA_BLOCK"),
	ITEM_JIN_LIGHTNINGROD            UMETA(DisplayName = "ITEM_JIN_LIGHTNINGROD"),
	ITEM_KIN_BDF_NJPW                UMETA(DisplayName = "ITEM_KIN_BDF_NJPW"),
	ITEM_KIN_OPU_NJPW                UMETA(DisplayName = "ITEM_KIN_OPU_NJPW"),
	ITEM_KIN_HEF_NJPW                UMETA(DisplayName = "ITEM_KIN_HEF_NJPW"),
	ITEM_KUMA_CELLPHONE              UMETA(DisplayName = "ITEM_KUMA_CELLPHONE"),
	ITEM_LAR_BDF_NJPW                UMETA(DisplayName = "ITEM_LAR_BDF_NJPW"),
	ITEM_DAMVAL_EFFECT               UMETA(DisplayName = "ITEM_DAMVAL_EFFECT"),
	ITEM_DAMVAL_EFFECT2              UMETA(DisplayName = "ITEM_DAMVAL_EFFECT2"),
	ITEM_ANN_WEAPONS                 UMETA(DisplayName = "ITEM_ANN_WEAPONS"),
	ITEM_NSB_CANE                    UMETA(DisplayName = "ITEM_NSB_CANE"),
	ITEM_KNM_MASK                    UMETA(DisplayName = "ITEM_KNM_MASK"),
	ITEM_MAX                         UMETA(DisplayName = "ITEM_MAX")
};

/**
*
*/
UCLASS()
class TEKKENGAME_API UCharacterItem : public UObject
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		FString InstanceName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		TEnumAsByte<TKCharacterCIType> MeshType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		CharacterItemEditor Character;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		TEnumAsByte<ItemSlotPosition> ItemPosition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		class USkeletalMesh* SourceSkeletalMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		class USkeletalMesh* DependencyMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		class UStaticMesh* SourceStaticMesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		FTransform ItemOffsets;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		TEnumAsByte<TKCharacterSkeletonSocketPos> SocketPosition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		UClass* ItemBlueprint;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		bool bIsAbilityItem;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		bool bNeverHandOff;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		FTransform AbilityItemOffsets;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		TEnumAsByte<TKCharacterSkeletonSocketPos> AbilityItemSocket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		TEnumAsByte<TKAbilityItemId> AbilityID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		class UAnimBlueprint* ItemAB;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		bool bCanChangeClothBlend;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		float ItemHeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		bool bUseEquippedHeights;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		FRotator DefinedHeadItemSlope;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		bool bDefaultItem;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		TEnumAsByte<ItemCommonGroup> CommonGroup;
};
