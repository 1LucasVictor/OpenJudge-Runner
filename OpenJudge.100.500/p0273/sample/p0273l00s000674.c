// Fibonacci Number
#include <stdio.h>

#define MAX 44

//int F[MAX];

int fibonacci(int n){
  if(n == 0 || n == 1)return 1;
  return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
  int i, n;
  scanf("%d", &n);

  printf("%d\n", fibonacci(n));
  return 0;
}

