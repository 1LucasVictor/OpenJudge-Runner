#include<stdio.h>

int main(void){
  int a=0,c=0,i=0;
  do{
  scanf("%d",&a);
  }while(a<0||a>999);
  
  c=a%10;
  if(c==2||c==4||c==5||c==7||c==9){
    printf("hon\n");}
  else if(c==0||c==1||c==6||c==8){
    printf("pon\n");}
  else if(c==3){
    printf("bon\n");}
  return 0;}
  