#include<stdio.h>

int main(void)
{
  int a,b;
  //数値の入力
  scanf("%d %d",&a,&b);
  //判定
  if(a*b%2==0)
  {
    printf("Even");
  }
  else
  {
    printf("Odd");
  }
  return 0;
}
