#include <stdio.h>
 
int main(void) {
  int s = 0;
  char c;
 
  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      s += c - '0';
      continue;
    }

    if (s == 0) {
      break;
    }

    printf("%d\n", s);
    s = 0;
  }
 
  return 0;
}