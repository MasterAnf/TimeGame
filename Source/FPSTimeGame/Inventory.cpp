// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSTimeGame.h"
#include "Inventory.h"


// Sets default values for this component's properties
UInventory::UInventory()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	for (int i = 0; i < 8; i++)
	{
		m_Inventory[i] = "Empty";
	}
}


// Called when the game starts
void UInventory::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInventory::SetInventorySlot(int index, FString Item)
{
	if (index <= 8)
	{
		m_Inventory[index] = Item;
	}
}

FString UInventory::GetInventorySlot(int index)
{
	if (index <= 8)
	{
		return m_Inventory[index];
	}
	return m_Inventory[0];
}

