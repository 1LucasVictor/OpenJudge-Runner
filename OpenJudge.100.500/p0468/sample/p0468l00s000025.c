#include <stdio.h>
#include <string.h>

int main(void)
{
  char *s;

  scanf("%s", s);

  if (strcmp(s, "ABC") == 0)
    printf("ARC\n");
  else 
    printf("ABC\n");

  return 0;
}