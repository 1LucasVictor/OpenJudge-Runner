#include <stdio.h>

int F[45];

int fib(int n)
{
  if(n==1||n==0){return F[n]=1;}
  if(F[n]!=-1){return F[n];}
  return F[n]=fib(n-1)+fib(n-2);
}

int main()
{
  int n,r,i;
  for(i=1;i<=44;i++){F[i]=-1;}
  scanf("%d",&n);
  r=fib(n);
  printf("%d\n",r);
  return 0;
}
    

