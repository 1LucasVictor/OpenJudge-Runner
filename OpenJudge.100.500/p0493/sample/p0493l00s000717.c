#include <stdio.h>
int main(void)
{
  int coin;
  scanf("%d",&coin);
  int c500=coin/500;
  int k5=coin%500;
  int c5=k5/5;
  printf("%d\n",c500*1000+c5*5);
  return 0;
}