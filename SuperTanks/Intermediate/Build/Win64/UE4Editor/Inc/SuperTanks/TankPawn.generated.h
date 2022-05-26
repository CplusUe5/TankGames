// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERTANKS_TankPawn_generated_h
#error "TankPawn.generated.h already included, missing '#pragma once' in TankPawn.h"
#endif
#define SUPERTANKS_TankPawn_generated_h

#define SuperTanks_Source_SuperTanks_TankPawn_h_14_SPARSE_DATA
#define SuperTanks_Source_SuperTanks_TankPawn_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveRotation); \
	DECLARE_FUNCTION(execMoveSide); \
	DECLARE_FUNCTION(execMoveForward);


#define SuperTanks_Source_SuperTanks_TankPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveRotation); \
	DECLARE_FUNCTION(execMoveSide); \
	DECLARE_FUNCTION(execMoveForward);


#define SuperTanks_Source_SuperTanks_TankPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperTanks"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn)


#define SuperTanks_Source_SuperTanks_TankPawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend struct Z_Construct_UClass_ATankPawn_Statics; \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperTanks"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn)


#define SuperTanks_Source_SuperTanks_TankPawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public:


#define SuperTanks_Source_SuperTanks_TankPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankPawn)


#define SuperTanks_Source_SuperTanks_TankPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodyMesh() { return STRUCT_OFFSET(ATankPawn, BodyMesh); } \
	FORCEINLINE static uint32 __PPO__TurretMesh() { return STRUCT_OFFSET(ATankPawn, TurretMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ATankPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ATankPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(ATankPawn, MoveSpeed); } \
	FORCEINLINE static uint32 __PPO__RightSpeed() { return STRUCT_OFFSET(ATankPawn, RightSpeed); } \
	FORCEINLINE static uint32 __PPO__RotationSpeed() { return STRUCT_OFFSET(ATankPawn, RotationSpeed); }


#define SuperTanks_Source_SuperTanks_TankPawn_h_11_PROLOG
#define SuperTanks_Source_SuperTanks_TankPawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_SPARSE_DATA \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_RPC_WRAPPERS \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_INCLASS \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SuperTanks_Source_SuperTanks_TankPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_PRIVATE_PROPERTY_OFFSET \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_SPARSE_DATA \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_INCLASS_NO_PURE_DECLS \
	SuperTanks_Source_SuperTanks_TankPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERTANKS_API UClass* StaticClass<class ATankPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SuperTanks_Source_SuperTanks_TankPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
