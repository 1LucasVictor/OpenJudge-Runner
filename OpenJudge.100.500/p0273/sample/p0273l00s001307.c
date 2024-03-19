#include <stdio.h>

int fib(int);

int A[50];

int main(){
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    A[i]=-1;
  }
  printf("%d\n",fib(n));
  return 0;
}


int fib(int n){
  int i;
  A[0]=1;
  A[1]=1;
  for(i=2;i<=n;i++){
  A[i]=A[i-1]+A[i-2];
  }
  return A[n];
}