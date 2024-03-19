#include<stdio.h>
int main()
{
  int n, rt[200000], i, j, ri = 0, rj = 0, sum = 0;
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      scanf("%d", &rt[i]);
    }
  ri = rt[0];
  rj = rt[0];
  for(j = 1; j < n; j++)
    {
      if(rt[j] > rj)
	{
	  rj = rt[j];
	}
    }
  sum = rj - ri; 
  for(i = 1; i < n-1; i++)
    {
      ri = rt[i];
      rj = rt[i];
      for(j = i+1;j < n; j++)
	{
	  if(rt[j] > rj)
	    {
	      rj = rt[j];
	    }
	}
      if((rj - ri) > sum)
	{
	  sum = rj - ri;
	}
    }
  printf("%d\n", sum);
}

