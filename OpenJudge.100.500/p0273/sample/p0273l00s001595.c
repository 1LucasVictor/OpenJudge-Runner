#include<stdio.h>

int a[45];
int fib(int n)
{
  if(n == 0 || n == 1)
    {
      a[n] = 1;
    }
  if(a[n] != -1)
    {
      return a[n];
    }
  return a[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
  int n, i;
  for(i = 0; i < 45; i++)
    {
      a[i] = -1;
    }
  scanf("%d", &n);
  printf("%d\n", fib(n));
  return 0;
}

