
#include <stdio.h>
#include <stdlib.h>

#define NIL_VERTEX -1
#define DENOTE_INF_COST -1
#define COMP_INF_COST 100008

// translate 1-origin into 0-origin
int i0O(int index1Origin) {
    return index1Origin-1;
}


#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM_STACK_VALUES 100
#define STR_MAX_LENGTH 100

typedef enum {
    WHITE,
    GRAY,
    BLACK
} Color;

typedef struct Vtx {
    Color color;
    int discoveryCost;
    struct Vtx * discoverFrom;
    int key;
} Vertex;

//void copyVertex(Vertex * p_out, Vertex in) {
//    p_out->color = in.color;
//    p_out->discoveryCost = in.discoveryCost;
//    p_out->discoverFrom = in.discoverFrom;
//    p_out->key = in.key;
//};

void 
initializeSingleSource(
        Vertex vertices[], 
        int nVertices,
        int startingVertexIndex
) {
    for (int i = 0; i < nVertices; i++) {
        vertices[i].discoveryCost = COMP_INF_COST;
        vertices[i].discoverFrom = NULL;
        vertices[i].color = WHITE;
    }
    
    vertices[startingVertexIndex].discoveryCost = 0;
}

void 
relax(
        Vertex vertices[], 
        int ** iawMatrix,
        int u,
        int v
) {
    if (vertices[v].discoveryCost > vertices[u].discoveryCost + iawMatrix[u][v]) {
        vertices[v].discoveryCost = vertices[u].discoveryCost + iawMatrix[u][v];
        vertices[v].discoverFrom = &vertices[u];
    }
}

void 
dijkstra(
        Vertex vertices[], 
        int nVertices,
        int ** iawMatrix, // indicativeAdjWeightMatrix
        int startingVertexIndex
) {
    initializeSingleSource(vertices, nVertices, startingVertexIndex);
    
    int mincost, u, v, i;
    
    while (1) {
        mincost = COMP_INF_COST;
        for (i = 0; i < nVertices; i++) {// for each vertex
            if (vertices[i].color != BLACK && vertices[i].discoveryCost < mincost) {
                mincost = vertices[i].discoveryCost;
                u = i;
            }
        }
        
        if (mincost == COMP_INF_COST) break;
        
        vertices[u].color = BLACK;
        
        for (v = 0; v < nVertices; v++)
            if (iawMatrix[u][v] < COMP_INF_COST) // for each in adjList
                if (vertices[v].color != BLACK && vertices[u].discoveryCost + iawMatrix[u][v] < vertices[v].discoveryCost) {
                    // relax
                    vertices[v].discoverFrom = &vertices[u];
                    vertices[v].discoveryCost = vertices[u].discoveryCost + iawMatrix[u][v];
                }
    }
}

void 
prim(
        Vertex vertices[], 
        int nVertices,
        int ** iawMatrix, // indicativeAdjWeightMatrix
        int startingVertexIndex
) {
    initializeSingleSource(vertices, nVertices, startingVertexIndex);
    
    int mincost, u, v, i;
    
    while (1) {
        mincost = COMP_INF_COST;
        
        for (i = 0; i < nVertices; i++) // for each vertex
            if (vertices[i].color != BLACK && vertices[i].discoveryCost < mincost) {
                mincost = vertices[i].discoveryCost;
                u = i;
            }
        
        if (mincost == COMP_INF_COST) break;
        
        vertices[u].color = BLACK;
        
        for (v = 0; v < nVertices; v++) 
            if ((iawMatrix)[u][v] < COMP_INF_COST) // for each in adjList
                if (vertices[v].color != BLACK && (iawMatrix)[u][v] < vertices[v].discoveryCost) {
                    // "relax" for prim alg
                    vertices[v].discoverFrom = &vertices[u];
                    vertices[v].discoveryCost = (iawMatrix)[u][v];
                }; 
    }
}

int main(int argc, char** argv) {
    int nVertices, i, j;
    
    // scan number of already existed events
    scanf("%d", &nVertices); 
    
    // adjMatrix ----------------------------
    int ** adjMatrix;
    
    adjMatrix = (int **)malloc(nVertices * sizeof(int *));
    
    for (i = 0; i < nVertices; i++) {
        adjMatrix[i] = (int *)malloc(nVertices * sizeof(int));
        
        for (j = 0; j < nVertices; j++)
            adjMatrix[i][j] = COMP_INF_COST;
    }
    
    // scan --------------------------------
    Vertex vertices[nVertices];
    int iVertexFrom, iVertexTo, nEdge;
    int weight;
    
    for (i = 0; i < nVertices; i++) {
        vertices[i].key = i;
        scanf("%d %d", &iVertexFrom, &nEdge); 
        
        for (j = 0; j < nEdge; j++) {
            scanf("%d %d", &iVertexTo, &weight); 
            adjMatrix[iVertexFrom][iVertexTo] = weight;
        }
    }
    
//    // print scan result ---------------------
//    printf("Scan result: \n");
//    for (i = 0; i < nVertices; i++) {
//        for (j = 0; j < nVertices; j++) {
//            if (j > 0) printf(" ");
//            printf("%2d", adjMatrix[i][j]); 
//        }
//        printf("\n");
//    }
    
//    prim(vertices, nVertices, adjMatrix, 0);
    dijkstra(vertices, nVertices, adjMatrix, 0);
    
//    int totalCost = 0;
//    
//    for (i = 0; i < nVertices; i++)
//        totalCost += vertices[i].discoveryCost;
//    
//    printf("%d\n", totalCost);
    
    for (i = 0; i < nVertices; i++)
        printf("%d %d\n", i, vertices[i].discoveryCost);

    return (EXIT_SUCCESS);
}



