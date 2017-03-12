// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/* Previously:
//#include "GameFramework/Actor.h"

UCLASS()
class TUTPG_API AControllableCharacter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AControllableCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
};
*/

#include "Object.h"
#include "ControllableCharacter.generated.h"


UINTERFACE()
class TUTPG_API UControllableCharacter : public UInterface{
	GENERATED_UINTERFACE_BODY()
};

class TUTPG_API IControllableCharacter{
	GENERATED_IINTERFACE_BODY()

	virtual void MoveVertical(float Value);
	virtual void MoveHorizontal(float Value);
};