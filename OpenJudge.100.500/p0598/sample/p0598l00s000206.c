#include<stdio.h>
int main(void){
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  if(b%a==0){
    printf("%d",a+b);
  }
  else{
    printf("%d",b-a);
  }
  return (0);
}
