// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Handle.generated.h"

/**
 * 
 */
UCLASS()
class WINTERFIGHTER_API AHandle : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void HandleActivated();
private:
	UPROPERTY(EditAnywhere)
	TArray<class ARamp*> RampsToOpen;
	
};
