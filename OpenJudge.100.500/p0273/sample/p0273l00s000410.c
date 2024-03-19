#include<stdio.h>

int fib(int n){
  if(n==1 || n==0) return 1;
  else return fib(n-1)+fib(n-2);
}


main(){
  int n;
  scanf("%d",&n);

  printf("%d\n",fib(n));
return 0;
}