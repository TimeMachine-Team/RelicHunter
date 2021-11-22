// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/ItemType.h"
#include "Item.h"
#include "Clothing.generated.h"

/**
 * 
 */
UCLASS()
class RELICHUNTER_API AClothing : public AItem
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="ItemProperties")
	EClothingType ClothingLevel;

	UPROPERTY(EditDefaultsOnly, Category="DropProperties", meta = (ClampMin = -50, ClampMax = 50))
	float RandomXRange;

	UPROPERTY(EditDefaultsOnly, Category = "DropProperties")
	float RandomYRange;

	UPROPERTY(EditDefaultsOnly, Category = "DropProperties")
	float RandomZRange;

public:
	AClothing();

protected:
	UFUNCTION(BlueprintCallable)
	void Drop(FTransform CharacterTransform);
};
