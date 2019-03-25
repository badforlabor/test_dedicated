// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "test_dedicatedGameMode.h"
#include "test_dedicatedCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atest_dedicatedGameMode::Atest_dedicatedGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
