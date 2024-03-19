#include<stdio.h>

int fib(int n){
  return (n<2)?1:(fib(n-1)+fib(n-2));
}

int main(){
  int i;
  scanf("%d",&i);
  printf("%d\n",fib(i));  
  return 0;
}

