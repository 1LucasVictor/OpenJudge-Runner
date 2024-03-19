#include <stdio.h>
#include <string.h>

int main(void){
  char s[3];
  scanf("%s",s);
  if(strcmp(s,"ABC") == 0){
    printf("%s","ARC\n");
  }else if(strcmp(s,"ARC") == 0){
    printf("%s","ABC\n");
  }
  return 0;
}