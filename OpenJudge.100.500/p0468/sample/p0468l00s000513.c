#include <stdio.h>
#include <string.h>

int main(void){
  char* s;
  scanf("%s", s);
  char* t = "ABC";
  int a = strcmp(s, t);
  if(a == 0) puts("ARC");
  else puts("ABC");
  return 0;

}