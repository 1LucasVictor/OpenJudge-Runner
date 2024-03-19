#include <stdio.h>
#include <string.h>

int main()
{
  char s[3];
  scanf("%c%c%c", &s[0], &s[1], &s[2]);
  int result = strcmp(s, "AAA");
  int result1 = strcmp(s, "BBB");
  if (!(result) || !(result1)) {
    	puts("No");
  } else {
    	puts("Yes");
  }
  return 0;
}