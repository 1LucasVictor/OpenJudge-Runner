#include<stdio.h>
#include<stdlib.h>

int F[45];
int fibonacci(int);

int main(){
  int n;
  int f;

  scanf("%d", &n);
  if(n < 0 || 44 < n)
    exit(0);

  f = fibonacci(n);

  printf("%d\n", f);

  return 0;
}

int fibonacci(int n){
  if(n == 0 || n == 1)
    return F[n] = 1;
  if(F[n] != NULL)
    return F[n];
  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
}