// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_observerGameModeBase_generated_h
#error "observerGameModeBase.generated.h already included, missing '#pragma once' in observerGameModeBase.h"
#endif
#define OBSERVER_observerGameModeBase_generated_h

#define observer_Source_observer_observerGameModeBase_h_15_SPARSE_DATA
#define observer_Source_observer_observerGameModeBase_h_15_RPC_WRAPPERS
#define observer_Source_observer_observerGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define observer_Source_observer_observerGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAobserverGameModeBase(); \
	friend struct Z_Construct_UClass_AobserverGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AobserverGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/observer"), NO_API) \
	DECLARE_SERIALIZER(AobserverGameModeBase)


#define observer_Source_observer_observerGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAobserverGameModeBase(); \
	friend struct Z_Construct_UClass_AobserverGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AobserverGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/observer"), NO_API) \
	DECLARE_SERIALIZER(AobserverGameModeBase)


#define observer_Source_observer_observerGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AobserverGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AobserverGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AobserverGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AobserverGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AobserverGameModeBase(AobserverGameModeBase&&); \
	NO_API AobserverGameModeBase(const AobserverGameModeBase&); \
public:


#define observer_Source_observer_observerGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AobserverGameModeBase(AobserverGameModeBase&&); \
	NO_API AobserverGameModeBase(const AobserverGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AobserverGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AobserverGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AobserverGameModeBase)


#define observer_Source_observer_observerGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___reloj() { return STRUCT_OFFSET(AobserverGameModeBase, _reloj); } \
	FORCEINLINE static uint32 __PPO___sub1() { return STRUCT_OFFSET(AobserverGameModeBase, _sub1); } \
	FORCEINLINE static uint32 __PPO___sub2() { return STRUCT_OFFSET(AobserverGameModeBase, _sub2); }


#define observer_Source_observer_observerGameModeBase_h_12_PROLOG
#define observer_Source_observer_observerGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	observer_Source_observer_observerGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	observer_Source_observer_observerGameModeBase_h_15_SPARSE_DATA \
	observer_Source_observer_observerGameModeBase_h_15_RPC_WRAPPERS \
	observer_Source_observer_observerGameModeBase_h_15_INCLASS \
	observer_Source_observer_observerGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define observer_Source_observer_observerGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	observer_Source_observer_observerGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	observer_Source_observer_observerGameModeBase_h_15_SPARSE_DATA \
	observer_Source_observer_observerGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	observer_Source_observer_observerGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	observer_Source_observer_observerGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class AobserverGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID observer_Source_observer_observerGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
