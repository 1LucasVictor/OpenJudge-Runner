#include<stdio.h>

#define N 1001
#define inf 1000000
#define whi 0
#define gra 1
#define bra 2

void dijk(void);

int n,G[N][N];

int main()
{
  int u,k,v,c,i,j;
  
  scanf("%d",&n);

  for(i=0; i<n; i++)
    for(j=0; j<n; j++)
      G[i][j]=inf;
  
  for(i=0; i<n; i++)
    {
      scanf("%d%d",&u,&k);
      for(j=0; j<k; j++)
	{
	  scanf("%d%d",&v,&c);
	  G[u][v]=c;
	}
    }

  dijk();

  return 0;
}

void dijk(void)
{
  int col[N],d[N],u,v,x,i,j;

  for(i=0; i<n; i++)
    {
      d[i]=inf;
      col[i]=whi;
    }

  d[0]=0;
  col[0]=gra;

  while(1)
    {
      x=inf;
      u=-1;

      for(i=0; i<n; i++)
	{
	  if(x>d[i] && col[i] != bra)
	    {
	      u=i;
	      x=d[i];
	    }
	}

      if(u==-1) break;

      col[u]=bra;

      for(v=0; v<n; v++)
	{
	  if(col[v] != bra && G[u][v] != inf && d[v]>d[u]+G[u][v])
	    {
	      d[v]=d[u]+G[u][v];
	      col[v]=gra;
	    }
	}
    }

  for(i=0; i<n; i++)
    {
      printf("%d %d\n",i,d[i]);
    }
}

