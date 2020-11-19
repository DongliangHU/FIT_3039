// Fill out your copyright notice in the Description page of Project Settings.

#include "TurnBasedHUD.h"

/*void ATurnBasedHUD::DrawHUD()
{
	Super::DrawHUD();
	
	if (bStartSelecting)
	{
		if (FoundActors.Num() > 0)
		{
			for (int32 i = 0; i < FoundActors.Num(); i++)
			{
				FoundActors[i]->SetDeselected();
			}
		}
		
		FoundActors.Empty();
		
		CurrentPoint = GetMousePosition2D();
		float Width = CurrentPoint.X - InitialPoint.X;
		float Height = CurrentPoint.Y - InitialPoint.Y;
		DrawRect(FLinearColor(1, 0, 0, .15f), InitialPoint.X, InitialPoint.Y,
			Width, Height);

		GetActorsInSelectionRectangle<AEuroWar1800Character>(InitialPoint, CurrentPoint, FoundActors, false, false);

		if(FoundActors.Num() > 0)
		{
			for(int32 i = 0; i < FoundActors.Num(); i++)
			{
				FoundActors[i]->SetSelected();
			}
		}
	}
}

FVector2D ATurnBasedHUD::GetMousePosition2D()
{
	float PosX;
	float PosY;
	GetOwningPlayerController()->GetMousePosition(PosX, PosY);

	return FVector2D(PosX, PosY);
}*/