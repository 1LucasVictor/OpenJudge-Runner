#include <stdio.h>

int main() {
  char str[5], prev = 0;
  int i;
  scanf("%s", str);
  for (i = 0; i < 4; i++) {
    if (prev == str[i]) {
      printf("Bad\n");
      return 0;
    }
    prev = str[i];
  }
  printf("Good\n");
  return 0;
}
