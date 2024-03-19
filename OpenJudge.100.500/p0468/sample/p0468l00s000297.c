#include <stdio.h>
#include <string.h>

int main(void) {
  char str[3];
  scanf("%s", str);
  if(strcmp(str, "ABC") == 0) {
    printf("ARC\n");
  } else if(strcmp(str, "ARC") == 0) {
    printf("ABC\n");
  } else {
    return 1;
  }
  return 0;
}