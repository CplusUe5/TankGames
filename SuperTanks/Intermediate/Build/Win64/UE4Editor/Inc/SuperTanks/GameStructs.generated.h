// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERTANKS_GameStructs_generated_h
#error "GameStructs.generated.h already included, missing '#pragma once' in GameStructs.h"
#endif
#define SUPERTANKS_GameStructs_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SuperTanks_Source_SuperTanks_GameStructs_h


#define FOREACH_ENUM_ECANNONTYPE(op) \
	op(ECannonType::FireProjectile) \
	op(ECannonType::FireTrace) 

enum class ECannonType : uint8;
template<> SUPERTANKS_API UEnum* StaticEnum<ECannonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
