#include <stdio.h>
#include <string.h>
int main(){
  char s[20], t[20];
  scanf("%s\n%s", s, t);
  int len = strlen(s);
  t[len] = '\0';
  int a = strcmp(s, t);
  if(a == 0) puts("Yes");
  else puts("No");
  return 0;
}