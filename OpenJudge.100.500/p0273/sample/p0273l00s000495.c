#include<stdio.h>

int Dp[50];

int Fibonacci(int);

int main(){
  int n,i;

  scanf("%d",&n);

  for(i = 0 ; i < 50 ; i++) Dp[i] = -1;

  printf("%d\n",Fibonacci(n));

  return 0;
}

int Fibonacci(int x){
  if(x == 0 || x == 1) return Dp[x] = 1;
  if(Dp[x] != -1) return Dp[x];
  return Dp[x] = Fibonacci(x-1) + Fibonacci(x-2);
}

