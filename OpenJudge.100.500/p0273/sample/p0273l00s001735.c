#include <stdio.h>
int fibonacci(int);

int main(){
  int n,u;
  scanf("%d",&n);
  if(0<=n && n<=44){
    
  u=fibonacci(n);
  printf("%d\n",u);
  
  }
}

int fibonacci(m){
  int fib;
  if(m==0 || m==1) fib=1;
  

  else fib=fibonacci(m-1)+fibonacci(m-2);
  return fib;
}