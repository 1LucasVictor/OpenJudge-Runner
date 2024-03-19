#include<stdio.h>
#define N 50
#define O 0
#define M -1
#define I 1
#define T 2

int dp[N];

int Fib(int);

int main(){
  int n,i;

  for(i=0;i<N;i++){
    dp[i]=M;
  }
  scanf("%d",&n);
  printf("%d\n",Fib(n));
  return 0;
}

int Fib(int n){
  if(n==O || n==I){
    return dp[n] =I;
  }
  if(dp[n]!=M){
    return dp[n];
  }
  return dp[n]=Fib(n-I)+Fib(n-T);
}

