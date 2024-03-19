#include <stdio.h>

int fibo(int);

int main()
{
  int n, fibonacci;

  scanf("%d", &n);

  fibonacci = fibo(n);

  printf("%d\n",fibonacci);

  return 0;
}

int fibo(int n)
{

  if(n==0) return 1;
  if(n==1) return 1;
  return fibo(n-1) + fibo(n-2);

  return 0;
}