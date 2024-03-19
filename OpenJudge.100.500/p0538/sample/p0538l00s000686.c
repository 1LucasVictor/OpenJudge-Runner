#include <stdio.h>

int main(void)
{
  unsigned int a,b;
  scanf("%u%u", &a, &b);
  if( a > 9 || b > 9 ){
    printf("-1\n");
  } else {
    printf("%u\n", a*b);
  }
  return 0;
}
