#include<stdio.h>

int dp[50];

int fib(int num);

int main(void)
{
  int num,i;

  for(i=0;i<50;i++)
    {
      dp[i]=-1;
    }

  scanf("%d",&num);

  printf("%d\n",fib(num));

  return 0;
}

int fib(int num)
{
  if(num==0||num==1)
    {
      return dp[num]=1;
    }

  if(dp[num]!=-1)
    {
      return dp[num];
    }

  return dp[num]=fib(num-1)+fib(num-2);
}

