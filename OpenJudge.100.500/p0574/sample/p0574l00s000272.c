#include <stdio.h>
int main()
 {
  char s[100];
  scanf("%[^\n]",s);
  if (s[0] == s[2] && s[1] == s[3] && s[0] != s[1])
  {
    printf("Good\n");
  }
  else
 {
    printf("Bad\n");
 }
  return 0;
}
