// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTERNAVE_BounceBallInterface_generated_h
#error "BounceBallInterface.generated.h already included, missing '#pragma once' in BounceBallInterface.h"
#endif
#define ADAPTERNAVE_BounceBallInterface_generated_h

#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_SPARSE_DATA
#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_RPC_WRAPPERS
#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADAPTERNAVE_API UBounceBallInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBounceBallInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTERNAVE_API, UBounceBallInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBounceBallInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTERNAVE_API UBounceBallInterface(UBounceBallInterface&&); \
	ADAPTERNAVE_API UBounceBallInterface(const UBounceBallInterface&); \
public:


#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADAPTERNAVE_API UBounceBallInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTERNAVE_API UBounceBallInterface(UBounceBallInterface&&); \
	ADAPTERNAVE_API UBounceBallInterface(const UBounceBallInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTERNAVE_API, UBounceBallInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBounceBallInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBounceBallInterface)


#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBounceBallInterface(); \
	friend struct Z_Construct_UClass_UBounceBallInterface_Statics; \
public: \
	DECLARE_CLASS(UBounceBallInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AdapterNave"), ADAPTERNAVE_API) \
	DECLARE_SERIALIZER(UBounceBallInterface)


#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_GENERATED_UINTERFACE_BODY() \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_GENERATED_UINTERFACE_BODY() \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBounceBallInterface() {} \
public: \
	typedef UBounceBallInterface UClassType; \
	typedef IBounceBallInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBounceBallInterface() {} \
public: \
	typedef UBounceBallInterface UClassType; \
	typedef IBounceBallInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_10_PROLOG
#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_SPARSE_DATA \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_RPC_WRAPPERS \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdapterNave_Source_AdapterNave_BounceBallInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_SPARSE_DATA \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AdapterNave_Source_AdapterNave_BounceBallInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTERNAVE_API UClass* StaticClass<class UBounceBallInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdapterNave_Source_AdapterNave_BounceBallInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
