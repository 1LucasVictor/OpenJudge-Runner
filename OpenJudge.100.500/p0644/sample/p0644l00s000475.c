#include <stdio.h>

int main(){
  char s[10];
  scanf("%s",s);
  printf("%d\n", (s[0]-'0')+(s[1]-'0')+(s[2]-'0'));
  return 0;
}