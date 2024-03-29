#include <stdio.h>
#define N 45

int dp[N];

int fib(int n){
  if(n==0 || n==1){
    return dp[n]=1;
  }
  if(dp[n]!=-1){
    return dp[n];
  }
  return dp[n]=fib(n-1)+fib(n-2);
}

int main(){
  int n,i;

  scanf("%d",&n);
  for(i=0;i<N;i++){
    dp[i]=-1;
  }
  printf("%d\n",fib(n));

  return 0;
}
