#include <stdio.h>

int main()
{

  int x, y, r;

  scanf("%d%d", &x, &y);

  while(r != 0){
    r = x % y;
    x = y;
    y = r;
  }

  printf("%d", x);
  printf("\n");

  return 0;
}