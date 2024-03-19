#include<stdio.h>
int main(void){
  int A,B;
  int i;
  scanf("%d%d",&A,&B);
  if(1<=A<=9 && 1<=B<=9)
    i = A*B;
  else
    i = -1;
  printf("%d",i);
  return 0;
}