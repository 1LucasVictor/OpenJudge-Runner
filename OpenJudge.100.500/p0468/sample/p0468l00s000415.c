#include "stdio.h"
#include "string.h"

int main()
{
  char c[3];
  fgets (c,3,stdin);
  if (c[1] == 'B')
    printf ("ARC\n");
  else
    printf ("ABC\n");
  return 0;
}
