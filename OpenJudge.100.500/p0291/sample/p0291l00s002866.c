#include<stdio.h>
int main()
{
  int n, rt[200000], i, j, ri = 0, rj = 0, sum = 0;
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      scanf("%d", &rt[i]);
    }
  for(i = 0; i < n-1; i++)
    {
      ri = rt[i];
      rj = 0;
      for(j = i+1;j < n; j++)
	{
	  if(rt[j] > rj)
	    {
	      rj = rt[j];
	    }
	}
      if(i == 0)
	{
	  sum = rj - ri;
	}
      else
	{
	  if((rj - ri) > sum)
	    {
	      sum = rj - ri;
	    }
	  ri = 0;
	}
    }
  printf("%d\n", sum);
}

