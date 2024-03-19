#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b;
  scanf("%d%d", &a, &b);
  puts(a * b % 2 ? "Odd" : "Even");
  return 0;
}