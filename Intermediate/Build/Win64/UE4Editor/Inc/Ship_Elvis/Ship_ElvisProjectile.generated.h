// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SHIP_ELVIS_Ship_ElvisProjectile_generated_h
#error "Ship_ElvisProjectile.generated.h already included, missing '#pragma once' in Ship_ElvisProjectile.h"
#endif
#define SHIP_ELVIS_Ship_ElvisProjectile_generated_h

#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_SPARSE_DATA
#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShip_ElvisProjectile(); \
	friend struct Z_Construct_UClass_AShip_ElvisProjectile_Statics; \
public: \
	DECLARE_CLASS(AShip_ElvisProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ship_Elvis"), NO_API) \
	DECLARE_SERIALIZER(AShip_ElvisProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShip_ElvisProjectile(); \
	friend struct Z_Construct_UClass_AShip_ElvisProjectile_Statics; \
public: \
	DECLARE_CLASS(AShip_ElvisProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ship_Elvis"), NO_API) \
	DECLARE_SERIALIZER(AShip_ElvisProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShip_ElvisProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShip_ElvisProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShip_ElvisProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShip_ElvisProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShip_ElvisProjectile(AShip_ElvisProjectile&&); \
	NO_API AShip_ElvisProjectile(const AShip_ElvisProjectile&); \
public:


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShip_ElvisProjectile(AShip_ElvisProjectile&&); \
	NO_API AShip_ElvisProjectile(const AShip_ElvisProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShip_ElvisProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShip_ElvisProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShip_ElvisProjectile)


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AShip_ElvisProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AShip_ElvisProjectile, ProjectileMovement); }


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_12_PROLOG
#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_SPARSE_DATA \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_RPC_WRAPPERS \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_INCLASS \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_SPARSE_DATA \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHIP_ELVIS_API UClass* StaticClass<class AShip_ElvisProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ship_Elvis_Source_Ship_Elvis_Ship_ElvisProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
