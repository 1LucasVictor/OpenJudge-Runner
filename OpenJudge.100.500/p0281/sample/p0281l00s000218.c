#include<stdio.h>
#define MAX 100
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int M[MAX][MAX];

void dijkstra(int n){
  int minv;
  int i;
  int d[MAX],color[MAX];

  for(i=0;i<n;i++){
    d[i] = INFTY;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;
  while(1){
    minv = INFTY;
    int u = -1;
    for(i = 0;i<n;i++){
      if(minv > d[i] && color[i] != BLACK){
        u=i;
        minv = d[i];
      }
    }
    if(u==-1) break;
    color[u] = BLACK;
    for(int v = 0;v<n;v++){
      if(color[v] !=BLACK && M[u][v] != INFTY){
        if(d[v] > d[u] + M[u][v]){
          d[v] = d[u] + M[u][v];
          color[v] = GRAY;
        }
      }
    }
  }

  for(i = 0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
}

int main(){
  int n;
  int i,j;
  scanf("%d",&n);
  for(int i;i<n;i++){
    for(int j = 0;j<n;j++){
      M[i][j] = INFTY;
    }
  }

  int k,c,u,v;
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v] = c;
    }
  }

  dijkstra(n);

  return 0;
}

