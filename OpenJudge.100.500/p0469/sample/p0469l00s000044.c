#include<stdio.h>
int search(int A,int B,int K){
  int i;
  for(i = A;i<=B;i++){
    if(i % K == 0){
      return 0;}
  }
  return 1;
}
  

int main(void){
  int K,A,B,Answer;
  scanf("%d",&K);
  scanf("%d%d",&A,&B);
  Answer = search(A,B,K);
  if(Answer == 0)
    printf("OK");
  else
    printf("NG");
  return 0;
}