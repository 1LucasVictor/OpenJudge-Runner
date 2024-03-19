#include<stdio.h>

#define N 45

int Fibonacci[N];

int FibonacciNumber(n){
  if(n == 0 || n == 1){
    return Fibonacci[n] = 1;
  }
  if(Fibonacci[n] == 1 ){
    return Fibonacci[n];
  }
  return Fibonacci[n] = FibonacciNumber(n - 2) + FibonacciNumber(n - 1);
}

int main(){
  int n;
  int fibonacci;

  scanf("%d",&n);

  printf("%d\n",FibonacciNumber(n));
  return 0;
}