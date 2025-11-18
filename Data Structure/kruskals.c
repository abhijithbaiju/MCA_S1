#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int src, dest, weight;
} 
Edge;

typedef struct 
{
    int parent;
    int rank;
} 
Subset;


int compareEdges(const void* a, const void* b) 
{
    Edge* A = (Edge*)a;
    Edge* B = (Edge*)b;
    return A->weight - B->weight;
}


int find(Subset subsets[], int i) 
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}


void unionSets(Subset subsets[], int x, int y) 
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else 
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}


void kruskal(Edge edges[], int V, int E) 
{
  
    qsort(edges, E, sizeof(Edge), compareEdges);
    Subset* subsets = (Subset*)malloc(V * sizeof(Subset));
    Edge* result = (Edge*)malloc((V - 1) * sizeof(Edge));

    
    for (int v = 0; v < V; ++v) 
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    int e = 0; 
    int i = 0; 

    while (e < V - 1 && i < E) 
    {
        Edge next = edges[i++];
        int x = find(subsets, next.src);
        int y = find(subsets, next.dest);

        
        if (x != y) 
        {
            result[e++] = next;
            unionSets(subsets, x, y);
        }
    }

    printf("Minimum Spanning Tree (MST):\n");
    int totalCost = 0;
    for (i = 0; i < e; ++i) 
    {
        printf("%d -- %d  Weight: %d\n",
               result[i].src, result[i].dest, result[i].weight);
        totalCost += result[i].weight;
    }
    printf("Total Minimum Cost: %d\n", totalCost);

    free(subsets);
    free(result);
}


int main()
{
    int V, E;
    printf("Enter number of vertices: ");
    scanf("%d", &V);
    printf("Enter number of edges: ");
    scanf("%d", &E);

    Edge* edges = (Edge*)malloc(E * sizeof(Edge));

    printf("Enter each edge (src dest weight):\n");
    for (int i = 0; i < E; i++) 
    {
        scanf("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }

    kruskal(edges, V, E);

    free(edges);
    return 0;
}

