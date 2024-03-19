#include <stdio.h>

int main(){
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);
  
  int yoki1=0,yoki2=0;
  yoki1 = B;
  yoki2 = C;
  yoki2 -= (A-B);
  printf("%d",yoki2);
}