// Copyright Epic Games, Inc. All Rights Reserved.

#include "GalagaUSFXGameMode.h"
#include "GalagaUSFXPawn.h"

AGalagaUSFXGameMode::AGalagaUSFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalagaUSFXPawn::StaticClass();
}

