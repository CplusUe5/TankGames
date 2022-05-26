// Fill out your copyright notice in the Description page of Project Settings.


#include "TankController.h"
#include "TankPawn.h"

ATankController::ATankController()
{

}

void ATankController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &ATankController::MoveForward);
	InputComponent->BindAxis("MoveSide", this, &ATankController::MoveSide);
	InputComponent->BindAxis("MoveRotation", this, &ATankController::MoveRotation);
}

void ATankController::BeginPlay()
{
	Super::BeginPlay();
	TankPawn = Cast<ATankPawn>(GetPawn());
}

void ATankController::MoveForward(float Value)
{
	TankPawn->MoveForward(Value);
}

void ATankController::MoveSide(float Value)
{
	TankPawn->MoveSide(Value);
}

void ATankController::MoveRotation(float Value)
{
	TankPawn->MoveRotation(Value);
}
