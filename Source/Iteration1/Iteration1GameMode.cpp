// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Iteration1GameMode.h"
#include "Iteration1Character.h"
#include "UObject/ConstructorHelpers.h"

AIteration1GameMode::AIteration1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
