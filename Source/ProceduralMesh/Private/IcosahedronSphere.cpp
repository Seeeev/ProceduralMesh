// Fill out your copyright notice in the Description page of Project Settings.


#include "IcosahedronSphere.h"
#include "Math/UnrealMathUtility.h"
#include "KismetMathLibrary.generated.h"

// Sets default values
AIcosahedronSphere::AIcosahedronSphere()
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
	X = 0.525731112119133606f;
	Z = 0.525731112119133606f;

	Vertices = {
			FVector(-X, 0, Z),
			FVector(X, 0, Z),
			FVector(-X, 0, -Z),
			FVector(X, 0, -Z),
			FVector(0, Z, X),
			FVector(0, Z, -X),
			FVector(0, -Z, X),
			FVector(0, -Z, -X),
			FVector(Z, X, 0),
			FVector(-Z, X, 0),
			FVector(Z, -X, 0),
			FVector(-Z, -X, 0)

		/*FVector(-X,0,Z),
		FVector(X,0,Z),
		FVector(-X,0,-Z),
		FVector(X,0,-Z),
		FVector(0,Z,X),
		FVector(0,Z,-X),
		FVector(0,-Z,X),
		FVector(0,-Z,-X),
		FVector(Z,X,0),
		FVector(-Z,X, 0),
		FVector(Z,-X,0),
		FVector(-Z,-X, 0)*/
	};

	Triangles = { 0,4,1,
				0,9,4,
				9,5,4,
				4,5,8,
				4,8,1,
				8,10,1,
				8,3,10,
				5,3,8,
				5,2,3,
				2,7,3,
				7,10,3,
				7,6,10,
				7,11,6,
				11,0,6,
				0,1,6,
				6,1,10,
				9,0,11,
				9,11,2,
				9,2,5,
				7,2,11 };
	
	// Default scale of sphere
	Scale = 100;
}

void AIcosahedronSphere::GenerateMesh()
{
	
	for(int i = 0; i< Vertices.Num(); i++)
	{
		Vertices[i] *= Scale;
	}
	
	TerrainMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, true);

	/* Vertices_New is the blank list to where new vertex arrangement will be written to..
	Make sure that to begin with it is exactly the same as the vertices array*/
	Vertices_New = Vertices;

	// recursion is the number of times we will call the subdivide function
	if (Recursions > 0)
	{
		for (int i = 0; i < Recursions; i++)
		{
			// we need to subdivide each face
			for (int j = 0; j < Triangles.Num() / 3; j++)
			{
				Subdivide(Triangles[Index_A], Triangles[Index_B], Triangles[Index_C]);
			}
			// clear the vertex list to remove the old vertices 
			Vertices.Empty();

			// assign the new vertex list to the current one
			Vertices = Vertices_New;

			// empty the triangle list to remove the old vertex references
			Triangles.Empty();

			Triangles = Triangles_New;
			Triangles_New.Empty();

			Index_A = 0;
			Index_B = 1;
			Index_C = 2;

			VertexDictionary.Empty();
			IndicesDictionary.Empty();
		}
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString(FString::FromInt(Vertices.Num())));

		// This function pushes vertices at the surface of a sphere to look like it
		Vertices = NormalizeVertices(Vertices);


		// rescale the sphere
		for (int i = 0; i < Vertices.Num(); i++)
		{
			//PerlinNoise3D(Vertices[i]);
			//UE_LOG(LogTemp, Warning, TEXT("Hello"));
			Vertices[i] *= Scale;
		}
		
		TerrainMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UV0, VertexColors, Tangents, true);
	}
}

void AIcosahedronSphere::Subdivide(int a, int b, int c)
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

	// midpoint duplicate bools 
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
	if (!vab_duplicates)
	{
		Vertices_New.Add(vab);
		VertexDictionary.Add(vab);
		IndicesDictionary.Add(Vertices_New.Num() - 1);
		i_ab = Vertices_New.Num() - 1;
	}

	if (!vbc_duplicates)
	{
		Vertices_New.Add(vbc);
		VertexDictionary.Add(vbc);
		IndicesDictionary.Add(Vertices_New.Num() - 1);
		i_bc = Vertices_New.Num() - 1;
	}

	if (!vca_duplicates)
	{
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

	//third triangle 
	Triangles_New.Add(i_ab);
	Triangles_New.Add(i_b);
	Triangles_New.Add(i_bc);

	//fourth triangle 
	Triangles_New.Add(i_ab);
	Triangles_New.Add(i_bc);
	Triangles_New.Add(i_ca);


	// step to next triangle
	Index_A = Index_A + 3;
	Index_B = Index_B + 3;
	Index_C = Index_C + 3;

}

TArray<FVector> AIcosahedronSphere::NormalizeVertices(TArray<FVector> vertices)
{
	for (int i = 0; i < vertices.Num(); i++)
	{
		// get the magnitude of a vector
		vertexMagnitude = vertices[i].Size();

		// normalize
		if (!vertices[i].Normalize())
		{
			vertices[i].X /= vertexMagnitude;
			vertices[i].Y /= vertexMagnitude;
			vertices[i].Z /= vertexMagnitude;
		}
	}

	return vertices;
}

// Called when the game starts or when spawned
void AIcosahedronSphere::BeginPlay()
{
	Super::BeginPlay();

	GenerateMesh();
}

/* Called when an actor is created in the editor or during gameplay,
this gets called right before construction.*/
void AIcosahedronSphere::PostActorCreated()
{
	Super::PostActorCreated();
	GenerateMesh();
}

void AIcosahedronSphere::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	GenerateMesh();
}


// Called every frame
void AIcosahedronSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

