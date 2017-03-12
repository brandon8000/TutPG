// Fill out your copyright notice in the Description page of Project Settings.

#include "TutPG.h"
#include "ControllableCharacter.h"

/*Previously:
// Sets default values
AControllableCharacter::AControllableCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AControllableCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AControllableCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}
*/

UControllableCharacter::UControllableCharacter(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer){
	//not sure if anything goes here
}

void IControllableCharacter::MoveVertical(float Value){
	//implement...
}

void IControllableCharacter::MoveHorizontal(float Value){
	//implement...
}