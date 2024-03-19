#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void prim(int s,int[s][s], int[]);

int main(int argc, char** argv) {
    int size;
    scanf("%d", &size);
    int edges[size][size], nodeVal[size];
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            scanf("%d", &edges[i][j]);
    prim(size,edges,nodeVal);
    int weight = 0;
    for(int i = 0; i < size; i++)
        weight += nodeVal[i];
    printf("%d\n",weight);
    return (EXIT_SUCCESS);
}

void prim(int size, int edges[size][size], int nodeVal[size]){
    int parentNode[size], check[size];
    for(int i = 0; i < size; i++){
        nodeVal[i] = INT_MAX;
        parentNode[i] = -1;
        check[i] = 0;
    }
    nodeVal[0] = 0;
    int mincost;
    int currentNode;
    while(1){
        mincost = INT_MAX;
        for(int i = 0; i < size; i++)
            if(!check[i] && nodeVal[i] < mincost){
                mincost = nodeVal[i];
                currentNode = i;
            }
        if(mincost == INT_MAX)
            break;
        check[currentNode] = 1;
        
        for(int i = 0; i < size; i++)
            if(!check[i] && edges[currentNode][i] < nodeVal[i] && edges[currentNode][i] != -1){
                parentNode[i] = currentNode;
                nodeVal[i] = edges[currentNode][i];
            }
    }
    
}

