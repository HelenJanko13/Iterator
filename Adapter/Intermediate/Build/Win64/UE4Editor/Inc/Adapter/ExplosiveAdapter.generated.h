// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTER_ExplosiveAdapter_generated_h
#error "ExplosiveAdapter.generated.h already included, missing '#pragma once' in ExplosiveAdapter.h"
#endif
#define ADAPTER_ExplosiveAdapter_generated_h

#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_SPARSE_DATA
#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_RPC_WRAPPERS
#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveAdapter(); \
	friend struct Z_Construct_UClass_AExplosiveAdapter_Statics; \
public: \
	DECLARE_CLASS(AExplosiveAdapter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveAdapter) \
	virtual UObject* _getUObject() const override { return const_cast<AExplosiveAdapter*>(this); }


#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAExplosiveAdapter(); \
	friend struct Z_Construct_UClass_AExplosiveAdapter_Statics; \
public: \
	DECLARE_CLASS(AExplosiveAdapter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveAdapter) \
	virtual UObject* _getUObject() const override { return const_cast<AExplosiveAdapter*>(this); }


#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosiveAdapter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosiveAdapter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveAdapter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveAdapter(AExplosiveAdapter&&); \
	NO_API AExplosiveAdapter(const AExplosiveAdapter&); \
public:


#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveAdapter(AExplosiveAdapter&&); \
	NO_API AExplosiveAdapter(const AExplosiveAdapter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveAdapter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveAdapter)


#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__balaCanion() { return STRUCT_OFFSET(AExplosiveAdapter, balaCanion); }


#define Adapter_Source_Adapter_ExplosiveAdapter_h_9_PROLOG
#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_SPARSE_DATA \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_RPC_WRAPPERS \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_INCLASS \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Adapter_Source_Adapter_ExplosiveAdapter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_SPARSE_DATA \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_INCLASS_NO_PURE_DECLS \
	Adapter_Source_Adapter_ExplosiveAdapter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTER_API UClass* StaticClass<class AExplosiveAdapter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Adapter_Source_Adapter_ExplosiveAdapter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
