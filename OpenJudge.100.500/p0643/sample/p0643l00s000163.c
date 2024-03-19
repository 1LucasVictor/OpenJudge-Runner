#include<stdio.h>
int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  puts(a * b % 2 == 0 ? "Even" : "Odd");
  return 0;
}