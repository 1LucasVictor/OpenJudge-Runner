#include <stdio.h>
#define INF 100000000

int n;
int size[100];
int to[100][100];
int cost[100][100];
int dist[100];

void dfs(int p, int c){
  int i;
  dist[p] = c;
  for(i=0;i<size[i];i++){
    if(dist[to[p][i]] > c + cost[p][i]) dfs(to[p][i], c + cost[p][i]);
  }
}

main(){
  int i, j;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    int u;
    scanf("%d", &u);
    scanf("%d", &size[u]);
    for(j=0;j<size[u];j++){
      scanf("%d", &to[u][j]);
      scanf("%d", &cost[u][j]);
    }
  }
  for(i=0;i<n;i++) dist[i] = INF;
  dfs(0, 0);
  for(i=0;i<n;i++){
    printf("%d %d\n", i, dist[i]);
  }
}