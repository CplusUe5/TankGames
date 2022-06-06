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

	FVector GetMousePos()
	{
		return MousePos;
	}

protected:
	UPROPERTY()
		class ATankPawn* TankPawn;

	UPROPERTY()
		FVector MousePos;

	void MoveForward(float Value);
	void MoveSide(float Value);
	void MoveRotation(float Value);
	void Fire();
	void FireSpecial();
};
