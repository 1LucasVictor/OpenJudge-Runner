#include <stdio.h>

int main(void) {
  int s = 0;
  char c;

  for (;;) {
    c = getchar();

    if (c == '\n' || c == '0') {
      printf("%d\n", s);
      s = 0;

      if (c == '0') {
        break;
      }

      continue;
    }

    s += c - '0';
  }

  return 0;
}