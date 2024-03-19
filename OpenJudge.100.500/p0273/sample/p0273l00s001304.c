#include <stdio.h>
#include <stdlib.h>
#define N 45

int F[N];
int fib(int);

int main(){
  int n,i;

  scanf("%d",&n);
  printf("%d\n",fib(n));
  return 0;
}

int fib(int n){
if(n==0 || n==1){
  return F[n]=1;
 }
 if(F[n]!=NULL){
   return F[n];
 }
return F[n]=fib(n-2)+fib(n-1);
}