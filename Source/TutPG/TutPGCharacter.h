// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "ControllableCharacter.h"
#include "TutPGCharacter.generated.h"

UCLASS()
class TUTPG_API ATutPGCharacter : public ACharacter, public IControllableCharacter
{
	GENERATED_BODY()

		ATutPGCharacter(const class FObjectInitializer& ObjectInitializer);

public:
	/*
	// Sets default values for this character's properties
	ATutPGCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	*/
	
	virtual void MoveHorizontal(float Value);
	virtual void MoveVertical(float Value);
};
