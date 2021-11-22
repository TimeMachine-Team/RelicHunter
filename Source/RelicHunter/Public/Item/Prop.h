// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Item/ItemType.h"
#include "Prop.generated.h"

class UBillboardComponent;

/**
 * 
 */
UCLASS()
class RELICHUNTER_API AProp : public AItem
{
	GENERATED_BODY()

protected:
	//这堆物品的数量
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category="ItemProperties")
	uint8 Count;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="ItemProperties")
	bool bCanBePileUp;

	//物品的类型
	UPROPERTY(EditDefaultsOnly, Category="ItemProperties")
	EPropType PropType;

	//背包内的缩略图
	UPROPERTY(EditDefaultsOnly, Category="ItemProperties")
	UBillboardComponent* Thumbnail;

public:
	AProp();

protected:
	UFUNCTION(BlueprintCallable)
	void Destroy();

};
