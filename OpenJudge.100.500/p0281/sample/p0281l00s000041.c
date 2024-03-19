#include <stdio.h>

#define WHITE 0
#define BRACK 1
#define inf 1000000000
#define NIL -1

int n,d[101],pi[101],color[101],G[101][101],count = 0;

int dijkstra(int r)
{
  int u,mincost,i,v;
  for(u = 1;u <= n;u++)
    {
      d[u] = inf;
      pi[u] = NIL;
      color[u] = WHITE;
    }
  d[r] = 0;
  while(1)
    {
      mincost = inf;
      for(i = 1;i <= n;i++)
	{
	  if(color[i] != BRACK && d[i] < mincost)
	    {
	      mincost = d[i];
	      u = i;
	    }
	}
      if(mincost == inf)
	{
	  break;
	}
      color[u] = BRACK;
      for(v = 1;v <= n;v++)
	{
	  if(color[v] != BRACK && G[u][v] < d[v] && G[u][v] != -1 &&d[u] + G[u][v] < d[v])
	    {
	      pi[v] = u;
	      d[v] =d[u] + G[u][v];
	    }
	} 
    }
  for(i = 1;i <= n;i++)
	{
	  if(pi[i] != NIL)
	    {
	      count = count + G[i][pi[i]];
	    }
	}
  return count;
}

int main()
{
  int i,j,answer,u,k,v;
  
  scanf("%d",&n);
  for(i = 1;i <= n;i++)
    {
      for(j = 1;j <= n;j++)
	{
	  G[i][j] = -1;
	}
    }

  for(i = 1;i <= n;i++)
    {
      scanf("%d %d",&u,&k);
      for(j = 1;j <= k;j++)
	{
	  scanf("%d",&v);
	  scanf("%d",&G[i][v + 1]);
	}
    }

  dijkstra(1);

  for(v = 0;v < n;v++)
    {
      printf("%d %d\n",v,d[v + 1]);
    }
  
  return 0;
}

