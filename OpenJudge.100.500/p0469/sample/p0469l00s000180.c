#include <stdio.h>

int main (){
  int K,A,B,x;

  scanf("%d\n",&K);
  scanf("%d %d\n",&A,&B);

  for(x=A;x%K==0;x++){
    if(x%K==0)break;
  }

  if(x<=B){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  return 0;
}