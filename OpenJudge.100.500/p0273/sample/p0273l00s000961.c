#include <stdio.h>
#define MAX 44

int Fib(int);
int A[MAX];

int main(){ 
  
  int i,n; 
  for(i=0;i<MAX;i++){
    A[i]=0;
  }
  scanf("%d",&n);
  printf("%d\n",Fib(n));
  return 0;
}

int Fib(int n){

  int u,v;

  if(A[n]!=0){
    return A[n];
  }
  else{
    if(n==0 || n==1){
      A[n]=1;
    }
    else {
      u=Fib(n-1);
      v=Fib(n-2);
      A[n]=u+v;
    }
    return A[n];
  } 
}