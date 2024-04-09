// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tower_AscendGameMode.h"
#include "Tower_AscendCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATower_AscendGameMode::ATower_AscendGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
