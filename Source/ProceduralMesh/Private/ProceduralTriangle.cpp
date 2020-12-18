// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralTriangle.h"

// Sets default values
AProceduralTriangle::AProceduralTriangle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Add procedural mesh
	TerrainMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("TerrainMesh"));
	SetRootComponent(TerrainMesh);
	TerrainMesh->bUseAsyncCooking = true;

	// default value of indexes
	Index_A = 0;
	Index_B = 1;
	Index_C = 2;
}

void AProceduralTriangle::GenerateMesh()
{
	Vertices = { FVector(0,0,0), FVector(0,500,0), FVector(500,0,0) };
	Triangles = { 0,1,2 };

	TerrainMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, true);

	/* Vertices_New is the blank list to where new vertex arrangement will be written to..
	Make sure that to begin with it is exactly the same as the vertices array*/
	Vertices_New = Vertices;

	// recursion is the number of times we will call the subdivide function
	if (Recursions > 0)
	{
		for (int i = 0; i < Recursions; i++)
		{
			// subdivide each face
			for (int j = 0; j < Triangles.Num() / 3; j++)
			{
				Subdivide(Triangles[Index_A], Triangles[Index_B], Triangles[Index_C]);
			}
			// Clear the vertex list to remove the old vertices
			Vertices.Empty();

			// Assign the new vertex list to the current one
			Vertices = Vertices_New;

			// Clear the triangle list to remove the old vertex reference
			Triangles.Empty();

			Triangles = Triangles_New;
			Triangles_New.Empty();

			Index_A = 0;
			Index_B = 1;
			Index_C = 2;

			VertexDictionary.Empty();
			IndicesDictionary.Empty();

		}
		TerrainMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, true);
	}
}

void AProceduralTriangle::Subdivide(int a, int b, int c)
{
	// get endpoints
	FVector va = Vertices[a];
	FVector vb = Vertices[b];
	FVector vc = Vertices[c];

	// get midpoints
	FVector vab = FMath::Lerp(va, vb, 0.5);
	FVector vbc = FMath::Lerp(vb, vc, 0.5);
	FVector vca = FMath::Lerp(vc, va, 0.5);

	// set endpoint indices
	i_a = a;
	i_b = b;
	i_c = c;

	// midpoint duplicate booleans
	bool vab_duplicates = false;
	bool vbc_duplicates = false;
	bool vca_duplicates = false;

	// check for midpoint duplicates
	for (int i = 0; i < VertexDictionary.Num(); i++)
	{
		if (vab == VertexDictionary[i])
		{
			vab_duplicates = true;
			i_ab = IndicesDictionary[i];
		}

		if (vbc == VertexDictionary[i])
		{
			vbc_duplicates = true;
			i_bc = IndicesDictionary[i];
		}

		if (vca == VertexDictionary[i])
		{
			vca_duplicates = true;
			i_ca = IndicesDictionary[i];
		}
	}

	// if no duplicates are found
	if (!vab_duplicates) {
		Vertices_New.Add(vab);
		VertexDictionary.Add(vab);
		IndicesDictionary.Add(Vertices_New.Num() - 1);
		i_ab = Vertices_New.Num() - 1;
	}

	if (!vbc_duplicates) {
		Vertices_New.Add(vbc);
		VertexDictionary.Add(vbc);
		IndicesDictionary.Add(Vertices_New.Num() - 1);
		i_bc = Vertices_New.Num() - 1;
	}

	if (!vca_duplicates) {
		Vertices_New.Add(vca);
		VertexDictionary.Add(vca);
		IndicesDictionary.Add(Vertices_New.Num() - 1);
		i_ca = Vertices_New.Num() - 1;
	}

	// first triangle
	Triangles_New.Add(i_a);
	Triangles_New.Add(i_ab);
	Triangles_New.Add(i_ca);

	// second triangle
	Triangles_New.Add(i_ca);
	Triangles_New.Add(i_bc);
	Triangles_New.Add(i_c);

	// second triangle
	Triangles_New.Add(i_ab);
	Triangles_New.Add(i_b);
	Triangles_New.Add(i_bc);

	// fourth triangle
	Triangles_New.Add(i_ab);
	Triangles_New.Add(i_bc);
	Triangles_New.Add(i_ca);

	// step to next triangle
	Index_A = Index_A + 3;
	Index_B = Index_B + 3;
	Index_C = Index_C + 3;
}

// Called when the game starts or when spawned
void AProceduralTriangle::BeginPlay()
{
	Super::BeginPlay();

	GenerateMesh();

	
}

// Called every frame
void AProceduralTriangle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

