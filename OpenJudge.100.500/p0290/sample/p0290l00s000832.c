#include<stdio.h>

int main()
{
  int n;
  int arr;
  int count = 0;
  int temp = 0;
  int j;
  scanf("%d", &n);

  while(n--)
    {
      scanf("%d", &arr);
      for( j = 2; j*j <= arr; j++)
	{
	  if(arr%j == 0)
	    {
	      break;
	    }
	}
      if(j*j > arr)
	{
	  count++;
	}
    }
  printf("%d\n", count);
}

