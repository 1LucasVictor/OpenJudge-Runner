#include<stdio.h>
int main(void){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  if(b%2==0){
    printf("%d",a+b);
  }
  else{
    printf("%d",a-b);
  }
  return (0);
}
