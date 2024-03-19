#include <stdio.h>

int main(int ac, char **av) {
  char buf[256];
  int a, b, c, d, n, count;
  while(fgets(buf, 256, stdin) != NULL) {
    sscanf(buf, "%d", &n);
    count = 0;
    for(a = 0; a < 10; a++) {
      for(b = 0; b < 10; b++) {
        for(c = 0; c < 10; c++) {
          for(d = 0; d < 10; d++) {
            if (a + b + c + d == n) {
              count++;
            }
          }
        }
      }
    }
    printf("%d\n", count);
  }
  return 0;
}