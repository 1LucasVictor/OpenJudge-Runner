#include <stdio.h>
#include <stdlib.h>

int fib(int n){
  int u,v;
  if((n == 0) || (n == 1)){
    return 1;
  }
  else {
    u = fib(n-1);
    v = fib(n-2);
  
    return u+v;
  }
}

int main(void){
  int n,f,i,k;
  
  scanf("%d",&n);
  
  f = fib(n);
  
  printf("%d\n",f);
  
  return 0;
}