#include <stdio.h>
int fibonacci(int );
int main(){
  int n, a;
  scanf("%d", &n);
  a = fibonacci(n);
  printf("%d\n", a);
  return 0;
}

int fibonacci(int n){
  int i;
  int F[50];
  F[0] = F[1] = 1;
  for( i = 2; i <= n; i++ ){
    F[i] = F[i-1] + F[i-2];
  }
  return F[n];
}
