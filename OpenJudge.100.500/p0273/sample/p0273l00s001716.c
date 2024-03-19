#include<stdio.h>
#include<stdlib.h>

void fibonacci(int);
int main()
{
  int n;
  scanf("%d",&n);
  fibonacci(n);
  return 0;
}

void fibonacci(int n)
{
  int *F,i;
  F = malloc(sizeof(int)*n+1);
  *(F+0) = 1;
  *(F+1) = 1;
  if(n>=2)
    {
      for(i=2;i<=n;i++)
	{
	  *(F+i) = *(F+(i-2)) + *(F+(i-1));
	}
    }
  printf("%d\n",*(F + n));
}

