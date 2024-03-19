#include <stdio.h>
#define MAX 21

int main()
{
  char string[MAX];
  int i, len = 0;

  scanf("%s", string);

  for (i = 0; string[i] != '\0'; i++)
    ;
  
  for (; i-1 >= 0; i--)
    putchar(string[i-1]);
  putchar('\n');

  return 0;
}