// © Jan Horák 2021


#include "Guide.h"

// Sets default values
AGuide::AGuide()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGuide::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGuide::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGuide::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FName AGuide::GetGuideMessage() 
{
	return GuideMessage;
}

