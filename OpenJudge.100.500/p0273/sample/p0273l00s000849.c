#include<stdio.h>
#include<stdlib.h>

int fib[45];
int Fibonacci(int);

main(){
  int n;

  scanf("%d",&n);
  printf("%d\n",Fibonacci(n));

  return 0;
}

int Fibonacci(int n){
  int ans;
  if(n==0 || n==1) return ans = 1; 
  if(fib[n] != 0) return fib[n];
  ans = Fibonacci(n-1) + Fibonacci(n-2);
  fib[n] = ans;
  return ans;
}