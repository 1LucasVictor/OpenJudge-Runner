#include<stdio.h>


int fib(int);

int main(){
  int n,r;

  scanf("%d",&n);
  r=fib(n);

  printf("%d\n",r);

  return 0;
}

int fib(int n){
  int a[45];
  if(n==0) return 1;
  else if(n==1) return 1;
  a[n]=fib(n-2);
  return a[n]+fib(n-1);
 
}

