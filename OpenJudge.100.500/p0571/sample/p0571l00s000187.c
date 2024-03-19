#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

  int N,A,B,train;
  scanf("%d%d%d",&N,&A,&B);
  train = N*A;

  if(train >= B){
    printf("%d\n",B);
  }else{
    printf("%d\n",train);
  }

  return 0;

}
