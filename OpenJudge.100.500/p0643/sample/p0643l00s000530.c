#include<stdio.h>

int main(void)
{
  int a,b,seki;

  scanf("%d",&a);
  scanf("%d",&b);

  seki = a * b;

  if(seki % 2 == 0){
    printf("Even");
  }
  else{
    printf("odd");
  }

  return 0;

}
