// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpatialInventoryGameMode.h"
#include "SpatialInventoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpatialInventoryGameMode::ASpatialInventoryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
