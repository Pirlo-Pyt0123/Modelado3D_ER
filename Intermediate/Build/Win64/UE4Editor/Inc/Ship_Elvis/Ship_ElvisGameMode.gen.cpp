// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ship_Elvis/Ship_ElvisGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShip_ElvisGameMode() {}
// Cross Module References
	SHIP_ELVIS_API UClass* Z_Construct_UClass_AShip_ElvisGameMode_NoRegister();
	SHIP_ELVIS_API UClass* Z_Construct_UClass_AShip_ElvisGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Ship_Elvis();
// End Cross Module References
	void AShip_ElvisGameMode::StaticRegisterNativesAShip_ElvisGameMode()
	{
	}
	UClass* Z_Construct_UClass_AShip_ElvisGameMode_NoRegister()
	{
		return AShip_ElvisGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShip_ElvisGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShip_ElvisGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ship_Elvis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShip_ElvisGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Ship_ElvisGameMode.h" },
		{ "ModuleRelativePath", "Ship_ElvisGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShip_ElvisGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShip_ElvisGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShip_ElvisGameMode_Statics::ClassParams = {
		&AShip_ElvisGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShip_ElvisGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShip_ElvisGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShip_ElvisGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShip_ElvisGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShip_ElvisGameMode, 1452257973);
	template<> SHIP_ELVIS_API UClass* StaticClass<AShip_ElvisGameMode>()
	{
		return AShip_ElvisGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShip_ElvisGameMode(Z_Construct_UClass_AShip_ElvisGameMode, &AShip_ElvisGameMode::StaticClass, TEXT("/Script/Ship_Elvis"), TEXT("AShip_ElvisGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShip_ElvisGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
