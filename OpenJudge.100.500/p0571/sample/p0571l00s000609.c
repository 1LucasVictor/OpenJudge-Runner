#include<stdio.h>
int main(void){
  int N,A,B,ansA,ansB;
  scanf("%d %d %d",&N,&A,&B);
  ansA=N*A;
  ansB=B;
  if(ansA<=ansB){
    printf("%d",ansA);
  }
  else{
    printf("%d",ansB);
  }
  return 0;
}