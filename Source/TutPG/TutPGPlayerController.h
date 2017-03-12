// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "ControllableCharacter.h"
#include "TutPGPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TUTPG_API ATutPGPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	protected:
		void MoveVertical(float Value);
		void MoveHorizontal(float Value);

		virtual void SetupInputComponent() override;
	
	
};
