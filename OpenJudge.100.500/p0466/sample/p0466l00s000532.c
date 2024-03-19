#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[10],t[10];
  char cmpt[10];
  int lens,lent;
  scanf("%s", s);
  scanf("%s", t);
  lens = strlen(s);
  lent = strlen(t);
  strncpy(cmpt,t,lent-1);
  if(strcmp(s,cmpt) == 0){
    if(lent-lens == 1){
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  } else {
    printf("No\n");
  }
  return 0;
}
