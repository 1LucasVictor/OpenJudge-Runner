#include<stdio.h>

int main(void){
  int K;
  int A,B,c=0;
  scanf("%d",&K);
  scanf("%d %d",&A,&B);
  for(int i=A;i<=B;i++){
    if(i%K==0){
      c++;
      break;
    }
  }
  if(c>0){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  return 0;
}