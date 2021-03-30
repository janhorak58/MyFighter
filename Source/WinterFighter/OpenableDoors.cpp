// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenableDoors.h"

// Sets default values
AOpenableDoors::AOpenableDoors()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AOpenableDoors::OpenDoor() 
{
	SetActorRotation(FRotator(GetActorRotation().Pitch, GetActorRotation().Roll, FinalYawAngle));
	UE_LOG(LogTemp, Warning, TEXT("Open Door!"));
}

