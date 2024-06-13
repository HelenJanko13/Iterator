// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "observer/Publicador_observer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicador_observer() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_APublicador_observer_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_APublicador_observer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_observer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APublicador_observer::StaticRegisterNativesAPublicador_observer()
	{
	}
	UClass* Z_Construct_UClass_APublicador_observer_NoRegister()
	{
		return APublicador_observer::StaticClass();
	}
	struct Z_Construct_UClass_APublicador_observer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_suscriptores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_suscriptores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_suscriptores;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APublicador_observer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicador_observer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Publicador_observer.h" },
		{ "ModuleRelativePath", "Publicador_observer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APublicador_observer_Statics::NewProp_suscriptores_Inner = { "suscriptores", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicador_observer_Statics::NewProp_suscriptores_MetaData[] = {
		{ "Category", "Publicador Observer" },
		{ "ModuleRelativePath", "Publicador_observer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APublicador_observer_Statics::NewProp_suscriptores = { "suscriptores", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APublicador_observer, suscriptores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APublicador_observer_Statics::NewProp_suscriptores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APublicador_observer_Statics::NewProp_suscriptores_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APublicador_observer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APublicador_observer_Statics::NewProp_suscriptores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APublicador_observer_Statics::NewProp_suscriptores,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APublicador_observer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APublicador_observer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APublicador_observer_Statics::ClassParams = {
		&APublicador_observer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APublicador_observer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APublicador_observer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APublicador_observer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APublicador_observer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APublicador_observer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APublicador_observer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APublicador_observer, 2670665707);
	template<> OBSERVER_API UClass* StaticClass<APublicador_observer>()
	{
		return APublicador_observer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APublicador_observer(Z_Construct_UClass_APublicador_observer, &APublicador_observer::StaticClass, TEXT("/Script/observer"), TEXT("APublicador_observer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APublicador_observer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
