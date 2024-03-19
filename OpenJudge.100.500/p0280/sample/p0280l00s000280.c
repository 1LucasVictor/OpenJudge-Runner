#include <stdio.h>

#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 10000000

void prim(void);

int M[MAX][MAX],colr[MAX],P[MAX],D[MAX],mincost,minsam,n;

int main(){
  int i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = 0;
      scanf("%d",&M[i][j]);
    }
  }
    

  
    prim();

    printf("%d\n",minsam);

    return 0;
}
    

void prim(void){
  int i,u,v;

  for(u=0;u<n;u++){
    colr[u] = WHITE;
    D[u] = INF;
  }

  D[0] = 0;
  P[0] = -1;

  while(1){
    mincost = INF;

    for(i=0;i<n;i++){
      if(colr[i] != BLACK && D[i] < mincost){
	mincost = D[i];
	u = i;
      }
    }

    

    if(mincost == INF)break;

    minsam = minsam + mincost;

    colr[u] = BLACK;

    for(v=0;v<n;v++){

      if(colr[v] != BLACK && M[u][v] != -1){
	if(M[u][v] < D[v]){
	  D[v] = M[u][v];
	  P[v] = u;
	  colr[v] = GRAY;
	}
      }
    }
  }
}

