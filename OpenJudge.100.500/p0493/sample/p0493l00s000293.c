#include <stdio.h>
int main(void)
{
  int mm;
  int hp=0;
  int f1=0;
  int f2=0;
  int i1,i2,i3;
  scanf("%d",&mm);
  i1=mm/500;
  i2=mm%500;
  hp=i1*1000;
  i3=i2/5;
  hp=hp+(i3*5);
  printf("%d",hp);
  return 0;
}
