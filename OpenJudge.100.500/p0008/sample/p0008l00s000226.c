#include<stdio.h>
int main()
{
  int i,j,k,r=0,n;
  while(scanf("%d",&n) != EOF)
    {
      r=0;
      for(i=2; i<=n; i++)
	{
	  k=0;
	  for(j=i-1; j>1; j--)
	    {
	      if(i%j==0)
		{
		  k+=1;
		  break;
		}
	    }
	  if(k==0) r+=1;
	}
      printf("%d\n",r);
    }
  return 0;
}