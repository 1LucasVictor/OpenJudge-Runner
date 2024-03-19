#include <stdio.h>
#include <string.h>

int main(){
  char s[11], t[11];
  scanf(" %s\n %s", s, t);
  int x = strlen(s);
  t[x]='\0';
  if(strcmp(s,t) == 0) {
     printf("Yes\n");
  }else {
     printf("No\n");
  }
  return 0;
}
