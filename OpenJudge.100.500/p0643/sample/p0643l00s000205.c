#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%s", (a * b) % 2 == 0 ? "Even" : "Odd");
  return 0;
}