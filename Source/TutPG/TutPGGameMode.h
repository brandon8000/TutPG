// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "TutPGGameMode.generated.h"

/**
 * Previously
UCLASS()
class TUTPG_API ATutPGGameMode : public AGameMode
{
	GENERATED_BODY()

};
*/

UCLASS()
class TUTPG_API ATutPGGameMode : public AGameMode
{
	GENERATED_BODY()
		ATutPGGameMode(const class FObjectInitializer& ObjectInitializer);
};