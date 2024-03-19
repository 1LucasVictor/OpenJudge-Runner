#include <stdio.h>
#define NIL -1
int F[44];
int fib(int n)
{
  if(n==0||n==1)
    {
      return F[n] = 1;
    }
  if(F[n]!=-1)return F[n];
  return F[n]=fib(n-2)+fib(n-1);
}

int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=0;i<=n;i++)
    {
      F[i]=NIL;
    }
  printf("%d\n",fib(n));

  return 0;
}

