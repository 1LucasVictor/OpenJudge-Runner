#include <stdio.h>

int main()
{
  int a,b,sum;
  
  scanf("%d %d", &a, &b);
  sum = a * b;
  if (sum % 2 == 0) {
    printf("Even\n");
  } else {
    printf("Odd\n");
  }
  return 0;
}