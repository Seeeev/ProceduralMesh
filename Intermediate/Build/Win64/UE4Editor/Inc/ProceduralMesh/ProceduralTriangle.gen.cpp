// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralMesh/Public/ProceduralTriangle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralTriangle() {}
// Cross Module References
	PROCEDURALMESH_API UClass* Z_Construct_UClass_AProceduralTriangle_NoRegister();
	PROCEDURALMESH_API UClass* Z_Construct_UClass_AProceduralTriangle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralMesh();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void AProceduralTriangle::StaticRegisterNativesAProceduralTriangle()
	{
	}
	UClass* Z_Construct_UClass_AProceduralTriangle_NoRegister()
	{
		return AProceduralTriangle::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralTriangle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Recursions_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Recursions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_New_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices_New;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_New_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_New_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles_New;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Triangles_New_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TerrainMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralTriangle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTriangle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralTriangle.h" },
		{ "ModuleRelativePath", "Public/ProceduralTriangle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Recursions_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "// Recursions is the number of times we increase the resolution\n" },
		{ "ModuleRelativePath", "Public/ProceduralTriangle.h" },
		{ "ToolTip", "Recursions is the number of times we increase the resolution" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Recursions = { "Recursions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralTriangle, Recursions), METADATA_PARAMS(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Recursions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Recursions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_New_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ProceduralTriangle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_New = { "Vertices_New", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralTriangle, Vertices_New), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_New_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_New_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_New_Inner = { "Vertices_New", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_New_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ProceduralTriangle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_New = { "Triangles_New", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralTriangle, Triangles_New), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_New_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_New_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_New_Inner = { "Triangles_New", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_VertexColors_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ProceduralTriangle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralTriangle, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_VertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Normals_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ProceduralTriangle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralTriangle, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ProceduralTriangle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralTriangle, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "// Variables for mesh generation\n" },
		{ "ModuleRelativePath", "Public/ProceduralTriangle.h" },
		{ "ToolTip", "Variables for mesh generation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralTriangle, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_TerrainMesh_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "// Create the procedural mesh component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralTriangle.h" },
		{ "ToolTip", "Create the procedural mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_TerrainMesh = { "TerrainMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralTriangle, TerrainMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_TerrainMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_TerrainMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Recursions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_New,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_New_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_New,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_New_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_VertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_VertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTriangle_Statics::NewProp_TerrainMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralTriangle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralTriangle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralTriangle_Statics::ClassParams = {
		&AProceduralTriangle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProceduralTriangle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralTriangle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTriangle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralTriangle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralTriangle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralTriangle, 110693396);
	template<> PROCEDURALMESH_API UClass* StaticClass<AProceduralTriangle>()
	{
		return AProceduralTriangle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralTriangle(Z_Construct_UClass_AProceduralTriangle, &AProceduralTriangle::StaticClass, TEXT("/Script/ProceduralMesh"), TEXT("AProceduralTriangle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralTriangle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
