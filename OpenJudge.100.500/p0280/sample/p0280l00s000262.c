#include <stdio.h>
#define INF 10000
#define BLACK 1
#define WHITE 0
#define NIL -1
#define N 2000


int A[N][N];
int n;

int prim()
{
  int i, u, v, count=0, mincost;
  int p[N],d[N],color[N];
  for( i=0 ; i<n ; i++ ){
    d[i] = N;
    p[i]=NIL;
    color[i]=WHITE;
  }
  while(1){
    mincost = INF;
    for( i=0 ; i<n ; i++ ){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost = d[i];
	u=i;
      }
    }
    if(mincost==INF)
      break;

    color[u] = BLACK;
    for( v=0 ; v<n ; v++ ){
      if(color[v]!=BLACK && d[v]>A[u][v] && A[u][v]!=-1){
	p[v] = u;
	d[v] = A[u][v];
      }
    }
  }
  for( i=0 ; i<n ; i++ )
    count+=A[i][p[i]];

  return count;
}

int main()
{
  int i, j;
  scanf("%d",&n);
  for( i=0 ; i<n ; i++ ){
    for( j=0 ; j<n ; j++ ){
      scanf("%d",&A[i][j]);
    }
  }

  printf("%d\n",prim());

  return 0;
}

