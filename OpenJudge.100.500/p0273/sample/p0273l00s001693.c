#include<stdio.h>
int memo[45];
int fib(int n){
  if(memo[n]!=-1)return memo[n];
  return memo[n]=fib(n-1)+fib(n-2);
}
int main(){
  int i,n;
  for(i=0;i<45;i++)memo[i]=-1;
  memo[0]=memo[1]=1;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}