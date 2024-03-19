#include <stdio.h>
#include <ctype.h>

int main(void) {
  int i;
  char input;
  for (i = 0; i < 1200; i++) {
    scanf("%c", &input);
    if (isupper(input))
      printf("%c", tolower(input));
    else if (islower(input))
      printf("%c", toupper(input));
    else
      printf("%c", input);
    if (input == '\n')
      break;
  }
  return 0;
}

