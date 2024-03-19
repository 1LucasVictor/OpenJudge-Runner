#include<stdio.h>

int main()
{
  int arr[3];
  int count = 0;

  for(int i = 0; i<3; i++)
    {
      scanf("%d", &arr[i]);
    }
  
  for(int i = arr[0]; i<arr[1]+1; i++)
    {
      if(arr[2]%i == 0)
	{
	  count++;
	}
    }
  printf("%d\n", count);
  return 0;
}
