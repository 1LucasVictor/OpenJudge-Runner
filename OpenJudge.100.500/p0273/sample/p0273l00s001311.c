#include <stdio.h>

int dp[50];

int fibo(int n)
{
  if(n==0)return dp[n]=1;
  else if(n==1)return dp[n]=1;
  else if(dp[n]!=-1)return dp[n];
  else return dp[n]=fibo(n-1)+fibo(n-2);
}

int main()
{
  int n,i;
  for(i=0;i<50;i++)dp[i]=-1;
  scanf("%d",&n);
  printf("%d\n",fibo(n));

  return 0;
}

