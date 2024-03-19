#include <stdio.h>
#include <string.h>

int main(void) {
  char enter[3];

  scanf("%s", enter);

  if (strcmp(enter, "ABC") == 0) {
    printf("ARC\n");
  } else {
    printf("ABC\n");
  }

  return 0;
}
