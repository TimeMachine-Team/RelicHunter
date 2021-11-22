// Fill out your copyright notice in the Description page of Project Settings.

#include "Item/Clothing.h"
#include "Math/UnrealMathUtility.h"

AClothing::AClothing()
{
	PrimaryActorTick.bCanEverTick = false;

	MeshComp->SetSimulatePhysics(true);
	MeshComp->SetEnableGravity(true);

	ClothingLevel = EClothingType::Level0;
	RandomXRange = 50;
	RandomYRange = 50;
	RandomZRange = 50;
}

void AClothing::Drop(FTransform CharacterTransform)
{	
	TSubclassOf<AClothing> ClothingClass;
	float RandomX = FMath::FRandRange(-RandomXRange, RandomXRange);
	float RandomY = FMath::FRandRange(-RandomYRange, RandomYRange);
	float RandomZ = FMath::FRandRange(0, RandomZRange);
	FVector Offset(RandomX, RandomY, RandomZ);
	CharacterTransform.SetLocation(CharacterTransform.GetLocation() + Offset);

	GetWorld()->SpawnActor<AClothing>(ClothingClass, CharacterTransform);
}
