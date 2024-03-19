#include <stdio.h>
#include <string.h>

int main(void) {
  char s[11] = {0};
  char t[11] = {0};
  scanf("%s", s);
  scanf("%s", t);
  int len = strlen(s);
  int i;
  for(i = 0;i < len;i++) {
    if(s[i] != t[i]) break;
  }
  puts(i == len ? "Yes" : "No");
  
  return 0;
}