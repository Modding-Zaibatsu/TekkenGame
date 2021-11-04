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
enum EItemCommonGroup
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
		TEnumAsByte<TKCharacterSkeletonSocketPos> SocketPosition;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		UClass* ItemBlueprint;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		float ItemHeight;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		FRotator DefinedHeadItemSlope;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		bool bDefaultItem;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = CharacterItem)
		TEnumAsByte<EItemCommonGroup> CommonGroup;
};
