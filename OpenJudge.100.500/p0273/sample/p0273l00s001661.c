#include<stdio.h>

#define N 45

int Fibonacci[N];

int FibonacciNumber(n){
  int i, f0fibonacci, f1fibonacci, fibonacci;
  /* if(n == 0 || n == 1){
    return Fibonacci[n] = 1;
  }
  /if(Fibonacci[n] == 1 ){
    return Fibonacci[n];
  }
  return Fibonacci[n] = FibonacciNumber(n - 2) + FibonacciNumber(n - 1);*/
  f0fibonacci = 1;
  f1fibonacci = 1;
  fibonacci = 1;
  for(i = 2;i <= n;i++){
    fibonacci = f0fibonacci + f1fibonacci;
    f0fibonacci = f1fibonacci;
    f1fibonacci = fibonacci;
  }
  return fibonacci; 

}

int main(){
  int n;
  int fibonacci;
  
  scanf("%d",&n);
  
  printf("%d\n",FibonacciNumber(n));
  return 0;
}