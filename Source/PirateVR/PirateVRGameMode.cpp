// Copyright Epic Games, Inc. All Rights Reserved.

#include "PirateVRGameMode.h"
#include "PirateVRCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "ShipPawn.h" 

APirateVRGameMode::APirateVRGameMode()
{
	DefaultPawnClass = AShipPawn::StaticClass(); // ShipPawn s�n�f�n�z� burada kullan�n

}
