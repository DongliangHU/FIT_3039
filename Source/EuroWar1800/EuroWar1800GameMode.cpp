// Copyright Epic Games, Inc. All Rights Reserved.

#include "EuroWar1800GameMode.h"
#include "EuroWar1800PlayerController.h"
#include "EuroWar1800Character.h"
#include "UObject/ConstructorHelpers.h"

AEuroWar1800GameMode::AEuroWar1800GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AEuroWar1800PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}