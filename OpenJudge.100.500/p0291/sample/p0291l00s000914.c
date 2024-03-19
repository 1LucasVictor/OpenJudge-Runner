#include<stdio.h>
int main()
{
  int n, rt[200000], i, j, ri = 0, rj = 0;
  scanf("%d", &n);
  for(i = 0; i < n; i++)
    {
      scanf("%d", &rt[i]);
    }
  ri = rt[0];
  for(i = 0; i < n-1; i++)
    {
      if(ri > rt[i])
	{
	  ri = rt[i];
	  j = i;
	}
    }
  rj = rt[j+1];
  for(j = j+1;j < n; j++)
    {
      if(rj < rt[j])
	{
	  rj = rt[j];
	}
    }
  printf("%d\n", (rj - ri));
}

