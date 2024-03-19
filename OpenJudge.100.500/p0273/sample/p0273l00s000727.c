#include<stdio.h>

int F(int);

int Fib[45];

int main()
{
  int n,i;
  for(i=0;i<45;i++)Fib[i]=0;
  scanf("%d",&n);
  printf("%d\n",F(n));
  return 0;
}

int F(int n)
{
  if(n==0||n==1)return Fib[n]=1;
  if(Fib[n]!=0)return Fib[n];
  return F(n-1)+F(n-2);
}
  