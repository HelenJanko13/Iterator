// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "observer/Subs_1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubs_1() {}
// Cross Module References
	OBSERVER_API UClass* Z_Construct_UClass_ASubs_1_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_ASubs_1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_observer();
	OBSERVER_API UClass* Z_Construct_UClass_AReloj_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_USuscriptorInterface_NoRegister();
	OBSERVER_API UClass* Z_Construct_UClass_UTransformadorInterface_NoRegister();
// End Cross Module References
	void ASubs_1::StaticRegisterNativesASubs_1()
	{
	}
	UClass* Z_Construct_UClass_ASubs_1_NoRegister()
	{
		return ASubs_1::StaticClass();
	}
	struct Z_Construct_UClass_ASubs_1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reloj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reloj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASubs_1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_observer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubs_1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subs_1.h" },
		{ "ModuleRelativePath", "Subs_1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubs_1_Statics::NewProp_Reloj_MetaData[] = {
		{ "Category", "Suscriptor" },
		{ "ModuleRelativePath", "Subs_1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASubs_1_Statics::NewProp_Reloj = { "Reloj", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubs_1, Reloj), Z_Construct_UClass_AReloj_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASubs_1_Statics::NewProp_Reloj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubs_1_Statics::NewProp_Reloj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASubs_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubs_1_Statics::NewProp_Reloj,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASubs_1_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USuscriptorInterface_NoRegister, (int32)VTABLE_OFFSET(ASubs_1, ISuscriptorInterface), false },
			{ Z_Construct_UClass_UTransformadorInterface_NoRegister, (int32)VTABLE_OFFSET(ASubs_1, ITransformadorInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASubs_1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubs_1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASubs_1_Statics::ClassParams = {
		&ASubs_1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASubs_1_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASubs_1_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASubs_1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASubs_1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASubs_1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASubs_1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASubs_1, 3489968053);
	template<> OBSERVER_API UClass* StaticClass<ASubs_1>()
	{
		return ASubs_1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubs_1(Z_Construct_UClass_ASubs_1, &ASubs_1::StaticClass, TEXT("/Script/observer"), TEXT("ASubs_1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubs_1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
