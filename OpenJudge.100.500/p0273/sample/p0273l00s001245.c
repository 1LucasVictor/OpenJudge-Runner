#include <stdio.h>

 long F[100];
 long fib(long);

 int main(){

   long n;

   scanf("%ld",&n);

   printf("%ld\n",fib(n));

   return 0;

 }

long fib(long n){

  if(n==0 || n==1)return F[n]=1;

  if(F[n]>1)return F[n];

  return F[n]=fib(n-2)+fib(n-1);

}