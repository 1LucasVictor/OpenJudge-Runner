#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  char s[4];

  scanf("%s",s);

  if(s[1]=='R') printf("ABC\n");
  else printf("ARC\n");

  return 0;
}