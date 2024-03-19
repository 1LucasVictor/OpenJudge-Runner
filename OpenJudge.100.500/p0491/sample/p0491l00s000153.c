#include <stdio.h>
int main(void){
  int N,K,r;
  scanf("%d",&N);
  scanf("%d",&K);
  r = N%K;
  if(r <= K-r){
    printf("%d",r);
  }else{
    printf("%d",K-r);
  }
  return 0;
}
