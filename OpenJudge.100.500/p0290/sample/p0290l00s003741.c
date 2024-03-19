#include <stdio.h>
#include <math.h>
#define N 1000
int main()
{
  int n,i,count=0,x,j=0,k;
  int array[N];
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
    }

  for(k=0;k<n;k++)
    {
      x=array[k];
      if(x==2) count=count+1;

      if(x<2 || x%2 == 0)
	{
	  continue;
	}

      for(i=3;i<=sqrt(x);i++)
	{
	  if(x%i==0)
	    {
	      j=j+1;
	      break;
	    }
	}
      if(j==0)
	{
	  count=count+1;
	}
    }
  printf("%d\n",count);
  return 0;
}