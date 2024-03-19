#include<stdio.h>

#define MAX 100
#define INFTY 1<<21
#define WHITE 0
#define GRAY 1
#define BLACK 2

int g_n, g_M[MAX][MAX];

void dijkstra();

int main(){

  scanf("%d",&g_n);
  for(int i = 0; i < g_n; i++){
    for(int j = 0; j < g_n; j++){
      g_M[i][j] = INFTY;
    }
  }

  int k, c, u, v;
  for(int i = 0; i < g_n; i++){
    scanf("%d %d",&u, &k);
    for(int j = 0; j < k; j++){
      scanf("%d %d", &v, &c);
      g_M[u][v] = c;
    }
  }

  dijkstra();
  
  return 0;
}

void dijkstra(){
  int minv;
  int d[MAX], color[MAX];

  for(int i = 0; i < g_n; i++){
    d[i] = INFTY;
    color[i] = WHITE;
  }
  d[0] =0;
  color[0] = GRAY;
  while(1){
    minv = INFTY;
    int u = -1;
    for(int i = 0; i < g_n; i++){
      if(minv > d[i] && color[i] != BLACK){
	u = i;
	minv = d[i];
      }
    }
    if(u == -1) break;
    color[u] = BLACK;
    for(int v = 0; v < g_n; v++){
      if(color[v] != BLACK && g_M[u][v] != INFTY){
	if(d[v] > d[u] + g_M[u][v]){
	  d[v] = d[u] + g_M[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }
  for(int i = 0; i < g_n; i++){
    printf("%d ",i);
    if(d[i] == INFTY) printf("-1\n");
    else printf("%d\n", d[i]);
  }
}

