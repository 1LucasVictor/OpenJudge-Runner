#include <stdio.h>
int fib(int n){
  if(n == 0 || n == 1) return 1;
  return fib(n-1) + fib(n-2);
}
int main(){
  int i, n, F[44];
  F[0] = 1;
  F[1] = 1;
  scanf("%d",&n);
  for(i = 2; i <= n; i++){
    F[i] = F[i-1] + F[i-2];
  }
  printf("%d\n",F[n]);
  return 0;
}