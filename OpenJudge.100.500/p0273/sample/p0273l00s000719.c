#include<stdio.h>

int fibonacci(int n);
int F[44];

int main(){

  int n;
  scanf("%d", &n);

  printf("%d\n", fibonacci(n));

  return 0;
}

int fibonacci(int n){
  F[0] = 1; 
  F[1] = 1;
  int i;
  for(i=2;i<=n;i++){
    F[i] = F[i-2] + F[i-1];
  }

  return F[n];
}