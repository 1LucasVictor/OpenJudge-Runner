#include<stdio.h>
int main(void){
  int A,B,T,cou;
  scanf("%d %d %d",&A,&B,&T);
  cou=T/A;
  printf("%d",cou*B);
  return 0;
}