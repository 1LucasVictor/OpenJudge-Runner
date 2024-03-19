#include <stdio.h>

int main(){
  int A,B,C;
  scanf("%d %d %d",&A,&B,&C);
  
  int K;
  
  if(C-(A-B)<=C){
    printf("%d\n",C-(A-B));
  }else{
    printf("IMPOSSIBLE\n");
  }
  return 0;
}