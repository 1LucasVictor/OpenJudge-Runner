#include <stdio.h>
int main(void)
{
  int a, b, c;
  
  scanf("%d %d", &a, &b);
  if (a <= 9 && b <= 9) {
    c = a * b;
    printf("%d", c);
  } else {
    c = -1;
    printf("%d", c);
  }
  return 0;
}
