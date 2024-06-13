// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVER_TransformadorInterface_generated_h
#error "TransformadorInterface.generated.h already included, missing '#pragma once' in TransformadorInterface.h"
#endif
#define OBSERVER_TransformadorInterface_generated_h

#define observer_Source_observer_TransformadorInterface_h_13_SPARSE_DATA
#define observer_Source_observer_TransformadorInterface_h_13_RPC_WRAPPERS
#define observer_Source_observer_TransformadorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define observer_Source_observer_TransformadorInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_API UTransformadorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformadorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_API, UTransformadorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformadorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_API UTransformadorInterface(UTransformadorInterface&&); \
	OBSERVER_API UTransformadorInterface(const UTransformadorInterface&); \
public:


#define observer_Source_observer_TransformadorInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVER_API UTransformadorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVER_API UTransformadorInterface(UTransformadorInterface&&); \
	OBSERVER_API UTransformadorInterface(const UTransformadorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVER_API, UTransformadorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformadorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTransformadorInterface)


#define observer_Source_observer_TransformadorInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTransformadorInterface(); \
	friend struct Z_Construct_UClass_UTransformadorInterface_Statics; \
public: \
	DECLARE_CLASS(UTransformadorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/observer"), OBSERVER_API) \
	DECLARE_SERIALIZER(UTransformadorInterface)


#define observer_Source_observer_TransformadorInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	observer_Source_observer_TransformadorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	observer_Source_observer_TransformadorInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define observer_Source_observer_TransformadorInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	observer_Source_observer_TransformadorInterface_h_13_GENERATED_UINTERFACE_BODY() \
	observer_Source_observer_TransformadorInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define observer_Source_observer_TransformadorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITransformadorInterface() {} \
public: \
	typedef UTransformadorInterface UClassType; \
	typedef ITransformadorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define observer_Source_observer_TransformadorInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITransformadorInterface() {} \
public: \
	typedef UTransformadorInterface UClassType; \
	typedef ITransformadorInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define observer_Source_observer_TransformadorInterface_h_10_PROLOG
#define observer_Source_observer_TransformadorInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	observer_Source_observer_TransformadorInterface_h_13_SPARSE_DATA \
	observer_Source_observer_TransformadorInterface_h_13_RPC_WRAPPERS \
	observer_Source_observer_TransformadorInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define observer_Source_observer_TransformadorInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	observer_Source_observer_TransformadorInterface_h_13_SPARSE_DATA \
	observer_Source_observer_TransformadorInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	observer_Source_observer_TransformadorInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVER_API UClass* StaticClass<class UTransformadorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID observer_Source_observer_TransformadorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
