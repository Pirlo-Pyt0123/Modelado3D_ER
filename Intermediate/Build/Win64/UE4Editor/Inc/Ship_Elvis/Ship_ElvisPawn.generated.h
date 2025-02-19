// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHIP_ELVIS_Ship_ElvisPawn_generated_h
#error "Ship_ElvisPawn.generated.h already included, missing '#pragma once' in Ship_ElvisPawn.h"
#endif
#define SHIP_ELVIS_Ship_ElvisPawn_generated_h

#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_SPARSE_DATA
#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_RPC_WRAPPERS
#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShip_ElvisPawn(); \
	friend struct Z_Construct_UClass_AShip_ElvisPawn_Statics; \
public: \
	DECLARE_CLASS(AShip_ElvisPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ship_Elvis"), NO_API) \
	DECLARE_SERIALIZER(AShip_ElvisPawn)


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShip_ElvisPawn(); \
	friend struct Z_Construct_UClass_AShip_ElvisPawn_Statics; \
public: \
	DECLARE_CLASS(AShip_ElvisPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ship_Elvis"), NO_API) \
	DECLARE_SERIALIZER(AShip_ElvisPawn)


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShip_ElvisPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShip_ElvisPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShip_ElvisPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShip_ElvisPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShip_ElvisPawn(AShip_ElvisPawn&&); \
	NO_API AShip_ElvisPawn(const AShip_ElvisPawn&); \
public:


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShip_ElvisPawn(AShip_ElvisPawn&&); \
	NO_API AShip_ElvisPawn(const AShip_ElvisPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShip_ElvisPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShip_ElvisPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShip_ElvisPawn)


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AShip_ElvisPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AShip_ElvisPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AShip_ElvisPawn, CameraBoom); }


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_9_PROLOG
#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_SPARSE_DATA \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_RPC_WRAPPERS \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_INCLASS \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_SPARSE_DATA \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_INCLASS_NO_PURE_DECLS \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHIP_ELVIS_API UClass* StaticClass<class AShip_ElvisPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ship_Elvis_Source_Ship_Elvis_Ship_ElvisPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
