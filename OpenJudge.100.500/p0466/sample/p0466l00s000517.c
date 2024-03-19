#include <stdio.h>
#include <string.h>

int main() {
  char s[11], t[12];
  scanf("%s\n%s", s, t);
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] != t[i]) 
    {
      printf("No\n");
      return 0;
    }
  }
  if (strlen(s) + 1 == strlen(t))
    printf("Yes\n");
  else
    printf("No\n");

  return 0;
}