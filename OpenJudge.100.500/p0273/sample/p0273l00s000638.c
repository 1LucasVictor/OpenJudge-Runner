#include <stdio.h>
#define N 47

int a[N];
int fib(int n)
{
  if(a[n]==0){
    if(n<2) a[n]=1;
    else a[n]=fib(n-1)+fib(n-2);
  }
  return a[n];
}

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}