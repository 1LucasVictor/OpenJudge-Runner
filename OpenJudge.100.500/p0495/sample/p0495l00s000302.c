#include <stdio.h>

int main()
{
  char s[3];
  for (int i = 0; i < 3; i++) {
    scanf("%c", &s[i]);
  } 
  if (s[1] == s[2] && s[2] == s[3]) {
    puts("No");
  } else {
    puts("Yes");
  }
  return 0;
}
