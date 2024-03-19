#include <stdio.h>

int fibonacci(int);

int main(){

  int n,res;

  scanf("%d",&n);

  res=fibonacci(n);
  printf("%d\n",res);

  return 0;
}

int fibonacci(int n){

  if(n==0 || n==1) return 1;

  return fibonacci(n-2)+fibonacci(n-1);
}