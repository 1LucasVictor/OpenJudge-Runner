#include<stdio.h>
int n;

int fibonacci(int n){
  int F[44] = {0};
  if(n == 0 || n == 1)         return F[n] = 1;
  if(F[n] > 1)   return F[n];
  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
}

int main(){

  scanf("%d", &n);
  printf("%d\n", fibonacci(n));
  
  return 0;
}