#include<stdio.h>
#define N 2000
#define inf 1000000000
#define NIL -1
#define BLACK 2
#define GRAY 1
#define WHITE 0

int n,A[N][N];

int prime(n,w)
{
  int i,v,u,mincost,d[N],pi[N],color[N],sum;

  for(i = 0;i < n;i++){
    d[i] = inf;
    pi[i] = NIL;
    color[i] = WHITE;
  }

  d[0] = 0;

  while(1){
    mincost = inf;
    u = NIL;
    for(i = 0;i < n;i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == inf) break;

    color[u] = BLACK;

    for(v = 0;v < n;v++){
      if(color[v] != BLACK && A[u][v] != inf){
	if(d[v] > A[u][v]){
	  pi[v] = u;
	  d[v] = A[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }

  sum = 0;
  for(i = 0;i < n;i++){
    if(pi[i] != NIL) sum += A[i][pi[i]];
  }
  return sum;
}
    
int main()
{
  int i,j,e;

  scanf("%d",&n);

  for(i = 0;i < n;i++)
    {
      for(j = 0;j < n;j++)
	{
	  scanf("%d",&e);
	  A[i][j] = (e == NIL) ? inf : e;
	}
    }

  printf("%d\n",prime(n,A));

  return 0;
}

  

