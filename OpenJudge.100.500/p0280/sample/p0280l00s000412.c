#include<stdio.h>
#define INF 999999
#define NIL -1

int main()
{
  int i,j;
  int n;
  int u,min=0,sum=0;
  int g[100][100],a[100],b[100],c[100];

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      a[i]=INF;
      b[i]=NIL;
      c[i]=1;
    }
  a[0]=0;

  for(i = 0; i < n; i++)
    {
      for(j = 0; j < n; j++)
	{
	  scanf("%d",&g[i][j]);
	 
	}
    }

  for(i = 0; i < n; i++)
    {
      for(j = 0; j < n; j++)
	{
	  if(g[i][j]==-1) g[i][j]=INF;
	}
    }

  

  while(1)
    {
      min=INF;
      for(i=0;i<n;i++)
	{
	  if(c[i]!=2 && a[i]<min)
	    {
	      min = a[i];
	      u = i;
	    }
	}

    if(min == INF) break;

    c[u] = 2;
    for(i = 0; i < n; i++){
      if(c[i] != 2 && g[u][i] < a[i]){
  	b[i] = u;
  	a[i] = g[u][i];
      }
    }
  }

  for(i = 0; i < n; i++){
    if(b[i] != NIL) sum += g[i][b[i]];
  }

  printf("%d\n", sum);

  return 0;
}

