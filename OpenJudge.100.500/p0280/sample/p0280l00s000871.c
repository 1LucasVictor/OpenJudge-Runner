#include<stdio.h>
#define M 100
#define inf (1<<21)
#define White 0
#define Black 1

int prim(void);

int n, G[M][M];
 
int main()
{
  int i,j;
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  scanf("%d",&G[i][j]);
	  if(G[i][j] == -1) G[i][j] = inf;
	}
    }
  
  printf("%d\n",prim());
 
  return 0;
}
 
int prim()
{
  int color[M],d[M],p[M];
  int min,u,v,t=0;
  int i;
 
  for(i=0;i<n;i++)
    {
      color[i] = White;
      d[i] = inf;
      p[i] = -1;
    }
 
  d[0] = 0;
  p[0] = -1;
   
  while(1)
    {
      min = inf;
      for(i=0;i<n;i++)
	{
	  if(color[i] != Black && d[i] < min)
	    {
	      min = d[i];
	      u = i;
	    }
	}
      if(min == inf) break;
      color[u] = Black;
       
      for(v=0;v<n;v++)
	{
	  if(color[v] != Black && G[u][v] != inf)
	    {
	      if(G[u][v] < d[v])
		{
		  d[v] = G[u][v];
		  p[v] = u;
		}
	    }
	}
    }
  for(i=0;i<n;i++)
    {
      if(p[i] != -1) t += G[i][p[i]];
    }
  return t;
}