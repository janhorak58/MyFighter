// Fill out your copyright notice in the Description page of Project Settings.


#include "OpenableDoor.h"
#include "Engine/TriggerVolume.h"

// Sets default values for this component's properties
UOpenableDoor::UOpenableDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}



// Called every frame
void UOpenableDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!PressurePlate) return;
	if (PressurePlate->IsOverlappingActor(ActorThatOpens)) OpenDoor();
}

void UOpenableDoor::BeginPlay()
{
	Super::BeginPlay();

	if (!Talisman)
    {
        UE_LOG(LogTemp, Error, TEXT("%s's Talisman hasn't been set."), *GetOwner()->GetName());
    }

	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
}

void UOpenableDoor::OpenDoor() 
{
	GetOwner()->SetActorRotation(FRotator(GetOwner()->GetActorRotation().Pitch, GetOwner()->GetActorRotation().Roll, FinalYawAngle));
	UE_LOG(LogTemp, Warning, TEXT("Open Door!"));
}
