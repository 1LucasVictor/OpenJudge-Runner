#include <stdio.h>

int main()
{
  int n,a[6000],i,j,k,t,sum;
  for(;;)
    {
      scanf("%d",&n);
      if(n==0)
	exit(0);
      sum=0;
      for(i=0;i<n;i++)
	scanf("%d",&a[i]);
      for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	  {
	    t=0;
	    for(k=i;k<=j;k++)
	      {
		t+=a[k];
	      }
	    if(t>sum)
	      sum=t;
	  }
      printf("%d\n",sum);
    } 
}