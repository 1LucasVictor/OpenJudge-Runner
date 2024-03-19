#include <stdio.h>
#include <stdlib.h>
#define N 50
int x[N];
int fib(int);
int main(){
  int n,i;
  for(i = 0; i < N; i++)
    x[i] = -1;

  scanf("%d",&n);
  if(n < 0 || n > 44){
    printf("制約: 0 ≤ n ≤ 44\n");
    exit(1);
  }

  printf("%d\n",fib(n));

  return 0;
}

int fib(int n){
  if(n == 0 || n == 1)
    return x[n] = 1;
  if(x[n] != -1)
    return x[n];

  x[n] = fib(n-1) + fib(n-2);

  return x[n];
}

