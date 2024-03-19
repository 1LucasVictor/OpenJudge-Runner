#include<stdio.h>
int fib(int n){
  static int sum=1;
  if(n>=0){
    if(n==0)
      return 1;
    else if(n==1)
      return 1;
    else
      sum=fib(n-1)+fib(n-2);
    return sum;
  }
}
int main(void){
  int n;
  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}