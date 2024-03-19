#include <stdio.h>
int main()
{
  int n,a[6000],i,b[6000];
  for(;;)
    {
      scanf("%d",&n);
      if(n==0)
	break;
      for(i=0;i<n;i++)
	scanf("%d",&a[i]);
      b[n]=0;
      for(i=n-1;i>=0;i--)
	{
	  b[i]=a[i];
	  if(a[i]+b[i+1]>b[i])
	    b[i]=a[i]+b[i+1];
	  if(b[i]<0)
	    b[i]=0;
	}
      for(i=0;i<n;i++)
	if(b[0]<b[i])
	  b[0]=b[i];
      printf("%d\n",b[0]);
    } 
  return 0;
 }