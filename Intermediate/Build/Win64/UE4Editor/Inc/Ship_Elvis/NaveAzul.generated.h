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
struct FHitResult;
#ifdef SHIP_ELVIS_NaveAzul_generated_h
#error "NaveAzul.generated.h already included, missing '#pragma once' in NaveAzul.h"
#endif
#define SHIP_ELVIS_NaveAzul_generated_h

#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_SPARSE_DATA
#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaveAzul(); \
	friend struct Z_Construct_UClass_ANaveAzul_Statics; \
public: \
	DECLARE_CLASS(ANaveAzul, AEnemigo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ship_Elvis"), NO_API) \
	DECLARE_SERIALIZER(ANaveAzul)


#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_INCLASS \
private: \
	static void StaticRegisterNativesANaveAzul(); \
	friend struct Z_Construct_UClass_ANaveAzul_Statics; \
public: \
	DECLARE_CLASS(ANaveAzul, AEnemigo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ship_Elvis"), NO_API) \
	DECLARE_SERIALIZER(ANaveAzul)


#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANaveAzul(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANaveAzul) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveAzul); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveAzul); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveAzul(ANaveAzul&&); \
	NO_API ANaveAzul(const ANaveAzul&); \
public:


#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveAzul(ANaveAzul&&); \
	NO_API ANaveAzul(const ANaveAzul&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveAzul); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveAzul); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaveAzul)


#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NaveEnemigaAzul() { return STRUCT_OFFSET(ANaveAzul, NaveEnemigaAzul); } \
	FORCEINLINE static uint32 __PPO__NavePum() { return STRUCT_OFFSET(ANaveAzul, NavePum); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(ANaveAzul, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__OscillationAmplitude() { return STRUCT_OFFSET(ANaveAzul, OscillationAmplitude); } \
	FORCEINLINE static uint32 __PPO__OscillationFrequency() { return STRUCT_OFFSET(ANaveAzul, OscillationFrequency); }


#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_7_PROLOG
#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_PRIVATE_PROPERTY_OFFSET \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_SPARSE_DATA \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_RPC_WRAPPERS \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_INCLASS \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_PRIVATE_PROPERTY_OFFSET \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_SPARSE_DATA \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_INCLASS_NO_PURE_DECLS \
	Ship_Elvis_Source_Ship_Elvis_NaveAzul_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHIP_ELVIS_API UClass* StaticClass<class ANaveAzul>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ship_Elvis_Source_Ship_Elvis_NaveAzul_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
