//A
#include<stdio.h>
int main(void){
  int K;
  int A,B;
  int i;
  scanf("%d",&K);
  scanf("%d%d",&A,&B);
  for(i=A;i<=B;i++){
    if((i%K)==0){
      printf("OK");
      return 0;
    }
  }
  printf("NG");
  return 0;
}