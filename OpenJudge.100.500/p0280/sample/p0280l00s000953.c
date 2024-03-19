#include<stdio.h>

#define INF 10000
#define WHITE 0
#define BLACK 1
#define NIL -1

int n,d[100],pi[100],w[100][100],mincost,cost;

void prim(void)
{
  int u,v,i,color[100];
  for(u=0;u<n;u++)
    {
      d[u]=INF;
      pi[u]=NIL;
      color[u]=WHITE;
    }
  d[1]=0;
  
  while(1)
    {
      mincost=INF;
      for(i=0;i<n;i++)
	{
	  if((color[i]!=BLACK)&&(d[i]<mincost))
	    {
	      mincost=d[i];
	      u=i;
	    }
	}
      if(mincost==INF)
	{
	  break;
	}

      color[u]=BLACK;

      for(v=0;v<n;v++)
	{
	  if((color[v]!=BLACK)&&(w[u][v]<d[v]))
	    {
	      pi[v]=u;
	      d[v]=w[u][v];
	    }
	}
    }
  for(i=0;i<n;i++)
    {
      cost+=d[i];
    }
}

int main()
{
  int i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  scanf("%d",&w[i][j]);
	  if(w[i][j]==-1) w[i][j]=INF;
	}
    }
  prim();
  
  printf("%d\n",cost);
    

  return 0;
}