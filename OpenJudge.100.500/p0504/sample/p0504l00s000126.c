#include <stdio.h>

int main() {
  int h, a;
  char buf[1024];
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d %d\n", &h, &a);
  printf("%d", h/a+1*(h%a!=0));
  return 0;
}
