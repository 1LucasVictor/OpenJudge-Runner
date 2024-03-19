#include <stdio.h>

int a[45];

int fib(int n){
 if( n==0 || n==1 ){
  a[n]=1;
  return a[n];
 }else{
   a[n]=fib(n-1)+fib(n-2);
   return a[n];
 }
}

int main(void)
{
 int n;

 scanf("%d",&n);

 printf("%d",fib(n));

 return 0;
}