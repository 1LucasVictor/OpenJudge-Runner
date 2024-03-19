#include<stdio.h>

int main()
{
  int num;
  int h=0, m=0, s=0;
  int temp;
  scanf("%d", &num);

  s = num%60;
  num = num/60;
  m = num%60;
  num = num/60;
  h = num;

  printf("%d:%d:%d\n", h, m, s);
  return 0;
}
