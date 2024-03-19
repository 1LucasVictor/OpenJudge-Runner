#include<stdio.h>

#define MAX 100
#define INFTY 1<<21
#define WHITE 0
#define GRAY 1
#define BLACK 2

int g_n, g_M[MAX][MAX];

int prim();

int main(){
  scanf("%d",&g_n);
  
  for(int i = 0; i < g_n; i++){
    for(int j = 0; j < g_n; j++){
      int e;
      scanf("%d",&e);
      if(e == -1) g_M[i][j] = INFTY;
      else g_M[i][j] = e;
    }
  }

  printf("%d\n",prim());
  
  return 0;
}

int prim(){
  int u, minv;
  int d[MAX], p[MAX], color[MAX];

  for(int i = 0; i < g_n; i++){
    d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;
  }
  
  d[0] = 0;

  while(1){
    minv = INFTY;
    u = -1;
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
	if(d[v] > g_M[u][v]){
	  d[v] = g_M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  int sum = 0;
  for(int i = 0; i < g_n; i++){
    if(p[i] != -1) sum += g_M[i][p[i]];
  }

  return sum;
}

