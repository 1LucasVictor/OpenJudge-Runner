#include <stdio.h>

int main(void) {
  char c;

  while ((c = getchar()) != EOF) {
    if (c >= 'A' && c <= 'Z') {
      putchar(c - 'A' + 'a');
    } else if (c >= 'a' && c <= 'z') {
      putchar(c - 'a' + 'A');
    } else {
      putchar(c);
    }
  }

  return 0;
}