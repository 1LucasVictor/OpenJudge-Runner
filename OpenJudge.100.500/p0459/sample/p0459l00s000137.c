#include<stdio.h>

int main(void)
{
  int x, y;
  scanf("%d %d", &x, &y);
  if(y % 2 == 0)
    if(4 * x > y) printf("Yes");
    else if(2 * x > y) printf("Yes");
  else printf("No");
  return 0;
}