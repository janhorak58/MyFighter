// © Jan Horák 2021

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "KillEmAllAndPullTriggerGameMode.generated.h"

/**
 * 
 */
UCLASS()
class WINTERFIGHTER_API AKillEmAllAndPullTriggerGameMode : public AGameModeBase
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
private:
	UFUNCTION(BlueprintCallable)
	virtual void PawnKilled(APawn* PawnKilled);

	UPROPERTY(VisibleAnywhere)
	bool AreAllEnemiesDead = false;

	UFUNCTION(BlueprintPure)
	bool GetAreAllEnemiesDead();

	UFUNCTION(BlueprintCallable)
	void LevelComplete(bool bPlayerWon, AController* Controller);
	
};
