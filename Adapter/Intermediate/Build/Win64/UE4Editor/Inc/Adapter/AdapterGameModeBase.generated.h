// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTER_AdapterGameModeBase_generated_h
#error "AdapterGameModeBase.generated.h already included, missing '#pragma once' in AdapterGameModeBase.h"
#endif
#define ADAPTER_AdapterGameModeBase_generated_h

#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_SPARSE_DATA
#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_RPC_WRAPPERS
#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdapterGameModeBase(); \
	friend struct Z_Construct_UClass_AAdapterGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AAdapterGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), NO_API) \
	DECLARE_SERIALIZER(AAdapterGameModeBase)


#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAdapterGameModeBase(); \
	friend struct Z_Construct_UClass_AAdapterGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AAdapterGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Adapter"), NO_API) \
	DECLARE_SERIALIZER(AAdapterGameModeBase)


#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdapterGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdapterGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdapterGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdapterGameModeBase(AAdapterGameModeBase&&); \
	NO_API AAdapterGameModeBase(const AAdapterGameModeBase&); \
public:


#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdapterGameModeBase(AAdapterGameModeBase&&); \
	NO_API AAdapterGameModeBase(const AAdapterGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdapterGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdapterGameModeBase)


#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Jugador() { return STRUCT_OFFSET(AAdapterGameModeBase, Jugador); } \
	FORCEINLINE static uint32 __PPO__ExplosiveAdapter() { return STRUCT_OFFSET(AAdapterGameModeBase, ExplosiveAdapter); }


#define Adapter_Source_Adapter_AdapterGameModeBase_h_12_PROLOG
#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_SPARSE_DATA \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_RPC_WRAPPERS \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_INCLASS \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Adapter_Source_Adapter_AdapterGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_SPARSE_DATA \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Adapter_Source_Adapter_AdapterGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTER_API UClass* StaticClass<class AAdapterGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Adapter_Source_Adapter_AdapterGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
