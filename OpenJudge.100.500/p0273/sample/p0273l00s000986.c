#include<stdio.h>
int Fibonacci(int n){
  if( n==0 || n==1)return 1;
  return Fibonacci(n - 2) + Fibonacci(n - 1);
}
int main(){
  int n,f;

  scanf("%d",&n);
  f=Fibonacci(n);
  printf("%d\n",f);
  return 0;
}

