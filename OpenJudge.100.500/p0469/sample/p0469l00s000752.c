#include <stdio.h>
int main(){
  int K, A, B;
  scanf("%d%d%d",&K,&A,&B);
  int bl = 0;
  for(int i=A; i<=B; i++){
    if((i%K)==0)bl++;
  }
  if(bl){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
}