#include <stdio.h>
#include <string.h>

int main(void){

  char s[3];

  if(scanf("%s",s)==1){}
  if(!strcmp(s,"ABC")){
    printf("ARC\n");
  }else if(!strcmp(s,"ARC")){
    printf("ABC\n");
  }

  return 0;
}
