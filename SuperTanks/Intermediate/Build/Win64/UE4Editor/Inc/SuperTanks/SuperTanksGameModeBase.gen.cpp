// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperTanks/SuperTanksGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperTanksGameModeBase() {}
// Cross Module References
	SUPERTANKS_API UClass* Z_Construct_UClass_ASuperTanksGameModeBase_NoRegister();
	SUPERTANKS_API UClass* Z_Construct_UClass_ASuperTanksGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SuperTanks();
// End Cross Module References
	void ASuperTanksGameModeBase::StaticRegisterNativesASuperTanksGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASuperTanksGameModeBase_NoRegister()
	{
		return ASuperTanksGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASuperTanksGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperTanksGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperTanks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperTanksGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SuperTanksGameModeBase.h" },
		{ "ModuleRelativePath", "SuperTanksGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperTanksGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperTanksGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASuperTanksGameModeBase_Statics::ClassParams = {
		&ASuperTanksGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASuperTanksGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperTanksGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperTanksGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASuperTanksGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASuperTanksGameModeBase, 3814523628);
	template<> SUPERTANKS_API UClass* StaticClass<ASuperTanksGameModeBase>()
	{
		return ASuperTanksGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASuperTanksGameModeBase(Z_Construct_UClass_ASuperTanksGameModeBase, &ASuperTanksGameModeBase::StaticClass, TEXT("/Script/SuperTanks"), TEXT("ASuperTanksGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperTanksGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
