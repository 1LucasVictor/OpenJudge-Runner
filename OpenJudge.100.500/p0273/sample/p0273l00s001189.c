#include<stdio.h>
#include<stdlib.h>

int dp[45];

int fibonacci(int n);

int main(){
  int n,i;
  for(i=0;i<45;i++){
    dp[i] = -1;
  }
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));

  return 0;
}

int fibonacci(int n){
  if(n == 0 || n == 1) return 1;
  if(dp[n] != -1) return dp[n];
  return dp[n] = fibonacci(n-2) + fibonacci(n-1);
}

