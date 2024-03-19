#include<stdio.h>
#define N 100
#define INF 100000000

int n, color[N], A[N][N], B[N], C[N];

void prim()
{
  int min, i, j;
  for(i = 0; i < n; i++)
    {
      B[i] = INF;
      C[i] = -1;
      color[i] = 0;
    }
  B[0] = 0;

  while(1)
    {
      min = INF;
      for(i = 0; i < n; i++)
	{
	  if(color[i] != 1 && B[i] < min)
	    {
	      min = B[i];
	      j = i;
	    }
	}
      if(min == INF)
	{
	  break;
	}
      color[j] = 1;
      for(i = 0; i < n; i++)
	{
	  if(color[i] != 1 && A[j][i] < B[i] && A[j][i] >= 0)
	    {
	      C[i] = j;
	      B[i] = A[j][i];
	    }
	}
    }
}

int main()
{
  int i, j, c;
  c = 0;
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      for(j = 0; j < n; j++)
	{
	  scanf("%d", &A[i][j]);
	}
    }
  prim();
  for(i = 0; i < n; i++)
    {
      c += B[i];
    }
  printf("%d\n", c);
  return 0;
}

