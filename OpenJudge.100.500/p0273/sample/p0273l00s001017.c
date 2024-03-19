#include<stdio.h>
#include<stdlib.h>

int Fibonacci(int);

int main(){
  int n;

  scanf("%d",&n);
  if( n<1 || 44<n ) exit(1);

  printf("%d\n",Fibonacci(n));
  return 0;
}

int Fibonacci(int x){
  static int F[45]={};

  if( x==1 || x==0 ){
    F[x] = 1;
    return F[x];
  }

  if( F[x] != 0 ){
    return F[x];
  }

  F[x] = Fibonacci(x-2) + Fibonacci(x-1);

  return F[x];
}