#include<stdio.h>
int fib(int, int *);
int main(){
  int i, n;
  int F[45];
  scanf("%d", &n);
  for(i = 0; i <= n; i++) F[i] = -1;
  printf("%d\n", fib(n, F));
  return 0;
}

int fib(int n, int *F){
  F[0] = 1;
  F[1] = 1;
  if(F[n] != -1) return F[n];
  F[n] =  fib(n-1, F)+fib(n-2, F);
  return F[n];
}