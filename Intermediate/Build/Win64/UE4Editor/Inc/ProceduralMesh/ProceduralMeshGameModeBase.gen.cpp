// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralMesh/ProceduralMeshGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralMeshGameModeBase() {}
// Cross Module References
	PROCEDURALMESH_API UClass* Z_Construct_UClass_AProceduralMeshGameModeBase_NoRegister();
	PROCEDURALMESH_API UClass* Z_Construct_UClass_AProceduralMeshGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProceduralMesh();
// End Cross Module References
	void AProceduralMeshGameModeBase::StaticRegisterNativesAProceduralMeshGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProceduralMeshGameModeBase_NoRegister()
	{
		return AProceduralMeshGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralMeshGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralMeshGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralMeshGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProceduralMeshGameModeBase.h" },
		{ "ModuleRelativePath", "ProceduralMeshGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralMeshGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralMeshGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralMeshGameModeBase_Statics::ClassParams = {
		&AProceduralMeshGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralMeshGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralMeshGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralMeshGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralMeshGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralMeshGameModeBase, 2472411554);
	template<> PROCEDURALMESH_API UClass* StaticClass<AProceduralMeshGameModeBase>()
	{
		return AProceduralMeshGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralMeshGameModeBase(Z_Construct_UClass_AProceduralMeshGameModeBase, &AProceduralMeshGameModeBase::StaticClass, TEXT("/Script/ProceduralMesh"), TEXT("AProceduralMeshGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralMeshGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
