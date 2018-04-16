// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TestinGroundsGameMode.h"
#include "TestinGroundsHUD.h"
#include "Player/FirstPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestinGroundsGameMode::ATestinGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Character/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestinGroundsHUD::StaticClass();
}
