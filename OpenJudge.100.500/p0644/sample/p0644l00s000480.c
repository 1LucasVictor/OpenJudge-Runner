#include <stdio.h>

int main(void) {
  char s;
  int count = 0;

  scanf("%c", &s);

  if (s == '1') {
    ++count;
  }

  scanf("%c", &s);

  if (s == '1') {
    ++count;
  }

  scanf("%c", &s);

  if (s == '1') {
    ++count;
  }

  printf("%d\n", count);
  
  return 0;
}
