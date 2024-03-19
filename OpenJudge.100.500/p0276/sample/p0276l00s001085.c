#include <stdio.h>
main()
{
  int G[10][10];
  int i,j,n,u,k,v;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
	{
	  G[i][j]=0;
	}
    }

  for(i=1;i<=n;i++)
    {
      scanf("%d%d",&u,&k);
      for(j=1;j<=k;j++)
	{
	  scanf("%d",&v);
	  G[u][v]=1;
	}
    }

  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
	{
	  printf("%d",G[i][j]);
	  if(j<n)
	    {
	      printf(" ");
	    }
	}
      printf("\n");
    }
  return 0;
}