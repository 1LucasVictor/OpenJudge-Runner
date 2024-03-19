#include<stdio.h>

int main(void){
int a,b;
  
  //do{
    scanf("%d %d",&a,&b);
  //}while(a>=1&&a<=20&&b>=1&&b<=20);
  
  if(b%a==0){
    printf("%d",a+b);
  }
  else{
  printf("%d",b-a);
  }
  
  return 0;
}