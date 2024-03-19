#include<stdio.h>
#include<stdlib.h>

int main(void){
  int N,A,B;
  scanf("%d %d %d",&N,&A,&B);
  if(A*N<B){
    printf("%d", A*N);
  }
  else{
    printf("%d", B);
  }
}

