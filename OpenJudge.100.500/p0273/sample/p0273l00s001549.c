#include<stdio.h>

#define MAX 100

int F[MAX];

int fibonacci(int n){

  if(n == 0 || n == 1)
    return F[n] = 1;

  if(F[n])
    return F[n];

  else return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
}

int main(){

  int n;

  scanf("%d", &n);

  fibonacci(n);

  printf("%d\n", F[n]);

  return 0;
}

