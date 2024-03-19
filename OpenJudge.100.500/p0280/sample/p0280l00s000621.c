#include <stdio.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 100000000

int num,M[MAX][MAX];

int prim(){
  int i,u,v,mincost,total=0;
  int d[MAX],p[MAX],color[MAX];

  for(i=0; i<num; i++){
    color[i] = WHITE;
    d[i] = INFTY;
    p[i] = -1;
  }
  d[0] = 0;
  p[0] = -1;

  while(1){
    mincost = INFTY;
    for(i=0; i<num; i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }

    if(mincost == INFTY) break;

    color[u] = BLACK;

    for(v=0; v<num; v++){
      if(color[v] != BLACK && M[u][v] != INFTY){
	if(M[u][v] < d[v]){
	  d[v] = M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  for(i=0; i<num; i++){
    if(p[i] != -1) total += M[i][p[i]];
  }
  return total;
}


int main(){
  int i,j;
  scanf("%d",&num);
  for(i=0; i<num; i++){
    for(j=0; j<num; j++){
      scanf("%d",&M[i][j]);
      if(M[i][j] == -1) M[i][j] = INFTY;
    }
  }
  printf("%d\n",prim());

  return 0;
}