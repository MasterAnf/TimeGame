// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSTimeGame.h"
#include "UsableObject.h"


// Sets default values
AUsableObject::AUsableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUsableObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUsableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

