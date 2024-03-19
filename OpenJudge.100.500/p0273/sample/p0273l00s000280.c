#include <stdio.h>
#define def -1

int fibonacci(int);

int F[100];

int main(void){
  int i,n;
  scanf("%d", &n);
  for(i = 0; i < 100; i++)
    F[i] = def;
  printf("%d\n", fibonacci(n));
  return 0;
}

int fibonacci(int n){
  if(n == 0 || n == 1){
    F[n] = 1;
  } else if(F[n] != def){

  } else {
    F[n] = fibonacci(n-2) + fibonacci(n-1);
  }
  return F[n];
}