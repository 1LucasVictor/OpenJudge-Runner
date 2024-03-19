#include<stdio.h>
#include<math.h>

#define MAX 101
#define inf 100000000
#define WHITE 0
#define BLACK 1

int n,A[MAX][MAX],d[MAX],C[MAX],pi[MAX];

void MST()
{
  int i,j,min,u;

  d[1] = 0;

  while(1)
    {
      min = inf;

      for(i = 1 ; i <= n ; i++)
	{
	  if(C[i] != BLACK && d[i] < min)
	    {
	      min = d[i];
	      u = i;
	    }
	}

      if(min == inf) return;

      C[u] = BLACK;

      for(i = 1 ; i <= n ; i++)
	{
	  if(C[i] != BLACK && A[u][i] < d[i] && A[u][i] != inf)
	    {
	      d[i] = A[u][i];
	      pi[i] = u;
	    }
	}
      
    }

}

int main()
{
  int i,j,a=0;

  scanf("%d",&n);

  for(i = 1 ; i <= n ; i++) //初期化
    {
      C[i] = WHITE;
      d[i] = inf;
      pi[i] = -1;
    }

  for(i = 1 ; i <= n ; i++)
    {
      for(j = 1 ; j <= n ; j++)
	{
	  scanf("%d",&A[i][j]);
	  
	  if(A[i][j] < 0) A[i][j] = inf;
	}
    }

  MST();

  for(i = 1 ; i <= n ; i++)
    {
      a += d[i];
    }
  
  printf("%d\n",a);
  
  return 0;
}

