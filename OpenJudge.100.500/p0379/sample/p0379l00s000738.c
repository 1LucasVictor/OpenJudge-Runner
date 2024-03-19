#include<stdio.h>

int main()
{
  int arr1[100][100];
  int h,w;
  int n;
  int count = 0;
  int arr2[100];
  int temp[100];
  scanf("%d %d", &h, &w);
  
  for(int i = 0; i < h; i++)
    {
      for(int k = 0; k < w; k++)
	{
	  scanf("%d", &arr1[i][k]);
	}
    }
  for(int i = 0; i < w; i++)
    {
      scanf("%d", &arr2[i]);
    }
  for(int i = 0; i<h; i++)
    {
      for(int j = 0; j<w; j++)
	{
	  temp[i] += arr1[i][j]*arr2[j];
	}
    }
  for(int i = 0; i < h; i++)
    {
      printf("%d\n", temp[i]);
    }
}

