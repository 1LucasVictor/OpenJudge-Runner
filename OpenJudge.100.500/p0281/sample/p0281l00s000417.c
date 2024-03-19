#include <stdio.h> 
#define INF (1<<29)
 
typedef struct{
    int u;
    int k;
    int v[100];
    int c[100];
    int used;
    int cost;
} WGraph;
WGraph G[100];

void getSSSP(int n){
  int i,j;
  int minCost, pos, next_pos, next_cost;
   
  for(i = 0; i < n; i++){
    G[i].used = 0;
    G[i].cost = INF;
  }
  G[0].cost = 0;
 
  while(1){
    minCost = INF;
    for(i = 0; i < n; i++){
      if(G[i].used == 0 && minCost > G[i].cost){
    minCost = G[i].cost;
    pos = i;
      }
    }
    if(minCost == INF) break;
    G[pos].used = 1;
 

    for(i = 0; i < G[pos].k; i++){
      next_pos = G[pos].v[i];
      next_cost = G[pos].c[i] + minCost;
      if(G[next_pos].cost > next_cost) G[next_pos].cost = next_cost;
    }

  }
}

 
main(){
  int i,j,n;

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d %d", &G[i].u, &G[i].k);
    for(j = 0; j < G[i].k; j++){
      scanf("%d %d", &G[i].v[j], &G[i].c[j]);
    }
  }
  getSSSP(n);
  for(i = 0; i < n; i++){
    printf("%d %d\n", G[i].u, G[i].cost);
  }
  return 0;
}