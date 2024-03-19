#include<stdio.h>
int main()
{
  int n;
  int i,j,out;
  int result;
  while(scanf("%d",&n)!=EOF)
    {
      result=0;
      for(i=2;i<=n;i++)
	{
	  out=0;
	  for(j=2;j<i;j++)
	    {
	      if(i%j==0)
		{
		  out=1;
		  break;
		}
	    }
	  if(out==0) result++;
	}
      printf("%d\n",result);
    }
  return 0;
}