#include<stdio.h>

int fibonacci(int );

main()
{
  int n;

  scanf("%d", &n);
  printf("%d\n", fibonacci(n));

  return 0;
}

int fibonacci(int n)
{
  if(n == 0 || n == 1)
    {
      return 1;
    }
  else
    {
      return fibonacci(n-1) + fibonacci(n-2);
    }
}