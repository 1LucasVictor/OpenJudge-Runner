#include <stdio.h>
#define M 100

int main()
{
  int G[M][M],l,m,n,i,j,x;

  scanf("%d",&n);

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
      for(j=0;j<n;j++)
	{
	  printf("%d",G[i][j]);
	  printf(" ");
	}
      
      printf("\n");
    }
  
  return 0;
}