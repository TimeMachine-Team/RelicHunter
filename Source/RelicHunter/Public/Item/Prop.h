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
	//�����Ʒ������
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category="ItemProperties")
	uint8 Count;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="ItemProperties")
	bool bCanBePileUp;

	//��Ʒ������
	UPROPERTY(EditDefaultsOnly, Category="ItemProperties")
	EPropType PropType;

	//�����ڵ�����ͼ
	UPROPERTY(EditDefaultsOnly, Category="ItemProperties")
	UBillboardComponent* Thumbnail;

public:
	AProp();

protected:
	UFUNCTION(BlueprintCallable)
	void Destroy();

};
