#include<stdio.h>
#define MAX 101

main()
{
  int n, u, v, k, i, j, Adj[MAX][MAX];

  scanf("%d", &n);
  for(i=1; i<=n; i++)
    {     
      for(j=1; j<=n; j++)
	{
	  Adj[i][j] = 0;
	}
    }

  for(i=1; i<=n; i++)
    {
      scanf("%d %d", &u, &k); 
      for(j=1; j<=k; j++)
	{
	  scanf("%d", &v);
	  Adj[i][v] = 1;
	}
    }

  for(i=1; i<=n; i++)
    {
      for(j=1; j<=n; j++)
	{
	  printf("%d", Adj[i][j]);
	  if(j<n) printf(" ");
	}
      printf("\n");
    }

  return 0;
}