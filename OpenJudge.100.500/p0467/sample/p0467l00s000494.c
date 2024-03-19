#include<stdio.h>

int main(void){
  int A,B,C,K;
  scanf("%d %d %d %d",&A,&B,&C,&K);
int t=0;
  for(int i=1;i<=K;i++){
    if(A>0){
      A--;
      t++;
  }else if(B>0){
      B--;
    }else if(C>0){
      C--;
      t--;
    }
  }
  printf("%d",t);
  return 0;
}