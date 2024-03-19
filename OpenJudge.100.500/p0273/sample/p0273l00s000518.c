#include <stdio.h>

int A[50];

int fib(int i){
  if(i==0 || i==1)return A[i]=1;
  if(A[i] != -1)return A[i];
  return A[i] = fib(i-1)+fib(i-2);
}

int main(){
  int i,n;

  for(i=0;i<50;i++){
    A[i]=-1;
  }

  scanf("%d",&n);
  printf("%d\n",fib(n));

  return 0;
}
