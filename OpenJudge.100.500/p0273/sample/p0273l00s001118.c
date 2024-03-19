#include<stdio.h>

int f[44];

int fib(int n){
  if(n==0){
    return f[n]=1;
  }

  else if(n==1){
    return f[n]=fib(n-1);
  }

  else if(n>1){
    return f[n]=fib(n-2)+fib(n-1);
  }
}

int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}