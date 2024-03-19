#include <stdio.h>
#define MAX 45
int fib(int,int *);

int main(){
  int n,F[MAX]={};
  scanf("%d",&n);
  printf("%d\n",fib(n,F));
  return 0;
}
int fib(int n,int F[]){
  if(n==0 || n==1) return F[n]=1;
  if(F[n]!=0) return F[n];
  return F[n]=fib(n-2,F)+fib(n-1,F);
}

