#include <stdio.h>
#include <string.h>

int main(void) {
  char text[1200];
  int i = 0;
  int length = 0;

  scanf("%[^\n]", text);

  length = strlen(text);

  for (i = 0; i < length; i++) {
    if (text[i] >= 'a' && text[i] <= 'z') {
      text[i] = text[i] - 'a' + 'A';
    } else if (text[i] >= 'A' && text[i] <= 'Z') {
      text[i] = text[i] - 'A' + 'a';
    }
  }

  printf("%s\n", text);

  return 0;
}

