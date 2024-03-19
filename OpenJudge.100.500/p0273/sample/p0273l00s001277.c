#include<stdio.h>
#include<stdlib.h>

int Fib(int);

int main( ){
  int i,n,k;

  scanf("%d",&n);

  printf("%d\n",Fib(n));
  return 0;
}

int Fib(int n){

  if(n == 0||n==1) return 1;
  else if (n != 0 || n != 1 || n < 45) return Fib(n-1)+Fib(n-2);
}

