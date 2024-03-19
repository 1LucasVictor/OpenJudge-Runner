#include<stdio.h>
int main(void){
  int a;
  int flg=0;
  scanf("%d",&a);
  if(a%10==7){
    flg=1;
  }
  a=a/10;
  if(a%10==7){
    flg=1;
  }
  a=a/100;
  if(a==7){
    flg=1;
  }
  
  if(flg==1){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}