#include<stdio.h>
#include<stdlib.h>
int prime(int x);
int main(){
  int *A,i,N,n,count=0;
  scanf("%d\n",&N);
  A=(int *)malloc(N*sizeof(int));
  for(i=0;i<N;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<N;i++){
    if(prime(A[i])==1)count++;
  }
  printf("%d\n",count);
  return 0;
}
int prime(int x){
  int i;
  if(x==2) return 1;
  else{
    for(i=2;i<x;i++){
      if(x%i==0) return 0;
      else if(i==x-1) return 1;
    }
  }
  return 0;
}

