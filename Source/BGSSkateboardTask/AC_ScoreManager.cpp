#include "AC_ScoreManager.h"

UAC_ScoreManager::UAC_ScoreManager()
{
	totalPoints = 0;
}

int UAC_ScoreManager::SetPoints(int pointsToAdd)
{
	totalPoints += pointsToAdd;

	return totalPoints;
}

int UAC_ScoreManager::ResetPoints()
{
	totalPoints = 0;
	return totalPoints; 
}

void UAC_ScoreManager::BeginPlay()
{
	Super::BeginPlay();
	
}
