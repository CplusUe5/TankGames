#include "TankController.h"
#include "TankPawn.h"
#include "DrawDebugHelpers.h"

ATankController::ATankController()
{
	bShowMouseCursor = true;
}

void ATankController::Tick(float DeltaTime)
{
	FVector mouseDerection;
	DeprojectMousePositionToWorld(MousePos, mouseDerection);
	FVector PawnPos = TankPawn->GetActorLocation();
	MousePos.Z = PawnPos.Z;
	FVector dir = MousePos - PawnPos;
	dir.Normalize();
	MousePos = PawnPos + dir * 1000;
	DrawDebugLine(GetWorld(), PawnPos, MousePos, FColor::Green, false, 0.1f, 0, 5);
}

void ATankController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("MoveForward", this, &ATankController::MoveForward);
	InputComponent->BindAxis("MoveSide", this, &ATankController::MoveSide);
	InputComponent->BindAxis("MoveRotation", this, &ATankController::MoveRotation);
	InputComponent->BindAction("Fire", IE_Pressed, this, &ATankController::Fire);
	InputComponent->BindAction("FireSpecial", IE_Pressed, this, &ATankController::FireSpecial);
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

void ATankController::Fire()
{
	TankPawn->Fire();
}

void ATankController::FireSpecial()
{
	TankPawn->FireSpecial();
}

