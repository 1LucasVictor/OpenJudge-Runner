#include <stdio.h>
int fib(int);
int main()
{
  int n,re;
  scanf("%d",&n);
  if(n>=2)
    re=fib(n);
  else re=1;
  printf("%d",re);
  printf("\n");
  return 0;
}
fib(int n)
{
  int A[44],i,re;
  A[0]=1;
  A[1]=1;
  for(i=2;i<=n;i++)
    A[i]=A[i-2]+A[i-1];
  re=A[n];
  return re;
}

