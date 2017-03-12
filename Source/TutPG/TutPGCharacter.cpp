// Fill out your copyright notice in the Description page of Project Settings.

#include "TutPG.h"
#include "TutPGCharacter.h"

ATutPGCharacter::ATutPGCharacter(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 0.0f, 540.0f);
	GetCharacterMovement()->MaxWalkSpeed = 400.0f;
}
void ATutPGCharacter::MoveVertical(float Value)
{
	if (Controller != NULL && Value != 0.0f)
	{
		const FVector moveDir = FVector(1, 0, 0);
		AddMovementInput(moveDir, Value);
	}
}
void ATutPGCharacter::MoveHorizontal(float Value)
{
	if (Controller != NULL && Value != 0.0f)
	{
		const FVector moveDir = FVector(0, 1, 0);
		AddMovementInput(moveDir, Value);
	}
}

/*Previously:
// Sets default values
ATutPGCharacter::ATutPGCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATutPGCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATutPGCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ATutPGCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}
*/