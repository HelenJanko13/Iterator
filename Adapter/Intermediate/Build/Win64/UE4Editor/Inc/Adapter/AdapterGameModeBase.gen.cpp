// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Adapter/AdapterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdapterGameModeBase() {}
// Cross Module References
	ADAPTER_API UClass* Z_Construct_UClass_AAdapterGameModeBase_NoRegister();
	ADAPTER_API UClass* Z_Construct_UClass_AAdapterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Adapter();
	ADAPTER_API UClass* Z_Construct_UClass_AJugador_NoRegister();
	ADAPTER_API UClass* Z_Construct_UClass_AExplosiveAdapter_NoRegister();
// End Cross Module References
	void AAdapterGameModeBase::StaticRegisterNativesAAdapterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AAdapterGameModeBase_NoRegister()
	{
		return AAdapterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AAdapterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jugador;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosiveAdapter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosiveAdapter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdapterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Adapter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AdapterGameModeBase.h" },
		{ "ModuleRelativePath", "AdapterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_Jugador_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "AdapterGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_Jugador = { "Jugador", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdapterGameModeBase, Jugador), Z_Construct_UClass_AJugador_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_Jugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_Jugador_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_ExplosiveAdapter_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "AdapterGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_ExplosiveAdapter = { "ExplosiveAdapter", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdapterGameModeBase, ExplosiveAdapter), Z_Construct_UClass_AExplosiveAdapter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_ExplosiveAdapter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_ExplosiveAdapter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdapterGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_Jugador,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdapterGameModeBase_Statics::NewProp_ExplosiveAdapter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdapterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdapterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdapterGameModeBase_Statics::ClassParams = {
		&AAdapterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdapterGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAdapterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdapterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdapterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdapterGameModeBase, 3777918981);
	template<> ADAPTER_API UClass* StaticClass<AAdapterGameModeBase>()
	{
		return AAdapterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdapterGameModeBase(Z_Construct_UClass_AAdapterGameModeBase, &AAdapterGameModeBase::StaticClass, TEXT("/Script/Adapter"), TEXT("AAdapterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdapterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
