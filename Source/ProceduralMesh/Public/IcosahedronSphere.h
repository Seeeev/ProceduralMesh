// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "IcosahedronSphere.generated.h"

UCLASS()
class PROCEDURALMESH_API AIcosahedronSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIcosahedronSphere();

	// Create the procedural mesh component
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		UProceduralMeshComponent* TerrainMesh;

	// Variables for mesh generation
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<FVector> Vertices;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<int> Triangles;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<FVector> Normals;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
	TArray<FVector2D> UV0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<FColor> VertexColors;


	TArray<FColor> UpVertexColors;

	TArray<FProcMeshTangent> Tangents;

	//Mesh generation function
	void GenerateMesh();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<int> Triangles_New;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		TArray<FVector> Vertices_New;

	// Triangle points a b and c
	int Index_A;
	int Index_B;
	int Index_C;

	// Subdivide function
	void Subdivide(int a, int b, int c);

	// Recursions is the number of times we increase the resolution
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		int Recursions;

	// Vertex dictionary - record of all vertices
	TArray<FVector> VertexDictionary;

	// Indices dictionary - record of all triangle indexes
	TArray<int> IndicesDictionary;

	/* This variables will temporarily store triangle indexes and end points
	   for building a new index list when subdividing a given face*/
	int i_a;
	int i_b;
	int i_c;
	int i_ab;
	int i_bc;
	int i_ca;

	// inputs for icosahedron
	float X;
	float Z;

	TArray<FVector> NormalizeVertices(TArray<FVector> veritices);
	
	float vertexMagnitude;

	
	// Scale the Icosahedron
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Defaults")
		float Scale;

	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
