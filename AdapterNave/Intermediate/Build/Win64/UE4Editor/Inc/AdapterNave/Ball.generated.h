// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
struct FVector;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ADAPTERNAVE_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define ADAPTERNAVE_Ball_generated_h

#define AdapterNave_Source_AdapterNave_Ball_h_13_SPARSE_DATA
#define AdapterNave_Source_AdapterNave_Ball_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall); \
	DECLARE_FUNCTION(execEnableCollision); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execCalculateReflectionVelocity); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define AdapterNave_Source_AdapterNave_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall); \
	DECLARE_FUNCTION(execEnableCollision); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execCalculateReflectionVelocity); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define AdapterNave_Source_AdapterNave_Ball_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterNave"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define AdapterNave_Source_AdapterNave_Ball_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AdapterNave"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define AdapterNave_Source_AdapterNave_Ball_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define AdapterNave_Source_AdapterNave_Ball_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define AdapterNave_Source_AdapterNave_Ball_h_13_PRIVATE_PROPERTY_OFFSET
#define AdapterNave_Source_AdapterNave_Ball_h_10_PROLOG
#define AdapterNave_Source_AdapterNave_Ball_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterNave_Source_AdapterNave_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	AdapterNave_Source_AdapterNave_Ball_h_13_SPARSE_DATA \
	AdapterNave_Source_AdapterNave_Ball_h_13_RPC_WRAPPERS \
	AdapterNave_Source_AdapterNave_Ball_h_13_INCLASS \
	AdapterNave_Source_AdapterNave_Ball_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterNave_Source_AdapterNave_Ball_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterNave_Source_AdapterNave_Ball_h_13_PRIVATE_PROPERTY_OFFSET \
	AdapterNave_Source_AdapterNave_Ball_h_13_SPARSE_DATA \
	AdapterNave_Source_AdapterNave_Ball_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AdapterNave_Source_AdapterNave_Ball_h_13_INCLASS_NO_PURE_DECLS \
	AdapterNave_Source_AdapterNave_Ball_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERNAVE_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdapterNave_Source_AdapterNave_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
