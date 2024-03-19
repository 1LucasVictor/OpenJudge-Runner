#include <stdio.h>
#include <limits.h>

int main()
{
  int G[100][100];
  int d[100];
  int pi[100];
  int color[100];
  int i, j, k;
  int n,a,b,c;
  int mincost,sum=0;

  scanf("%d", &n);

  for(i = 0; i < n; i++)
  {
       for(j = 0; j < n; j++)
       {
            G[i][j] = -1;
       }
  }

  for(i = 0; i < n; i++)
  {
    d[i] = INT_MAX;
    pi[i] = 0;
    color[i] = 0;
    scanf("%d%d", &b, &k);
    for(j = 0; j < k; j++)
    {
      scanf("%d%d", &a, &c);
      G[b][a] = c;
    }
  }

  d[0] = 0;

  while(1)
  {
    mincost = INT_MAX;
    for(i = 0; i < n; i++)
    {
      if(color[i] != 1 && d[i] < mincost)
      {
	mincost = d[i];
	b = i;
      }
    }
if(mincost == INT_MAX)
{
     break;
}
    color[b] = 1;
    for(i = 0; i < n; i++)
    {
      if(G[b][i] != -1 && color[i] != 1 && d[b] + G[b][i] < d[i])
      {
	pi[i] = b;
	d[i] = G[b][i];
	d[i] += d[pi[i]];
      }
    }
  }

  for(i = 0; i < n; i++){
       printf("%d %d\n", i, d[i]);
  }
  
  return 0;
}

