// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Cannon.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankPawn.generated.h"


class UStaticMeshComponent;
class UCameraComponent;
class USpringArmComponent;
class ATankController;
class ACannon;

UCLASS()
class SUPERTANKS_API ATankPawn : public APawn
{
	GENERATED_BODY()

public:
	ATankPawn();

	UFUNCTION()
		void Fire();
	UFUNCTION()
		void FireSpecial();
	UFUNCTION()
		void MoveForward(float value);
	UFUNCTION()
		void MoveSide(float Value);
	UFUNCTION()
		void MoveRotation(float Value);
	UFUNCTION()
		void Tick(float DeltaSeconds) override;
	UFUNCTION()
		virtual void BeginPlay() override;

protected:
	UPROPERTY()
		ATankController* TankController;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class UStaticMeshComponent* TurretMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
		class UCameraComponent* Camera;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
		float MoveSpeed = 300.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Right")
		float RightSpeed = 3.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Rotation")
		float RotationSpeed = 10.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|Speed")
		float TurretInterpolationKey = 0.1f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Turret|Speed")
		float TurretRotationInterpolationKey = 0.5f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement|InterPolationKey")
		float InterPolationKey = 0.3f;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")
		UArrowComponent* CannonSetupPoint;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Turret|Cannon")
		TSubclassOf<ACannon> CannonClass;

	UPROPERTY()
		ACannon* Cannon;

	float TargetForwardAxisValue = 0.0f;
	float TargetSideAxisValue = 0.0f;
	float TargetRotationAxisValue = 0.0f;
	float CurrentRightAxisValue = 0.0f;

	void SetupCannon();
};
