#include <stdio.h>
#include <string.h>

int main(void) {
  char cont[3];
  scanf("%s", cont);
  if (strcmp(cont, "ABC") == 0)
    printf("ARC\n");
  else
    printf("ABC\n");
  return 0;
}