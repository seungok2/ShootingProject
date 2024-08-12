// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingProjectGameMode.h"
#include "ShootingProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootingProjectGameMode::AShootingProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
