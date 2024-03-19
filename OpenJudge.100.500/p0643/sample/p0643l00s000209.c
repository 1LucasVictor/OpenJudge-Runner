#include<stdio.h>

void main(void)
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  if((a*b)%2 == 0){
    printf("Even\n");
}else{
    printf("Odd\n");
  }
}
