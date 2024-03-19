#include<stdio.h>
#define INFTY (1 << 21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n;
int M[100][100];

void Dijkstra();

int main(){
  int i, j, u, k, v, w;

  scanf("%d",&n);
for(i=0;i<n;i++)

  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      M[i][j] = INFTY;
    }
  }

  for(i = 0 ; i < n ; i++){
    scanf("%d%d",&u,&k);

    for(j = 0 ; j < k ; j++){
      scanf("%d%d",&v,&w);
      M[u][v] = w;
    }
  }

  Dijkstra();

  return 0;
}

void Dijkstra(){
  int i;
  int min, u, v;
  int d[100], color[100];

  for(i = 0 ; i < n ; i++){
    d[i] = INFTY;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;

  while(1){
    min = INFTY;
    u = -1;
    for(i = 0 ; i < n ; i++){
      if(min > d[i] && color[i] != BLACK){
 u = i;
 min = d[i];
      }
    }

    if(u == -1) break;

    color[u] = BLACK;
    for(v = 0 ; v < n ; v++){
      if(color[v] != BLACK && M[u][v] != INFTY){
 if(d[v] > d[u] + M[u][v]){
   d[v] = d[u] + M[u][v];
   color[v] = GRAY;
 }
      }
    }
  }

  for(i = 0 ; i < n ; i++){
    printf("%d ",i);

    if(d[i] == INFTY) printf("-1\n");
    else printf("%d\n",d[i]);
  }
}

