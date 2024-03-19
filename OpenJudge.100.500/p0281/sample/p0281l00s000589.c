#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>


#define MAX_E 10000
#define MAX_V 100
#define INF 100000000

typedef struct edge{
    int from;
    int to;
    int cost;
}edge;


edge es[MAX_E];

int distance[MAX_V];

void bellman_ford(int n, int s, int e) {
    int i, update;
    
    for (int i = 0; i < MAX_V; i++) distance[i] = INF;
    distance[s] = 0;
    while (1) {
        update = 0;
        for (i = 0; i < e; i++) {
            edge e = es[i];
            if (distance[e.from] != INF && distance[e.to] > distance[e.from] + e.cost) {
                distance[e.to] = distance[e.from] + e.cost;
                update = 1;
            }
        }
        if (!update) break;
    }
}


int main( ){
    
    int n, i, j, l, u, v, k, c;
    scanf("%d", &n);
    
    
    l = 0;
    for (i = 0; i < n; i++) {
        scanf("%d %d", &u, &k);
        
        for (j =0 ; j < k; j++) {
            scanf("%d %d", &v, &c);
            es[l].from = u;
            es[l].to = v;
            es[l].cost = c;
            l++;
        }
    }
    
    bellman_ford(n, 0, l);
    
    for (i=0; i<n; i++) {
        printf("%d %d\n", i, distance[i]);
    }
    
    return 0;
}