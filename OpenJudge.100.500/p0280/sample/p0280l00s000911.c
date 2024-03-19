#include <stdio.h>
#define N 101
#define INFTY 99999
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,A[N][N];
int prim(void);

int main()
{
  int i,j,a;
    
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  scanf("%d",&A[i][j]);
	  if(A[i][j]==-1)A[i][j]=INFTY;
	}
    }

  a=prim();
  printf("%d\n",a);
  return 0;
}

int prim(void)
{
  int u,minv,i,j,sum;
  int d[N],p[N],color[N];

  for(i=0;i<n;i++)
    {
      d[i]=INFTY;
      p[i]=-1;
      color[i]=WHITE;
    }
  d[0]=0;

  while(1)
    {
      minv=INFTY;
      u=-1;
      for(i=0;i<n;i++)
	{
	  if(minv>d[i] && color[i]!=BLACK)
	    {
	      u=i;
	      minv=d[i];
	    }
	}
      if(u==-1)break;
      color[u]=BLACK;
      
      for(j=0;j<n;j++)
	{
	  if(color[j]!=BLACK && A[u][j]!=INFTY)
	    {
	      if(d[j]>A[u][j])
		{
		  d[j]=A[u][j];
		  p[j]=u;
		  color[j]=GRAY;
		}
	    }
	}
    }
  
  sum=0;
  for(i=0;i<n;i++)
    {
      if(p[i]!=-1)sum+=A[i][p[i]];
    }
  return sum;
}

