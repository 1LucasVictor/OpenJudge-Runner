#include <stdio.h>
#include <string.h>

int main(void) {
  char input[4];
  int count = 0;
  scanf("%s", input);
  for (int i=0; i < 3; i++) {
    if (input[i] == '1') count++;
  }
  printf("%d", count);
}