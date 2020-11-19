// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EuroWar1800Character.h"
#include "TurnBasedHUD.generated.h"

/**
 * 
 */
UCLASS()
class EUROWAR1800_API ATurnBasedHUD : public AHUD
{
	GENERATED_BODY()

public:

	//bool bStartSelecting = false;
	
	//virtual void DrawHUD() override; // Same as tick function.

	//FVector2D InitialPoint; // Position of mouse when pressed.

	//FVector2D CurrentPoint; // Position of mouse while holding.

	//FVector2D GetMousePosition2D();

	//TArray<AEuroWar1800Character*> FoundActors;
};
