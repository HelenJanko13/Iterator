// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdapterNave/AdapterNaveGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdapterNaveGameMode() {}
// Cross Module References
	ADAPTERNAVE_API UClass* Z_Construct_UClass_AAdapterNaveGameMode_NoRegister();
	ADAPTERNAVE_API UClass* Z_Construct_UClass_AAdapterNaveGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AdapterNave();
	ADAPTERNAVE_API UClass* Z_Construct_UClass_AAdapterNavePawn_NoRegister();
	ADAPTERNAVE_API UClass* Z_Construct_UClass_ABallAdapter_NoRegister();
// End Cross Module References
	void AAdapterNaveGameMode::StaticRegisterNativesAAdapterNaveGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAdapterNaveGameMode_NoRegister()
	{
		return AAdapterNaveGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAdapterNaveGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallAdapter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BallAdapter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdapterNaveGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdapterNave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterNaveGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AdapterNaveGameMode.h" },
		{ "ModuleRelativePath", "AdapterNaveGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_Nave_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "AdapterNaveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_Nave = { "Nave", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdapterNaveGameMode, Nave), Z_Construct_UClass_AAdapterNavePawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_Nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_Nave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_BallAdapter_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "AdapterNaveGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_BallAdapter = { "BallAdapter", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAdapterNaveGameMode, BallAdapter), Z_Construct_UClass_ABallAdapter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_BallAdapter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_BallAdapter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAdapterNaveGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_Nave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAdapterNaveGameMode_Statics::NewProp_BallAdapter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdapterNaveGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdapterNaveGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdapterNaveGameMode_Statics::ClassParams = {
		&AAdapterNaveGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAdapterNaveGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterNaveGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAdapterNaveGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdapterNaveGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdapterNaveGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdapterNaveGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdapterNaveGameMode, 199733433);
	template<> ADAPTERNAVE_API UClass* StaticClass<AAdapterNaveGameMode>()
	{
		return AAdapterNaveGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdapterNaveGameMode(Z_Construct_UClass_AAdapterNaveGameMode, &AAdapterNaveGameMode::StaticClass, TEXT("/Script/AdapterNave"), TEXT("AAdapterNaveGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdapterNaveGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
