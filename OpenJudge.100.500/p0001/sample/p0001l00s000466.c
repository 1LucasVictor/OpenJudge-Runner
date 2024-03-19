#include <stdio.h>

int main(void)
{
  int a[3], b[3], sum[3];
  int count[3]={};
  int i;

  for (i=0;i<3;i++)
    {
      scanf("%d", &a[i]);
      scanf("%d", &b[i]);
      sum[i] = a[i] + b[i];
      
      while (sum[i] != 0)
	{
	  sum[i] = sum[i]/10;
	  count[i]++;
	}
    }
  for (i=0;i<3;i++)
    {
      printf("%d\n", count[i]);
    }
  
  return 0;
}