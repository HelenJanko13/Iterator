// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTERNAVE_AdapterNavePawn_generated_h
#error "AdapterNavePawn.generated.h already included, missing '#pragma once' in AdapterNavePawn.h"
#endif
#define ADAPTERNAVE_AdapterNavePawn_generated_h

#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_SPARSE_DATA
#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_RPC_WRAPPERS
#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAdapterNavePawn(); \
	friend struct Z_Construct_UClass_AAdapterNavePawn_Statics; \
public: \
	DECLARE_CLASS(AAdapterNavePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterNave"), NO_API) \
	DECLARE_SERIALIZER(AAdapterNavePawn) \
	virtual UObject* _getUObject() const override { return const_cast<AAdapterNavePawn*>(this); }


#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAdapterNavePawn(); \
	friend struct Z_Construct_UClass_AAdapterNavePawn_Statics; \
public: \
	DECLARE_CLASS(AAdapterNavePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterNave"), NO_API) \
	DECLARE_SERIALIZER(AAdapterNavePawn) \
	virtual UObject* _getUObject() const override { return const_cast<AAdapterNavePawn*>(this); }


#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAdapterNavePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAdapterNavePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdapterNavePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterNavePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdapterNavePawn(AAdapterNavePawn&&); \
	NO_API AAdapterNavePawn(const AAdapterNavePawn&); \
public:


#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAdapterNavePawn(AAdapterNavePawn&&); \
	NO_API AAdapterNavePawn(const AAdapterNavePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAdapterNavePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAdapterNavePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAdapterNavePawn)


#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(AAdapterNavePawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AAdapterNavePawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AAdapterNavePawn, CameraBoom); }


#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_9_PROLOG
#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_SPARSE_DATA \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_RPC_WRAPPERS \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_INCLASS \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_PRIVATE_PROPERTY_OFFSET \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_SPARSE_DATA \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_INCLASS_NO_PURE_DECLS \
	AdapterNave_Source_AdapterNave_AdapterNavePawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERNAVE_API UClass* StaticClass<class AAdapterNavePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdapterNave_Source_AdapterNave_AdapterNavePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
