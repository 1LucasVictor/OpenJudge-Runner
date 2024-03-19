#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>


#define NODE_NUM 100
#define MAX_VALUE 10000000

int cost[NODE_NUM][NODE_NUM];

void WarshallFloyd(){
    int i,j,k;
    
    for (k=0;k < NODE_NUM; k++) {
        for (i=0; i < NODE_NUM; i++) {
            for (j=0; j < NODE_NUM; j++) {
                if (cost[i][j] > cost[i][k] + cost[k][j]) {
                    cost[i][j] = cost[i][k] + cost[k][j];
                }
            }
        }
    }
}


int main( ){
    
    int n, i, j, u, v, k, c;
    scanf("%d", &n);
    
    
    for (i = 0; i < NODE_NUM; i++) {
        for (j =0 ; j < NODE_NUM; j++) {
            cost[i][j] = i == j ? 0 : MAX_VALUE;
        }
    }
    
    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        for (j =0 ; j < k; j++) {
            scanf("%d %d", &v, &c);
            cost[u][v] = c;
        }
    }
    
    WarshallFloyd();
    
    for (i=0; i<n; i++) {
        printf("%d %d\n", i, cost[0][i]);
    }
    
    return 0;
}