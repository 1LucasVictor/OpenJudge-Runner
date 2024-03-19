#include <stdio.h>

#define inf 2000000
#define NIL -1000000
#define BLACK 9999999
#define WHITE 8888888

typedef struct{
  int u;
  int k;
  int v[100000];
  int c[100000];
}graph;


void dijkstra(int n, graph w[n], int d[n], int color[n], int pi[n]){
  int i,j,u;
  int mincost;
  for(i = 0; i < n; i++){
    d[i] = inf;
    pi[i] = NIL;
    color[i] = WHITE;
  }
  d[0] = 0;

  while(1){
    mincost = inf;
    for(i = 0; i < n; i++){
      if(color[i] != BLACK && d[i] < mincost){
        mincost = d[i];
        u = i;
      }
    }
    if(mincost == inf)
      break;

    color[u] = BLACK;

    for(j = 0; j < 1000; j++){
//      printf("  d[%d] + w[%d].c[%d] < d[%d] ?\n", u, u, j, j);
//      printf("    %d + %d < %d ?\n", d[u], w[u].c[j], d[j]);
      if(color[j] != BLACK && d[u] + w[u].c[j] < d[j] && w[u].c[j] != inf){
        pi[j] = u;
        d[j] =  d[u] + w[u].c[j];
      }
    }
  }
}

int main(){
  int i,j,k,n,u;
  int tmpj;

  scanf("%d", &n);

  graph w[n];
  for(i = 0; i < n; i++)
    for(j = 0; j < 100000; j++)
      w[i].c[j] = w[i].v[j] = inf;
  int d[n];
  int color[n];
  int pi[n];

  for(i = 0; i < n; i++){
    scanf("%d%d", &w[i].u, &w[i].k);
    for(j = 0; j < w[i].k; j++){
      scanf("%d", &tmpj);
      w[i].v[tmpj] = tmpj;
      scanf("%d", &w[i].c[tmpj]);
    }
  }

  dijkstra(n, w, d, color, pi);

  for(i = 0; i < n; i++){
    printf("%d %d\n", w[i].u, d[i]);
  }
  return 0;
}