// Copyright Epic Games, Inc. All Rights Reserved.

#include "Character_controllerGameMode.h"
#include "Character_controllerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACharacter_controllerGameMode::ACharacter_controllerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
