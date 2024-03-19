#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[4];
  
  scanf("%s", s);
  
  if (strcmp(s, "AAA") && strcmp(s, "BBB"))
    puts("Yes");
  else
    puts("No");
  
  return 0;
}