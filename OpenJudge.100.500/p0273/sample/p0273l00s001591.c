#include<stdio.h>
#include<stdlib.h>
int fibonacci(int);
int main(void)
{
  int n;
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));
  return 0;
}
int fibonacci(int n)
{
  int i;//counter
  int *F=(int*)malloc(sizeof(int)*(n+1));
  F[0]=F[1]=1;
  for(i=2;i<=n;i++) F[i]=F[i-2]+F[i-1];
  return F[n];
}

