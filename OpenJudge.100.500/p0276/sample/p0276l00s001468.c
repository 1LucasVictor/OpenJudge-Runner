#include <stdio.h>

int main()
{
  int i ,j;
  int n, u, k, v[100][100]={}, a;

  scanf("%d", &n);  // G??????????????°n

  for(i = 0; i < n; i++)
    {
      scanf("%d %d", &u, &k);
      for(j = 0; j < k; j++)
	{
	  scanf("%d", &a);
	  v[u-1][a-1] = 1;
	}
    }
  
  for(i = 0; i < n; i++)
    {
      for(j = 0; j < n; j++)
	{
	  if(j == n-1) printf("%d", v[i][j]);
	  else printf("%d ", v[i][j]);
	  if(j == n-1) printf("\n");
	}
    }
  return 0;
}