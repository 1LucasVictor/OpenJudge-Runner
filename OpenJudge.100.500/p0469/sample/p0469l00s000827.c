#include<stdio.h>

int main(void){

  int K,A,B,i,ans = 0;

  scanf("%d",&K);
  scanf("%d %d",&A,&B);

  for(i = A;i <= B;i++){
    if(i % K == 0){
      ans = 1;
      break;
    }
  }

  if(ans == 1) printf("OK\n");
  else printf("NG");
  return 0;
}
