#include <stdio.h>
#include <string.h>

int main(){
  char s[10];
  scanf("%s", s);
  int a = strcmp(s, "ABC");
  if(a == 0) puts("ARC");
  else puts("ABC");
  return 0;

}