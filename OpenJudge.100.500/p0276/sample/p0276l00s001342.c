#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n,i,j,k,l,v,**a,u;
  scanf("%d",&n);
  a = malloc(sizeof(int*)*n);
  for(i=0;i<n;i++)
    {
      a[i] = malloc(sizeof(int)*n);
    }
  for(i=0;i<n;i++)
    {
      scanf("%d%d",&u,&k);
      for(l=0;l<n;l++)
	{
	  a[u-1][l]=0;
	}
      for(j=0;j<k;j++)
	{
	  scanf("%d",&v);
	  a[u-1][v-1]=1;
	}
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  printf("%d",a[i][j]);
	  if(j!=n-1)printf(" ");
	}
      printf("\n");
    }
  return 0;
}

