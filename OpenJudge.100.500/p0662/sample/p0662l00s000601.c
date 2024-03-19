#include<stdio.h>
int main(){
  int A,B,C,D;
  scanf("%d %d %d %d",&A,&B,&C,&D);
  if(B<=C || D<=A){
    printf("0");
  }
  else if(A<=C){
    if(B<=D){
      printf("%d",B-C);
    }else{
      printf("%d",D-C);
    }
  }else{
    if(D<=B){
      printf("%d",D-A);
    }else{
      printf("%d",B-A);
    }
  }
  return 0;
}
