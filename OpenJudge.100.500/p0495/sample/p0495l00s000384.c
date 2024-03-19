#include <stdio.h>

int main(void){
  char s[32];
  scanf("%s", s);
  if(s[0] == s[1] && s[0] == s[2]) puts("No");
  else puts("Yes");
}