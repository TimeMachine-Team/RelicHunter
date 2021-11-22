// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class UStaticMeshComponent;

UCLASS()
class RELICHUNTER_API AItem : public AActor
{
	GENERATED_BODY()

protected:
	//物品模型
	UPROPERTY(EditDefaultsOnly, Category="ItemProperties")
	UStaticMeshComponent* MeshComp;

	
public:	
	// Sets default values for this actor's properties
	AItem();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
