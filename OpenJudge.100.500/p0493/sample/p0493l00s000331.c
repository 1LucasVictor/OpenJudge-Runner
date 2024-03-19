#include <stdio.h>
int main(void){
  int tp=0;
  int X;
  scanf("%d",&X);
  if(X/500>1){
    tp=tp+X/500*1000;
    X=X%500;
  }
  if(X/5>1)
    tp=tp+X/5*5;
  printf("%d\n",tp);
  return 0;
}