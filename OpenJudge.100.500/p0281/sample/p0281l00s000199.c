#include <stdio.h>

#define N_MAX 100
#define INF   1000000

int n;
int k[N_MAX];
int direction[N_MAX][N_MAX];
int cost[N_MAX][N_MAX];
int distance[N_MAX];

void Dijkstra(int p,int c){
  int i;
  distance[p] = c;
  for( i=0; i<k[p]; i++){
    if(distance[direction[p][i]] > c + cost[p][i]){
      Dijkstra(direction[p][i], c + cost[p][i]);
    }
  }
}

int main(){
  int i;
  int j;
  scanf("%d",&n);
  for( i=0; i<n; i++){
    int u;
    scanf("%d", &u);
    scanf("%d", &k[u]);
    for( j=0; j<k[u]; j++){
      scanf("%d", &direction[u][j]);
      scanf("%d", &cost[u][j]);
    }
  }
  
  for( i=0; i<n; i++){
    distance[i] = INF;
  }
  
  Dijkstra(0,0);
  
  for(i=0;i<n;i++){
    printf("%d %d\n", i, distance[i]);
  }
}


