#include <stdio.h>

int main(void) {
  char str[4];
  scanf("%s", str);
  if(str[1] == 'B') puts("ARC");
  else puts("ABC");
  
  return 0;
}