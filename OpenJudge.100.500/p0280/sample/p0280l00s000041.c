#include<stdio.h>
#include<stdlib.h>

#define INF 1000000
#define NIL NULL
#define WHITE 5000
#define BLACK 5001

void prim(void);

int A[101][101];
int *d,*pi,*color;
int n;

int main(){
  int i,j,re=0;

  scanf("%d",&n);

  d = malloc(sizeof(int)*(n+1));
  pi = malloc(sizeof(int)*(n+1));
  color = malloc(sizeof(int)*(n+1));

  for(i = 1;i <= n;i++){
    for(j = 1;j <= n;j++){
      scanf("%d",&A[i][j]);
    }
  }

  prim();

  for(i = 1;i <= n;i++){
    re = re + d[i];
  }

  printf("%d\n",re);

  return 0;
}

void prim(){
  int i,j,mincost,u,v;

  for(u = 1;u <= n;u++){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;
  }

  d[1] = 0;

  while(1){
    mincost = INF;

    for(i = 1;i <= n;i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }

    if(mincost == INF)break;

    color[u] = BLACK;

    for(v = 1;v <= n;v++){
      if(color[v] != BLACK && A[u][v] < d[v] && A[u][v] != -1){
	pi[v] = u;
	d[v] = A[u][v];
      }
    }
  }
}