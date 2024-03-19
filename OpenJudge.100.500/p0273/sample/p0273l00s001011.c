#include<stdio.h>
int n, F[45];

int fibonacci(int n){
  if(n == 0 || n == 1)    return F[n] = 1;
  if(F[n] != -1)          return F[n];
  return F[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
  int i;

  for(i = 0; i < 45; i++)
    F[i] = -1;

  scanf("%d", &n);
  printf("%d\n", fibonacci(n));
  
  return 0;
}