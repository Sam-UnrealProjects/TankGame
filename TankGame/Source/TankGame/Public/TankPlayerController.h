// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;

	virtual void Tick(float DeltaTime) override;
	
	virtual void BeginPlay() override;

	//Start the tank moving the barrel so that the shot would hit where
	//the crosshair intersects the world
	void AimTowardsCrosshair();
};
