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
#ifdef ADAPTERNAVE_AdapterNaveProjectile_generated_h
#error "AdapterNaveProjectile.generated.h already included, missing '#pragma once' in AdapterNaveProjectile.h"
#endif
#define ADAPTERNAVE_AdapterNaveProjectile_generated_h

#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_SPARSE_DATA
#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdapterNaveProjectile(); \
	friend struct Z_Construct_UClass_AAdapterNaveProjectile_Statics; \
public: \
	DECLARE_CLASS(AAdapterNaveProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterNave"), NO_API) \
	DECLARE_SERIALIZER(AAdapterNaveProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAdapterNaveProjectile(); \
	friend struct Z_Construct_UClass_AAdapterNaveProjectile_Statics; \
public: \
	DECLARE_CLASS(AAdapterNaveProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterNave"), NO_API) \
	DECLARE_SERIALIZER(AAdapterNaveProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdapterNaveProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdapterNaveProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdapterNaveProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterNaveProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdapterNaveProjectile(AAdapterNaveProjectile&&); \
	NO_API AAdapterNaveProjectile(const AAdapterNaveProjectile&); \
public:


#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdapterNaveProjectile(AAdapterNaveProjectile&&); \
	NO_API AAdapterNaveProjectile(const AAdapterNaveProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdapterNaveProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterNaveProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdapterNaveProjectile)


#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AAdapterNaveProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAdapterNaveProjectile, ProjectileMovement); }


#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_12_PROLOG
#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_SPARSE_DATA \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_RPC_WRAPPERS \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_INCLASS \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_SPARSE_DATA \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_INCLASS_NO_PURE_DECLS \
	AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERNAVE_API UClass* StaticClass<class AAdapterNaveProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdapterNave_Source_AdapterNave_AdapterNaveProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
