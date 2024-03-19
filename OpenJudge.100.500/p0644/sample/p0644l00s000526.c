#include<stdio.h>

int main(void){
  int p,s1,s2,s3,x;
  scanf("%d",&p);
  s1=p/100;
  s2=p/10-p/100;
  s3=p%10;
  x=0;
  if(s1==1){
    x=x+1;
  }
  if(s2==1){
    x=x+1;
  }  
  if(s3==1){
    x=x+1;
  }
  printf("%d",x);
}