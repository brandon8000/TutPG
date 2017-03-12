// Fill out your copyright notice in the Description page of Project Settings.

#include "TutPG.h"
#include "TutPGPlayerController.h"

void ATutPGPlayerController::MoveVertical(float Value)
{
	IControllableCharacter* pawn = Cast<IControllableCharacter>(GetPawn());
	if (pawn != NULL)
	{
		pawn->MoveVertical(Value);
	}
}
void ATutPGPlayerController::MoveHorizontal(float Value)
{
	IControllableCharacter* pawn = Cast<IControllableCharacter>(GetPawn());
	if (pawn != NULL)
	{
		pawn->MoveHorizontal(Value);
	}
}
void ATutPGPlayerController::SetupInputComponent()
{
	if (InputComponent == NULL)
	{
		InputComponent = ConstructObject<UInputComponent>(
			UInputComponent::StaticClass(), this, TEXT("PC_InputComponent0"));
		InputComponent->RegisterComponent();
	}
	InputComponent->BindAxis("MoveVertical", this,
		&ATutPGPlayerController::MoveVertical);
	InputComponent->BindAxis("MoveHorizontal", this,
		&ATutPGPlayerController::MoveHorizontal);
	this->bShowMouseCursor = true;
}