// The order of the includes matters!
// TutPG.h needs to come first. _.generated.h files need to come last!

#include "TutPG.h"
#include "TutPGPlayerController.h"
#include "TutPGCharacter.h"
#include "TutPGGameMode.h"


ATutPGGameMode::ATutPGGameMode(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PlayerControllerClass = ATutPGPlayerController::StaticClass();
	DefaultPawnClass = ATutPGCharacter::StaticClass();
}




