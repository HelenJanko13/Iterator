// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdapterNave/BounceBallInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBounceBallInterface() {}
// Cross Module References
	ADAPTERNAVE_API UClass* Z_Construct_UClass_UBounceBallInterface_NoRegister();
	ADAPTERNAVE_API UClass* Z_Construct_UClass_UBounceBallInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AdapterNave();
// End Cross Module References
	void UBounceBallInterface::StaticRegisterNativesUBounceBallInterface()
	{
	}
	UClass* Z_Construct_UClass_UBounceBallInterface_NoRegister()
	{
		return UBounceBallInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBounceBallInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBounceBallInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AdapterNave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBounceBallInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BounceBallInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBounceBallInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBounceBallInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBounceBallInterface_Statics::ClassParams = {
		&UBounceBallInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBounceBallInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBounceBallInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBounceBallInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBounceBallInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBounceBallInterface, 3201052321);
	template<> ADAPTERNAVE_API UClass* StaticClass<UBounceBallInterface>()
	{
		return UBounceBallInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBounceBallInterface(Z_Construct_UClass_UBounceBallInterface, &UBounceBallInterface::StaticClass, TEXT("/Script/AdapterNave"), TEXT("UBounceBallInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBounceBallInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
