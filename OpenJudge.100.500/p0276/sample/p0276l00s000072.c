#include<stdio.h>

#define N 100

int G[N][N];

int main()
{
  int n,i,k,u,v,j;

  scanf("%d", &n);

  for(i=0;i<n;i++)
    {
      scanf("%d%d", &u, &k);
      for(j=0;j<k;j++)
	{
	  scanf("%d", &v);
	  G[u-1][v-1]=1;
	}
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  printf("%d", G[i][j]);
	  if(j+1<n)printf(" ");
	}
      printf("\n");
    }
  
  return 0;
}