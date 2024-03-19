#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[15],t[15];
  char cmpt[15];
  int lens,lent;
  scanf("%s", s);
  scanf("%s", t);
  lens = strlen(s);
  lent = strlen(t);
  strncpy(cmpt,t,lent-1);
  cmpt[lent-1] = '\0';
  if(strcmp(s,cmpt) == 0){
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
