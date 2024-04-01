// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AC_ScoreManager.generated.h"


UCLASS( ClassGroup=(Score), meta=(BlueprintSpawnableComponent) )
class BGSSKATEBOARDTASK_API UAC_ScoreManager : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY() int totalPoints; 
	
public:	
	UAC_ScoreManager();

	UFUNCTION(BlueprintCallable) int SetPoints(int pointsToAdd);
	UFUNCTION(BlueprintCallable) int ResetPoints();
	
protected:
	virtual void BeginPlay() override;
		
};