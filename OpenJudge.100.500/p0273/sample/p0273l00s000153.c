#include<stdio.h>

int fib(int);

int main(){
  int i,n,ans;

  scanf("%d",&n);

  ans=fib(n);

  printf("%d\n",ans);

  return 0;
}

int fib(n){
  if(n== 0 || n== 1){
    return 1;
  }
  else {
    return fib(n-1)+fib(n-2);
  } 
}