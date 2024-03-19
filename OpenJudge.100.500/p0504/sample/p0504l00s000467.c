#include <stdio.h>

int main(int argc, char const *argv[]) {
  int h, a;
  scanf("%d %d\n", &h, &a);
  int o = h / a;
  if (h % a != 0) {
    o++;
  }
  printf("%d\n", o);
  return 0;
}
