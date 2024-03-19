#include<stdio.h>
#include<limits.h>

#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[N][N];

void dijkstra(void);

int main()
{
  int i, j, k, c, u, v;

  scanf("%d",&n);
  
  for(i = 0; i < n; i++)
    {
      for(j = 0; j < n; j++)
	{
	  M[i][j] = INT_MAX;
	}
    }

  
  for(i = 0; i < n; i++)
    {
      scanf("%d %d",&u,&k);
      for(j = 0; j < k; j++)
	{
	  scanf("%d %d",&v,&c);
	  M[u][v] = c;
	}
    }

  dijkstra();
  
  return 0;
}


void dijkstra(void)
{
  int i, u, v, mincost, d[N], p[N], color[N];

  for(u = 0; u < n; u++)
    {
      color[u] = WHITE;
      d[u] = INT_MAX;
      p[u] = -1;
    }
  
  d[0] = 0;

  while(1)
    {
      mincost = INT_MAX;
      for(i = 0; i < n; i++)
	{
	  if(color[i] != BLACK && d[i] < mincost)
	    {
	      mincost = d[i];
	      u = i;
	    }
	}
      if(mincost == INT_MAX)break;

      color[u] = BLACK;
      
      for(v = 0; v < n; v++)
	{
	  if(color[v] != BLACK && M[u][v] != INT_MAX)
	    {
	      if(d[u] + M[u][v] < d[v])
		{
		  d[v] = d[u] + M[u][v];
		  p[v] = u;
		  color[v] = GRAY;
		}
	    }
	}
    }
  for(i = 0; i < n; i++)
    {
      printf("%d %d\n",i,d[i]);
    }
  
}

