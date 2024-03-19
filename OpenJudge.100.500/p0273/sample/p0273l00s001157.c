#include<stdio.h>
int Fibonacci(int);
int main()
{
  int n;
  scanf("%d",&n);

  printf("%d\n",Fibonacci(n));
  return 0;
}

int Fibonacci(int n)
{
  if(n==0 || n==1){
    return 1;
  }
  return Fibonacci(n-2)+Fibonacci(n-1);
}