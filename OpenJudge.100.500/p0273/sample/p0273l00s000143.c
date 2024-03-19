#include <stdio.h>
#include <stdlib.h>

int fibonacci(int );

static int F[100] = {};

int main() {
  int number;

  scanf("%d",&number);
  

  printf("%d\n",fibonacci(number));
  
}

int fibonacci(int n) {
  if(n==0 || n==1) return F[n] = 1;
  if(F[n] != 0) return F[n];
  return F[n] = fibonacci(n-2) + fibonacci(n-1);
}

