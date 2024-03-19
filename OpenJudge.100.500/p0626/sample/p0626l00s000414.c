#include<stdio.h>

int main(void)
{
  int a,b,c = 1;

  scanf("%d",&a);
  scanf("%d",&b);

  for(int i = 0;i < a;i++){
    c *= 100;
  }

  c = c * b;

  printf("%d",c);

  return 0;

}