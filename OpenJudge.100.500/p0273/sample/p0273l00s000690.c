#include<stdio.h>
int fib(int);
int F[45];
int main(){
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++) F[i] = 0;
  printf("%d\n",fib(n));
  return 0;
}
int fib(int n){
  if(n==0 || n==1){
    return 1;
  }
  if(F[n]!=0) return F[n];
  F[n] = fib(n-2) + fib(n-1);
  return F[n];
}
