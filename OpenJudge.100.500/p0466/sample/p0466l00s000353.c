#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char s[11], t[12];
  int i = 0;
  scanf("%s", s);
  scanf("%s", t);
  while (s[i] != '\0') {
    if (s[i] != t[i]) {
      printf("No\n");
      exit(0);
    }
    i++;
  }
  printf("Yes\n");
  return 0;
}
