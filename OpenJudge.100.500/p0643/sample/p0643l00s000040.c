#include <stdio.h>

int main()
{
  int a, b;
  int mul;
  
  scanf("%d %d", &a, &b);
  if ((a <= 0 || a > 10000) ||
     (b <= 0 || b > 10000)) {
    return -1;
  }
  
  mul = a * b;
  
  if (mul % 2 == 0) {
    puts("Even");
  } else {
    puts("Odd");
  }
  
  return 0;
}