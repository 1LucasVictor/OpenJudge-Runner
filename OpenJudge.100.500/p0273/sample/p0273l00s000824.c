#include<stdio.h>
#define N 45

int F[N],i;

int fib(int);

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}

int fib(int n)
{
  F[0]=1;
  F[1]=1;

  for(i=2; i<=n; i++)
    {
      F[i]=F[i-2]+F[i-1];
    }
  return F[n];
}

