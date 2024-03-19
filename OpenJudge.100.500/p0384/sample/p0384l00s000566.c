#include <stdio.h>
#include <ctype.h>

int main(void) {
  char ch;

  while ((ch = getchar()) != EOF) {
    if (ch >= 65 && ch <= 90)
      ch = tolower(ch);
    else if (ch >= 97 && ch <= 122)
      ch = toupper(ch);

    putchar(ch);
  }
  

  
  return 0;
}
