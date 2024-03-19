#include <stdio.h>
#include <stdlib.h>

int main(){
  char *str;
  str = (char *)malloc(sizeof(char)*3);
  scanf("%s", str);
  
  if(str=="ARC")  printf("ABC");
  else printf("ARC");
  
  return 0;
}
