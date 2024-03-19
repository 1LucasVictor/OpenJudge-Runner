#include<stdio.h>
int n, F[47];

int fibonacci(int n){
  if(n == 0 || n == 1)    return F[n] = 1;
  if(F[n] != - 100)         return F[n];
  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
}

int main(){
  int i;
  for(i = 0; i < 44; i++)
    F[i] = -100;

  scanf("%d", &n);
  printf("%d\n", fibonacci(n));
  
  return 0;
}