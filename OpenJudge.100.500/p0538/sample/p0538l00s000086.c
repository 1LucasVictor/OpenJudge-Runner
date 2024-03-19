#include<stdio.h>

int main(void)
{
  int a;
  int b;
  scanf("%d",&a);
  scanf("%d",&b);
  
  if(a > 9 || b > 9){
    printf("%d",-1);
  }
  else{
    printf("%d",a * b);
  }
}