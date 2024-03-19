#include <stdio.h>
#define MAX 44

int Fib(int);
int A[44];

main(){
  int n;
  
  scanf("%d",&n);
  printf("%d\n",Fib(n));
  return 0;
}

int Fib(int n){
  if(n==0 || n==1){
    A[n]=1;
    return A[n];
  }
  else {
    A[n]=Fib(n-1)+Fib(n-2);
    return A[n];
  }
}