// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ship_Elvis/NaveRoja.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveRoja() {}
// Cross Module References
	SHIP_ELVIS_API UClass* Z_Construct_UClass_ANaveRoja_NoRegister();
	SHIP_ELVIS_API UClass* Z_Construct_UClass_ANaveRoja();
	SHIP_ELVIS_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_Ship_Elvis();
// End Cross Module References
	void ANaveRoja::StaticRegisterNativesANaveRoja()
	{
	}
	UClass* Z_Construct_UClass_ANaveRoja_NoRegister()
	{
		return ANaveRoja::StaticClass();
	}
	struct Z_Construct_UClass_ANaveRoja_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveRoja_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_Ship_Elvis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveRoja_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveRoja.h" },
		{ "ModuleRelativePath", "NaveRoja.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveRoja_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveRoja>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveRoja_Statics::ClassParams = {
		&ANaveRoja::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveRoja_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveRoja_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveRoja()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveRoja_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveRoja, 2332520020);
	template<> SHIP_ELVIS_API UClass* StaticClass<ANaveRoja>()
	{
		return ANaveRoja::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveRoja(Z_Construct_UClass_ANaveRoja, &ANaveRoja::StaticClass, TEXT("/Script/Ship_Elvis"), TEXT("ANaveRoja"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveRoja);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
