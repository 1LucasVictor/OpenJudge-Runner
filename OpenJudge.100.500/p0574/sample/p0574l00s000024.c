#include<stdio.h>
int main(void){
  int S,a,b,c,d;
  scanf("%d",&S);
  a=S/1000;
  b=S/100-a*10;
  c=S/10-a*100-b*10;
  d=S%10;
  if(a==b){
    printf("Bad");
  }else if(b==c){
    printf("Bad");
  }else if(c==d){
    printf("Bad");
  }else{
    printf("Good");
  }

  return 0;
 }
      