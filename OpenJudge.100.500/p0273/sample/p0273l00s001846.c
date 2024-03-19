#include<stdio.h>

#define NIL -1

int F[44];

int main()
{
  int n,i;

  scanf("%d",&n);

  for(i = 0 ; i <= n ; i++) //データを初期化
    {
      F[i] = NIL;
    }

  printf("%d\n",fib(n));
  
  return 0;
}

int fib(int n)
{
  if(n == 0 || n == 1) return F[n] = 1;
  else if(F[n] != NIL) return F[n];
  else return F[n] = fib(n-1) + fib(n-2);
}

