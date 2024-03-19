#include<stdio.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY (1<<21)

int n,M[MAX][MAX];

int prim(){
  int u,minv;
  int d[MAX],p[MAX],color[MAX];
  int i,v;
  int sum=0;

  for(i=0;i<n;i++){
    d[i] = INFTY;
    p[i] = -1;
    color[i] = WHITE;
  }
  
  d[0] = 0;

  while(1){
    u = -1;
    minv = INFTY;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i] != BLACK){
	u=i;
	minv = d[i];
      }
    }
    if(u==-1) break;
    color[u] = BLACK;
    for(v=0;v<n;v++){
      if(color[v] != BLACK && M[u][v] !=-1){
	if(d[v] > M[u][v]){
	  d[v] = M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i] != -1) sum += M[i][p[i]];
  }
  return sum;
}

int main(){
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&M[i][j]);
    }
  }

  printf("%d\n",prim());
  
  return 0;
}
