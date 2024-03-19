#include <stdio.h>

int main(void)
{
  char s[4];

  scanf("%s", s);
  
  if (s[1] == 'R') printf("ABC");
  else if (s[1] == 'B') printf("ARC");

  return 0;
}