#include<stdio.h>

int dp[50];

int fib(int);

int main(void){
  int i,n,b;
  for(i=0;i<50;i++)dp[i]=-1;
  scanf("%d",&n);
  b=fib(n);
  printf("%d\n",b);
  return 0;
}

int fib(int n){
  if(n==0||n==1){
    return dp[n]=1;
  }
  if(dp[n]!=-1){
    return dp[n];
  }
  return dp[n]=fib(n-1)+fib(n-2);
}

