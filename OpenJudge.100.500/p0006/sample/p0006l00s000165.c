#include<stdio.h>
int main() {
  unsigned long s = 100000;
  int n, i;
  scanf("%d", &n);
  for (i = 0; i < n; i ++) {
    s += s / 20;
    if (s % 1000 != 0) s = (s / 1000 + 1) * 1000;
  }
  printf("%lu\n", s);
  return 0;
}