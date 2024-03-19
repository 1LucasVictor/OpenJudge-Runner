#include <stdio.h>
#include <string.h>
int main(void){
  char s[11], t[12];
  scanf("%s""%s", s, t);
  strstr(t,s) ? printf("Yes") : printf("No");
  return 0;
}