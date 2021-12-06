// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab1_Black_HarrisonGameMode.h"
#include "Lab1_Black_HarrisonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab1_Black_HarrisonGameMode::ALab1_Black_HarrisonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
