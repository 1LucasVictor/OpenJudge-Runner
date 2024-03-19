#include <stdio.h>
#include <math.h>
#include <string.h>



int main() {
  int a, b, flag = 0;

  scanf("%d %d", &a, &b);

  flag = a / b;

  if(a%b != 0)
  flag++;

  printf("%d\n", flag);
  return 0;
}
