// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERTANKS_TankController_generated_h
#error "TankController.generated.h already included, missing '#pragma once' in TankController.h"
#endif
#define SUPERTANKS_TankController_generated_h

#define SuperTanks_Source_SuperTanks_TankController_h_12_SPARSE_DATA
#define SuperTanks_Source_SuperTanks_TankController_h_12_RPC_WRAPPERS
#define SuperTanks_Source_SuperTanks_TankController_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SuperTanks_Source_SuperTanks_TankController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankController(); \
	friend struct Z_Construct_UClass_ATankController_Statics; \
public: \
	DECLARE_CLASS(ATankController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperTanks"), NO_API) \
	DECLARE_SERIALIZER(ATankController)


#define SuperTanks_Source_SuperTanks_TankController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATankController(); \
	friend struct Z_Construct_UClass_ATankController_Statics; \
public: \
	DECLARE_CLASS(ATankController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperTanks"), NO_API) \
	DECLARE_SERIALIZER(ATankController)


#define SuperTanks_Source_SuperTanks_TankController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankController(ATankController&&); \
	NO_API ATankController(const ATankController&); \
public:


#define SuperTanks_Source_SuperTanks_TankController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankController(ATankController&&); \
	NO_API ATankController(const ATankController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankController)


#define SuperTanks_Source_SuperTanks_TankController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TankPawn() { return STRUCT_OFFSET(ATankController, TankPawn); }


#define SuperTanks_Source_SuperTanks_TankController_h_9_PROLOG
#define SuperTanks_Source_SuperTanks_TankController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SuperTanks_Source_SuperTanks_TankController_h_12_PRIVATE_PROPERTY_OFFSET \
	SuperTanks_Source_SuperTanks_TankController_h_12_SPARSE_DATA \
	SuperTanks_Source_SuperTanks_TankController_h_12_RPC_WRAPPERS \
	SuperTanks_Source_SuperTanks_TankController_h_12_INCLASS \
	SuperTanks_Source_SuperTanks_TankController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SuperTanks_Source_SuperTanks_TankController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SuperTanks_Source_SuperTanks_TankController_h_12_PRIVATE_PROPERTY_OFFSET \
	SuperTanks_Source_SuperTanks_TankController_h_12_SPARSE_DATA \
	SuperTanks_Source_SuperTanks_TankController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SuperTanks_Source_SuperTanks_TankController_h_12_INCLASS_NO_PURE_DECLS \
	SuperTanks_Source_SuperTanks_TankController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERTANKS_API UClass* StaticClass<class ATankController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SuperTanks_Source_SuperTanks_TankController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
