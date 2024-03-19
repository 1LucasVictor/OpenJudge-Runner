#include<stdio.h>
#define N 100
#define INF 10000000

int n, A[N], B[N][N], C[N][N], D[N];
void dfs(int a, int b)
{
  int i;
  D[a] = b;
  for(i = 0; i < A[a]; i++)
    {
      if(D[B[a][i]] > b + C[a][i])
	{
	  dfs(B[a][i], b+C[a][i]);
	}
    }
}

int main()
{
  int i, j, k;
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      scanf("%d", &k);
      scanf("%d", &A[i]);

      for(j = 0; j < A[i]; j++)
	{
	  scanf("%d%d", &B[i][j], &C[i][j]);
	}
    }
  for(i = 0; i < n; i++)
    {
      D[i] = INF;
    }
  dfs(0, 0);
  for(i = 0; i < n; i++)
    {
      printf("%d %d\n", i, D[i]);
    }
}

