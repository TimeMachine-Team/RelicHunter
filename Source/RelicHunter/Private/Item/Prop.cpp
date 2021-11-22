// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/Prop.h"
#include "Components/BillboardComponent.h"

AProp::AProp()
{
	PrimaryActorTick.bCanEverTick = false;
	Count = 1;
	PropType = EPropType::Mission;

	Thumbnail = CreateDefaultSubobject<UBillboardComponent>(TEXT("Thumbnail"));
	Thumbnail->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	Thumbnail->SetVisibility(false);
}

void AProp::Destroy()
{
	if (this->GetOwner() != nullptr && this->PropType == EPropType::Mission) {
		return;
	}
	this->Destroy();
}

