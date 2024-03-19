#include <stdio.h>

int fib(int );
int f[44];
int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}

int fib(int n){
  if(n==0||n==1)
    return f[n]=1;
  else {
    if(f[n]!=NULL)
      return f[n];
  }
  return f[n] = fib(n-2)+fib(n-1);
}

