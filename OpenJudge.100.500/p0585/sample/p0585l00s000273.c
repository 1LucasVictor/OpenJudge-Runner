#include <stdio.h>
int main(void){
  int A,B,T;
  scanf("%d %d %d",&A,&B,&T);
  int s;
  s=B*(T/A);
  printf("%d",s);
  return 0;
}