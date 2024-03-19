#include<stdio.h>

int main()
{
  int matrix[100][100];
  int n;
  int i=0,j=0;
  int k=0;
  int num;
  int array[100];

  for(i=0;i<100;i++)
    {
      for(j=0;j<100;j++)
	{
	  matrix[i][j] = 0;
	}
    }

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
      scanf("%d",&k);
      for(j=0;j<k;j++)
	{
	  scanf("%d",&num);
	  matrix[i][num-1] = 1;
	}
    }
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  printf("%d",matrix[i][j]);
	  if(j!=n-1)
	    {
	      printf(" ");
	    }
	  else
	    {
	      printf("\n");
	    }
	}
    }


  return 0;
}