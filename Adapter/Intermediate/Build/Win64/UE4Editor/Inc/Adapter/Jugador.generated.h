// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTER_Jugador_generated_h
#error "Jugador.generated.h already included, missing '#pragma once' in Jugador.h"
#endif
#define ADAPTER_Jugador_generated_h

#define Adapter_Source_Adapter_Jugador_h_12_SPARSE_DATA
#define Adapter_Source_Adapter_Jugador_h_12_RPC_WRAPPERS
#define Adapter_Source_Adapter_Jugador_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Adapter_Source_Adapter_Jugador_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJugador(); \
	friend struct Z_Construct_UClass_AJugador_Statics; \
public: \
	DECLARE_CLASS(AJugador, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), NO_API) \
	DECLARE_SERIALIZER(AJugador) \
	virtual UObject* _getUObject() const override { return const_cast<AJugador*>(this); }


#define Adapter_Source_Adapter_Jugador_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAJugador(); \
	friend struct Z_Construct_UClass_AJugador_Statics; \
public: \
	DECLARE_CLASS(AJugador, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), NO_API) \
	DECLARE_SERIALIZER(AJugador) \
	virtual UObject* _getUObject() const override { return const_cast<AJugador*>(this); }


#define Adapter_Source_Adapter_Jugador_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AJugador(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AJugador) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJugador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJugador); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJugador(AJugador&&); \
	NO_API AJugador(const AJugador&); \
public:


#define Adapter_Source_Adapter_Jugador_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJugador(AJugador&&); \
	NO_API AJugador(const AJugador&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJugador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJugador); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJugador)


#define Adapter_Source_Adapter_Jugador_h_12_PRIVATE_PROPERTY_OFFSET
#define Adapter_Source_Adapter_Jugador_h_9_PROLOG
#define Adapter_Source_Adapter_Jugador_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_Jugador_h_12_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_Jugador_h_12_SPARSE_DATA \
	Adapter_Source_Adapter_Jugador_h_12_RPC_WRAPPERS \
	Adapter_Source_Adapter_Jugador_h_12_INCLASS \
	Adapter_Source_Adapter_Jugador_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Adapter_Source_Adapter_Jugador_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_Jugador_h_12_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_Jugador_h_12_SPARSE_DATA \
	Adapter_Source_Adapter_Jugador_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Adapter_Source_Adapter_Jugador_h_12_INCLASS_NO_PURE_DECLS \
	Adapter_Source_Adapter_Jugador_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTER_API UClass* StaticClass<class AJugador>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Adapter_Source_Adapter_Jugador_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
