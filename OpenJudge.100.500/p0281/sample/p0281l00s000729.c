#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NODE_NUM 100


int wght[NODE_NUM];
int visited[NODE_NUM];

typedef struct VERTEX{
    int idx;
    int w;
}VERTEX;

void search(int node_idx, int w, VERTEX ** A, int* num, int n){
    
    int i, weight, next;
    
    if (visited[node_idx] == 1) {
        return;
    }
    
    for (i=0; i < num[node_idx]; i++) {
        
        next = A[node_idx][i].idx;
        
        if ( visited[next]) {
            continue;
        }
        
        weight = A[node_idx][i].w;
        
        if( wght[next] > w + weight )
        {
            wght[next] = w + weight;
            visited[node_idx] = 1;
            search(next, w + weight, A, num, n);
            visited[node_idx] = 0;
        }
    }

    return;

}


int main( ){
    
    int i, j, k, v, c, u, n , *num;
    VERTEX ** A;
    
    scanf("%d", &n);
    A = malloc(sizeof(VERTEX) * n);
    num = malloc(sizeof(int) * n);
    
    for (i=0; i <n; i++) {
        wght[i] = 300000000;
    }
    wght[0] = 0;
    
    
    
    for (i=0; i<n; i++){
        
        scanf("%d", &u);
        scanf("%d", &k);
        A[u] = malloc(sizeof(VERTEX) * k);
        num[u] = k;
        
        for (j = 0; j < k; j++) {
            scanf("%d %d", &v, &c);
            A[u][j].idx = v;
            A[u][j].w = c;
        }
    }
    
    search(0, 0, A, num, n);
    
    for (i=0; i<n; i++) {
        printf("%d %d\n", i, wght[i]);
    }
    
    
    return 0;
}