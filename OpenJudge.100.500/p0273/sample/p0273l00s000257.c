#include<stdio.h>

int fib(int);
int F[44];

int main(){
  int n, a;
  scanf("%d", &n);

  a = fib(n);

  printf("%d\n", a);

  return 0;
}

int fib(int n){
  static int count=0;

  if(n == 0 || n == 1)
    return 1;

  if(count == n)
    return F[n];

  count++;
  
  return F[n] = fib(n -2) + fib(n - 1);
}