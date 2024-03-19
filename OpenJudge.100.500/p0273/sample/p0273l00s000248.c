#include<stdio.h>
#define N 44

int F[N];

int fibonacci(int n){
  
  if(n == 0 || n == 1){
    return F[n] = 1;
  }
  if(F[n] != 0){
    return F[n];
  }
  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
}

int main(){

  int a, n;

  scanf("%d", &n);
  
  a = fibonacci(n);

  printf("%d\n", a);  

  return 0;
}