#include <stdio.h>
#define K 100
#define I 1000000000

int G[K][K];
int S[K];
int min[K];
int parent[K];

int out(int n)
{
  int i=0,m=0,sum=0,u=0,j=0;
  for(i=0;i<K;i++)
    {
      S[i]=-1;
      min[i]=I;
      parent[i]=-1;
    }

  min[0]=0;

  while(1)
    {
      m=I;
      for(i=0;i<n;i++)
	{
	  if(S[i]!=1 && min[i]<m)
	    {
	      m=min[i];
	      u=i;
	    }
	}

      if(m==I) break;
      S[u]=1;

      for(i=0;i<n;i++)
	{
	  if(S[i]!=1 && G[u][i] != -1)
	    {
	      if(G[u][i]<min[i])
		{
		  min[i]=G[u][i];
		  parent[i]=u;
		  S[i]=0;
		}
	    }
	}
    }
  
  for(i=0;i<n;i++)
    {
      if(parent[i] != -1) sum += G[parent[i]][i];
    }
  return sum;
}

int main()
{
  int i,j,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  scanf("%d",&G[i][j]);
	}
    }
  
  printf("%d\n",out(n));

  return 0;
}

