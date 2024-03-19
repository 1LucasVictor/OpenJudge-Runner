#include<stdio.h>
#define N 44

int F[N];

int fibonacci(int n){
  if(n == 1|| n == 0){
    return F[n] = 1;
  }
  if(F[n]) return F[n];
  return F[n] = fibonacci(n - 2) + fibonacci(n - 1);
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));
  return 0;
}


