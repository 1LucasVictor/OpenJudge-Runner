#include <stdio.h>

int main(int ac, char **av) {
  char buf[256];
  int n, i;
  unsigned long m;
  while(fgets(buf, 256, stdin) != NULL) {
    m = 100000L;
    sscanf(buf, "%d", &n);
    for(i = 0; i < n; i++) {
      m *= 1.05;
      m = ((m + 999)/1000) * 1000;
    }
    printf("%ld\n", m);
  }
  return 0;
}