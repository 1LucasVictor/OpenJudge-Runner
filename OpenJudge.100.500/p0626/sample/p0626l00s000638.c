#include<stdio.h>

int main(void)
{
  int ans,d,n,i;

  scanf("%d %d",&d,&n);
  if(d == 0)
    {
      if(n == 100)
	{
	  ans = 101;
	}
      else
	{
	  ans = n;
	}
    }
  else
    {
      if(n == 100)
	{
	  ans = 101;
	 
	}
      else
	{
	  ans = n;
	}
      for(i=0;i<d;i++)
	{
	  ans *= 100;
	} 
    }
  printf("%d",ans);

  return 0;
}