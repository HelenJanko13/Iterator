// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Adapter/Jugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJugador() {}
// Cross Module References
	ADAPTER_API UClass* Z_Construct_UClass_AJugador_NoRegister();
	ADAPTER_API UClass* Z_Construct_UClass_AJugador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Adapter();
	ADAPTER_API UClass* Z_Construct_UClass_UInterfaceExplosiveShot_NoRegister();
// End Cross Module References
	void AJugador::StaticRegisterNativesAJugador()
	{
	}
	UClass* Z_Construct_UClass_AJugador_NoRegister()
	{
		return AJugador::StaticClass();
	}
	struct Z_Construct_UClass_AJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Adapter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJugador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jugador.h" },
		{ "ModuleRelativePath", "Jugador.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AJugador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceExplosiveShot_NoRegister, (int32)VTABLE_OFFSET(AJugador, IInterfaceExplosiveShot), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJugador_Statics::ClassParams = {
		&AJugador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJugador, 4150370216);
	template<> ADAPTER_API UClass* StaticClass<AJugador>()
	{
		return AJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJugador(Z_Construct_UClass_AJugador, &AJugador::StaticClass, TEXT("/Script/Adapter"), TEXT("AJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
