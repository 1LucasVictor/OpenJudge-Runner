#include<stdio.h>
int main(void){
  int N,A,B;
  int min;
  scanf("%d %d %d",&N,&A,&B);
  if(N*A < B){
    min=N*A;
  }
  else min =B;
  printf("%d",min);
  return 0;
}