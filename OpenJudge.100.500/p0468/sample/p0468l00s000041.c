#include <stdio.h>
#include <string.h>

int main(void) {
  char s[4];
  scanf("%s", s);
  if(strcmp(s, "ABC")) {
    printf("ABC");
  } else if(strcmp(s, "ARC")) {
    printf("ARC");
  }
  return 0;
}
