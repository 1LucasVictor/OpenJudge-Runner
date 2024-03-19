#include <stdio.h>

int main(void)
{
  int a;
  scanf("%d",&a);
  if (a%10 == 3) printf("bon");
  else if (a%10 == 0 || a%10 == 1 || a%10 == 6 || a%10 == 8) printf("pon");
  else printf("hon");
  printf("\n");
  return 0;
}