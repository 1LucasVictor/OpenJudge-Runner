#include<stdio.h>
int fib(int);

int main(){
  int n,f;
  
  scanf("%d",&n);
  f=fib(n);
  printf("%d\n",f);
}

int fib(int n){
  if(n==0||n==1)return 1;
  else return fib(n-1)+fib(n-2);
}

