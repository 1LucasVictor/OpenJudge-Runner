#include <stdio.h>
#define INFTY 1000000
#define M -1
#define WHITE 0
#define GRAY  1
#define BLACK 2
#define N 100


int n;
int A[N][N];

void dijkstra(void)
{
  int d[N],p[N],color[N];
  int i,v,u,mincost;

  for(i = 0;i < n;i ++)
    {
      d[i] = INFTY;
      p[i] = M;
      color[i] = WHITE;
    }
  
  d[0] = 0;
  color[0] = GRAY;
  while(1)
    {
      mincost=INFTY;
      //u=M;
      for(i = 0;i< n;i ++)
	{
	  if(mincost > d[i] && color[i] != BLACK)
	    {
	      u = i;
	      mincost = d[i];
	    }
	}
      if(mincost == INFTY) break;
       
      color[u] = BLACK;
      for(v = 0;v < n;v ++)
	{
	  if(color[v] != BLACK && d[u] + A[u][v] < d[v])
	    {
	      d[v] = d[u] + A[u][v];
	      p[v] = u;
	      color[v] = GRAY;
	    }
	}
    }
  for(i = 0;i < n;i ++)
    {
      printf("%d %d\n",i,d[i]);
    }
}


 
int main()
{
  int i,j,u,k,v,c;

  scanf("%d",&n);

  for(i = 0;i < n;i ++)
    {
      for(j = 0;j < n;j ++)
	{
	  A[i][j] = INFTY;
	}
    }
  
  for(i = 0;i < n;i ++)
    {
      scanf("%d%d",&u,&k);
      for(j = 0;j < k;j ++)
	{
	  scanf("%d%d",&v,&c);
	  A[u][v] = c;
	}
    }
 
  dijkstra();
  return 0;
}
 