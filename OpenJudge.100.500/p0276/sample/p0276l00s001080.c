#include<stdio.h>
#define MAX 120

main()
{
  int ver[MAX][MAX];
  int i,j,a,deg,num,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
	{
	  ver[i][j] = 0;
	}
    }

  for(i=1;i<=n;i++)
    {
      scanf("%d%d",&a,&deg);
      for(j=1;j<=deg;j++)
	{
	  scanf("%d",&num);
	  ver[i][num] = 1;
	}
    }

  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
	{
	  if(j == n)printf("%d",ver[i][j]);
	  else printf("%d ",ver[i][j]);
	}
      printf("\n");
    }

  return 0;
}