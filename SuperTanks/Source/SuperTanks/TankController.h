// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankController.generated.h"

UCLASS()
class SUPERTANKS_API ATankController : public APlayerController
{
	GENERATED_BODY()
public:
	ATankController();


	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent() override;
	virtual void BeginPlay() override;
	FVector GetMousePos()//геттер для получения позиции мыши
	{
		return MousePos;
	}

protected:
	UPROPERTY()
		class ATankPawn* TankPawn;

	UPROPERTY()
		FVector MousePos;//для хранения данных позиции мыши

	void MoveForward(float Value);
	void MoveSide(float Value);
	void MoveRotation(float Value);
	void Fire();
	void FireSpecial();
};
