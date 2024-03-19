#include<stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY (1<<21)
#define N 100

int n,M[N][N];
int color[N],d[N],p[N];

int prim(){

  int u, mincost, i, v,sum = 0;

  for(i = 0; i < n; i++ ){
    color[i] = WHITE;
    d[i] = INFTY;
    p[i] = -1;
  }

  d[0] = 0;

  while(1){
    mincost = INFTY;
    u = -1;
    for(i = 0; i < n; i++){
      if(mincost > d[i] && color[i] != BLACK){
	u = i;
	mincost = d[i];
      }
    }
    if(u == -1)break;
    color[u] = BLACK;
    for( v = 0; v < n; v++){
      if(color[v] != BLACK && M[u][v] != INFTY){
	if(M[u][v] < d[v]){
	  d[v] = M[u][v]; 
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  for(i = 0; i < n; i++){
    if(p[i] != -1){
      sum += M[i][p[i]];
    }
  }
  return sum;

}


int main(){


  int i, j, sum=0;
  scanf("%d",&n);
  for(i = 0; i < n; i++ ){
    for(j = 0; j < n; j++){
      scanf("%d",&M[i][j]);
      if(M[i][j] == -1)M[i][j]=INFTY;
    }
  } 
  sum = prim(n);
  printf("%d\n",sum);

  return 0;
}