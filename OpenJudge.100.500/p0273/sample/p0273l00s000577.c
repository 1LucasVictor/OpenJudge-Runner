#include<stdio.h>

int fibonacci(int);

int main(){
  int k;
  scanf("%d", &k);
  printf("%d\n", fibonacci(k));
  return 0;
}

int fibonacci(int n){
  int i;
  int F[n];
  F[0] = 1;
  F[1] = 1;
  for(i = 2; i <= n; i++) F[i] = F[i - 2] + F[i - 1];
  return F[n];
}

