#include <stdio.h>
#define MAX_N 44

int fibonach(int);
int recurFib(int);

int Fib[MAX_N];

int main()
{
  int n;

  scanf("%d", &n);

  printf("%d\n", fibonach(n));

  return 0;
}

int fibonach(int n)
{
  int i;

  for(i = 0; i <= n; i++)
    {
      Fib[i] = 0;
    }

  return recurFib(n);
}

  int recurFib(int n)
{
  if(n == 0 || n == 1)
    Fib[n] = 1;

  else if(Fib[n] == 0)
    Fib[n] = recurFib(n - 1) + recurFib(n - 2);

  return Fib[n];
}