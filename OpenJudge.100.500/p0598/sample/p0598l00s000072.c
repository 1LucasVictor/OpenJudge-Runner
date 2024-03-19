#include<stdio.h>

int main(void){
  int a,b;
  scanf("%d%d",&a,&b);
  if(b%a==0){
  b=b+a;
  }else{
    b=b-a;
  }
  printf("%d",b);
  return 0;
}