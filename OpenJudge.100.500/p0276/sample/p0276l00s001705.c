#include <stdio.h>

int main()
{
  int G[100][100],l,m,n,i,j,x;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  G[i][j] = 0;
	}
    }

  for(i=0;i<n;i++)
    {
      scanf("%d%d",&m,&l);

      for(j=0;j<l;j++)
	{
	  scanf("%d",&x);
	  G[m-1][x-1] = 1;
	}
    }

  for(i=0;i<n;i++)
    {
      for(j=0;j<n-1;j++)
	{
	  printf("%d ",G[i][j]);
	}
      printf("%d",G[i][j]);
      printf("\n");
    }
  
  return 0;
}