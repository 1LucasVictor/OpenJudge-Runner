#include<stdio.h>

int main()
{
  int max, n, i, j, a[200000];

  scanf("%d", &n);
  for(i=0; i<n; i++)
    {
      scanf("%d", &a[i]);
    }

  max = a[1]-a[0];
    
  for(j=2; j<n; j++)
    {
      for(i=0; i<j; i++)
	{
	  if(a[j]-a[i] > max) max = a[j]-a[i];
	}
    }

  printf("%d\n", max);
  
  return 0;
}