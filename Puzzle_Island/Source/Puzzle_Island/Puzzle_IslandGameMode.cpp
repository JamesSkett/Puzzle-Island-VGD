// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Puzzle_IslandGameMode.h"
#include "Puzzle_IslandCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzle_IslandGameMode::APuzzle_IslandGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
