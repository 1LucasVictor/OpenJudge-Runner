#include <stdio.h>
#include <string.h>

int main (void)
{
  char s[4];
  
  scanf("%s", s);
  
  if (!strcmp(s, "AAA") || !strcmp(s, "BBB")) {
    puts("No");
  } else {
    puts("Yes");
  }
  
  return 0;
}