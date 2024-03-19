#include <stdio.h>

int main(){
  int K,A,B;

  scanf("%d\n",&K);

  scanf("%d %d\n",&A,&B);

  int x;

  A<=x<=B;

  if(x%K==0){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  return 0;
}