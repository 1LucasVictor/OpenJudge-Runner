#include<stdio.h>
#include<stdlib.h>

int main()
{
  int **arr1;
  int **arr2;
  long long **arr3;
  long long s;
  int n1,n2,n3;
  int num;

  scanf("%d %d %d", &n1, &n2, &n3);
  arr1 = (int**)malloc(sizeof(int*)*n1);
  for(int i = 0; i < n1; i++)
    {
      arr1[i] = (int*)calloc(n2, sizeof(int));
    }
  arr2 = (int**)malloc(sizeof(int*)*n2);
  for(int i = 0; i < n2; i++)
    {
      arr2[i] = (int*)calloc(n3, sizeof(int));
    }
  arr3 = (long**)malloc(sizeof(long*)*n1);
  for(int i = 0; i < n1; i++)
    {
      arr3[i] = (long*)calloc(n3, sizeof(long));
    }
  for(int i = 0; i < n1; i++)
    {
      for(int j = 0; j < n2; j++)
	{
	  scanf("%d", &num);
	  arr1[i][j] = num;
	}
    }
  for(int i = 0; i < n2; i++)
    {
      for(int j = 0; j < n3; j++)
	{
	  scanf("%d", &num);
	  arr2[i][j] = num;
	}
    }
  for(int i = 0; i < n1; i++)
    {
      for(int j = 0; j < n2; j++)
	{
	  for(int k = 0; k < n3; k++)
	    {
	      s =  arr1[i][j]*arr2[j][k];
	      arr3[i][k] += s;
	    }
	}
    }
  for(int i = 0; i < n1; i++)
    {
      for(int j = 0; j < n3-1; j++)
	{
	  printf("%lld ", arr3[i][j]);
	}
      printf("%lld\n", arr3[i][n3-1]);
    }
}

