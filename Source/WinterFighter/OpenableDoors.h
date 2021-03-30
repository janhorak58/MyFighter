// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OpenableDoors.generated.h"

UCLASS()
class WINTERFIGHTER_API AOpenableDoors : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOpenableDoors();

	UFUNCTION(BlueprintCallable)
	void OpenDoor();

private:
	UPROPERTY(EditAnywhere)
	float FinalYawAngle = 0.f;

};
