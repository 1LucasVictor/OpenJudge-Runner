#include <stdio.h>

int F[44];

int main(){
  int i, n;
  scanf("%d",&n);
  for(i=0; i<44; i++)F[i] = 0;
  printf("%d\n",fib(n));
  return 0;
}

int fib(int n){
  if(n == 0 || n == 1)return F[n] = 1;
  if(F[n] != 0)return F[n];
  return F[n] = fib(n-1) + fib(n-2);
}

