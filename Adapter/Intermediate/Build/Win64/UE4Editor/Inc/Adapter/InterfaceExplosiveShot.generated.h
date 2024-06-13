// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADAPTER_InterfaceExplosiveShot_generated_h
#error "InterfaceExplosiveShot.generated.h already included, missing '#pragma once' in InterfaceExplosiveShot.h"
#endif
#define ADAPTER_InterfaceExplosiveShot_generated_h

#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_SPARSE_DATA
#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_RPC_WRAPPERS
#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADAPTER_API UInterfaceExplosiveShot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceExplosiveShot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTER_API, UInterfaceExplosiveShot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceExplosiveShot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTER_API UInterfaceExplosiveShot(UInterfaceExplosiveShot&&); \
	ADAPTER_API UInterfaceExplosiveShot(const UInterfaceExplosiveShot&); \
public:


#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADAPTER_API UInterfaceExplosiveShot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADAPTER_API UInterfaceExplosiveShot(UInterfaceExplosiveShot&&); \
	ADAPTER_API UInterfaceExplosiveShot(const UInterfaceExplosiveShot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADAPTER_API, UInterfaceExplosiveShot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceExplosiveShot); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceExplosiveShot)


#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterfaceExplosiveShot(); \
	friend struct Z_Construct_UClass_UInterfaceExplosiveShot_Statics; \
public: \
	DECLARE_CLASS(UInterfaceExplosiveShot, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Adapter"), ADAPTER_API) \
	DECLARE_SERIALIZER(UInterfaceExplosiveShot)


#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_GENERATED_UINTERFACE_BODY() \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_GENERATED_UINTERFACE_BODY() \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterfaceExplosiveShot() {} \
public: \
	typedef UInterfaceExplosiveShot UClassType; \
	typedef IInterfaceExplosiveShot ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterfaceExplosiveShot() {} \
public: \
	typedef UInterfaceExplosiveShot UClassType; \
	typedef IInterfaceExplosiveShot ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_10_PROLOG
#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_SPARSE_DATA \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_RPC_WRAPPERS \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Adapter_Source_Adapter_InterfaceExplosiveShot_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_SPARSE_DATA \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Adapter_Source_Adapter_InterfaceExplosiveShot_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADAPTER_API UClass* StaticClass<class UInterfaceExplosiveShot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Adapter_Source_Adapter_InterfaceExplosiveShot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
