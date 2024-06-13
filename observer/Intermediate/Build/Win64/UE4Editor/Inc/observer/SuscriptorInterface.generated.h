// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_SuscriptorInterface_generated_h
#error "SuscriptorInterface.generated.h already included, missing '#pragma once' in SuscriptorInterface.h"
#endif
#define OBSERVER_SuscriptorInterface_generated_h

#define observer_Source_observer_SuscriptorInterface_h_12_SPARSE_DATA
#define observer_Source_observer_SuscriptorInterface_h_12_RPC_WRAPPERS
#define observer_Source_observer_SuscriptorInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define observer_Source_observer_SuscriptorInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_API USuscriptorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USuscriptorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_API, USuscriptorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuscriptorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_API USuscriptorInterface(USuscriptorInterface&&); \
	OBSERVER_API USuscriptorInterface(const USuscriptorInterface&); \
public:


#define observer_Source_observer_SuscriptorInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_API USuscriptorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_API USuscriptorInterface(USuscriptorInterface&&); \
	OBSERVER_API USuscriptorInterface(const USuscriptorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_API, USuscriptorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USuscriptorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USuscriptorInterface)


#define observer_Source_observer_SuscriptorInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSuscriptorInterface(); \
	friend struct Z_Construct_UClass_USuscriptorInterface_Statics; \
public: \
	DECLARE_CLASS(USuscriptorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/observer"), OBSERVER_API) \
	DECLARE_SERIALIZER(USuscriptorInterface)


#define observer_Source_observer_SuscriptorInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	observer_Source_observer_SuscriptorInterface_h_12_GENERATED_UINTERFACE_BODY() \
	observer_Source_observer_SuscriptorInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define observer_Source_observer_SuscriptorInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	observer_Source_observer_SuscriptorInterface_h_12_GENERATED_UINTERFACE_BODY() \
	observer_Source_observer_SuscriptorInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define observer_Source_observer_SuscriptorInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISuscriptorInterface() {} \
public: \
	typedef USuscriptorInterface UClassType; \
	typedef ISuscriptorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define observer_Source_observer_SuscriptorInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~ISuscriptorInterface() {} \
public: \
	typedef USuscriptorInterface UClassType; \
	typedef ISuscriptorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define observer_Source_observer_SuscriptorInterface_h_9_PROLOG
#define observer_Source_observer_SuscriptorInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	observer_Source_observer_SuscriptorInterface_h_12_SPARSE_DATA \
	observer_Source_observer_SuscriptorInterface_h_12_RPC_WRAPPERS \
	observer_Source_observer_SuscriptorInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define observer_Source_observer_SuscriptorInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	observer_Source_observer_SuscriptorInterface_h_12_SPARSE_DATA \
	observer_Source_observer_SuscriptorInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	observer_Source_observer_SuscriptorInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class USuscriptorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID observer_Source_observer_SuscriptorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
