#include<stdio.h>

int fibona(int n);

int main()
{
  int n;
  int fib;
  scanf("%d",&n);
  fib = fibona(n);
  printf("%d\n",fib);
}

int fibona(int n)
{
  int i=0;
  int fib[45];
  for(i=0;i<=n;i++)
    {
      fib[i]=0;
      if(i==0)
	{
	  fib[0] = 1;
	}
      else if(i==1)
	{
	  fib[1] = 1;
	}
      else
	{
	  fib[i] = fib[i-1] + fib[i-2];
	}
    }
  return fib[n];
}

