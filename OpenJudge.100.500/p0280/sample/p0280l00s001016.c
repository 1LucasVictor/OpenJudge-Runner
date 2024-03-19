#include<stdio.h>
#define N 100
#define BLACK 0
#define WHITE 1
#define INF 100000000
#define NIL -1

void prim(void);

int A[N][N],n;

int main()
{
  int i,j;
  int cnt = 0;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d",&A[i][j]);
    }
  }

  prim();

  return 0;
}

void prim(){

  int u,v,i,mincost,sum=0;
  int d[N],pi[N],color[N];

  for(u = 0; u < n; u++){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;
  }

  d[0] = 0;

  while(1){
    mincost = INF;
    for(i = 0; i < n; i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INF) break;

    color[u] = BLACK;
  
    for(v = 0; v < n; v++){
      if(color[v] != BLACK && A[u][v] < d[v] && A[u][v] != -1){
	pi[v] = u;
	d[v] = A[u][v];
      }
    }
  
  }
  for(u = 0; u < n; u++){
  sum += d[u];
  }
  printf("%d\n",sum);
}