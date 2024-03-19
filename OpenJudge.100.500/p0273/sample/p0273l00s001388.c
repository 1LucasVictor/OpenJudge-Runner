#include<stdio.h>
#define NIL -1

int dp[45];

int Fib(int n){
  if(n==0||n==1) return 1;
  else if(dp[n]!=NIL) return dp[n];
  else return dp[n]=Fib(n-1)+Fib(n-2);
}

int main(){
  int i,ans,n;
  scanf("%d",&n);
  for(i=0;i<45;i++) dp[i]=NIL;
  ans=Fib(n);
  printf("%d\n",ans);
  return 0;
}