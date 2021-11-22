// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EPropType : uint8{
	Consumption		UMETA(DisplayName = "Consumption"),
	Mission			UMETA(DisplayName = "Mission"),
	Special			UMETA(DisplayName = "Special")
};

UENUM(BlueprintType)
enum class EClothingType : uint8{
	Level0	UMETA(DisplayName = "Level0"),	//Ä¬ÈÏ·þ×°
	Level1	UMETA(DisplayName = "Level1"),
	Level2	UMETA(DisplayName = "Level2"),
	Level3	UMETA(DisplayName = "Level3"),
	Level4	UMETA(DisplayName = "Level4"),
	Level5	UMETA(DisplayName = "Level5")
};
