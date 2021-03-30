// Fill out your copyright notice in the Description page of Project Settings.


#include "Ramp.h"

// Sets default values
ARamp::ARamp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SetMobility(EComponentMobility::Movable);
}

// Called when the game starts or when spawned
void ARamp::BeginPlay()
{
	Super::BeginPlay();

	GlobalStartLocation = GetActorLocation();
	GlobalTargetLocation = GetTransform().TransformPosition(TargetLocation);
	
}

// Called every frame
void ARamp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bMove) 
	{
		MoveToPlace(DeltaTime); 
	}

}

void ARamp::MoveToPlace(float DeltaTime) 
{
	FVector Location = GetActorLocation();
		float JourneyLength = (GlobalTargetLocation - GlobalStartLocation).Size();
		float JourneyTravelled = (Location - GlobalStartLocation).Size();

		if (JourneyTravelled >= JourneyLength) return;

		FVector Direction = (GlobalTargetLocation - GlobalStartLocation).GetSafeNormal();
		Location += Speed * DeltaTime * Direction;
		SetActorLocation(Location);
}

void ARamp::SetMoveTrue() 
{
	bMove = true;
}

