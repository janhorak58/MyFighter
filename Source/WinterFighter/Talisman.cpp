// Fill out your copyright notice in the Description page of Project Settings.


#include "Talisman.h"
#include "OpenableDoors.h"

// Sets default values
ATalisman::ATalisman()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATalisman::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATalisman::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}

void ATalisman::OpenDoors() 
{
	for (AOpenableDoors* Door : DoorsToOpen)
	{
		Door->OpenDoor();
	}
}

