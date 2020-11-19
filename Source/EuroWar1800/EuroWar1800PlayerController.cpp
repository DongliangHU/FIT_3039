// Copyright Epic Games, Inc. All Rights Reserved.

#include "EuroWar1800PlayerController.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "EuroWar1800Character.h"
#include "Engine/World.h"

AEuroWar1800PlayerController::AEuroWar1800PlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}

void AEuroWar1800PlayerController::BeginPlay()
{
	HUDPointer = Cast<ATurnBasedHUD>(GetHUD());
}

void AEuroWar1800PlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);

	// keep updating the destination every tick while desired
	/*if (bMoveToMouseCursor)
	{
		MoveToMouseCursor();
	}*/
}

void AEuroWar1800PlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	//InputComponent->BindAction("SetDestination", IE_Pressed, this, &AEuroWar1800PlayerController::OnSetDestinationPressed);
	//InputComponent->BindAction("SetDestination", IE_Released, this, &AEuroWar1800PlayerController::OnSetDestinationReleased);

	//InputComponent->BindAction("Selection", IE_Pressed, this, &AEuroWar1800PlayerController::SelectionPressed);
	//InputComponent->BindAction("Selection", IE_Released, this, &AEuroWar1800PlayerController::SelectionReleased);
	
	// support touch devices 
	//InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AEuroWar1800PlayerController::MoveToTouchLocation);
	//InputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AEuroWar1800PlayerController::MoveToTouchLocation);

	//InputComponent->BindAction("ResetVR", IE_Pressed, this, &AEuroWar1800PlayerController::OnResetVR);
}

/*void AEuroWar1800PlayerController::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}
*/
/*void AEuroWar1800PlayerController::MoveToMouseCursor()
{
	if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled())
	{
		if (AEuroWar1800Character* MyPawn = Cast<AEuroWar1800Character>(GetPawn()))
		{
			if (MyPawn->GetCursorToWorld())
			{
				UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, MyPawn->GetCursorToWorld()->GetComponentLocation());
			}
		}
	}
	else
	{
		// Trace to see what is under the mouse cursor
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, false, Hit);

		if (Hit.bBlockingHit)
		{
			// We hit something, move there
			SetNewMoveDestination(Hit.ImpactPoint);
		}
	}
}

void AEuroWar1800PlayerController::MoveToTouchLocation(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	FVector2D ScreenSpaceLocation(Location);

	// Trace to see what is under the touch location
	FHitResult HitResult;
	GetHitResultAtScreenPosition(ScreenSpaceLocation, CurrentClickTraceChannel, true, HitResult);
	if (HitResult.bBlockingHit)
	{
		// We hit something, move there
		SetNewMoveDestination(HitResult.ImpactPoint);
	}
}

void AEuroWar1800PlayerController::SetNewMoveDestination(const FVector DestLocation)
{
	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		float const Distance = FVector::Dist(DestLocation, MyPawn->GetActorLocation());

		// We need to issue move command only if far enough in order for walk animation to play correctly
		if ((Distance > 120.0f))
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, DestLocation);
		}
	}
}*/

/*void AEuroWar1800PlayerController::OnSetDestinationPressed()
{
	// set flag to keep updating destination until released
	bMoveToMouseCursor = true;
}

void AEuroWar1800PlayerController::OnSetDestinationReleased()
{
	// clear flag to indicate we should stop updating the destination
	bMoveToMouseCursor = false;
}

void AEuroWar1800PlayerController::SelectionPressed()
{
	
	HUDPointer->InitialPoint = HUDPointer->GetMousePosition2D();
	HUDPointer->bStartSelecting = true;
	
}

void AEuroWar1800PlayerController::SelectionReleased()
{
	HUDPointer->bStartSelecting = false;
}*/