// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "observer/SuscriptorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuscriptorInterface() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_USuscriptorInterface_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_USuscriptorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_observer();
// End Cross Module References
	void USuscriptorInterface::StaticRegisterNativesUSuscriptorInterface()
	{
	}
	UClass* Z_Construct_UClass_USuscriptorInterface_NoRegister()
	{
		return USuscriptorInterface::StaticClass();
	}
	struct Z_Construct_UClass_USuscriptorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USuscriptorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USuscriptorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "SuscriptorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USuscriptorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISuscriptorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USuscriptorInterface_Statics::ClassParams = {
		&USuscriptorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USuscriptorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USuscriptorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USuscriptorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USuscriptorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USuscriptorInterface, 180146456);
	template<> OBSERVER_API UClass* StaticClass<USuscriptorInterface>()
	{
		return USuscriptorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USuscriptorInterface(Z_Construct_UClass_USuscriptorInterface, &USuscriptorInterface::StaticClass, TEXT("/Script/observer"), TEXT("USuscriptorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USuscriptorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
