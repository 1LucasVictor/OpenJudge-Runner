#include<stdio.h>
#define N 100
 
 int fib(int);
int main(){
  int n,i;
  scanf("%d",&n);
  i = fib(n);
  printf("%d\n",i);
  return 0;
}

int fib(int n){
  if(n==0 || n==1) return 1;
  return fib(n-2)+fib(n-1);
}

