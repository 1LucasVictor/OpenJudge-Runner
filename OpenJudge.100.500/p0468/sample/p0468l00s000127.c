#include <stdio.h>

int main(void){
  char str[3];
  scanf("%s", str);
  if(str[1] == ('B'))
    printf("ARC\n");
  else if(str[1] == ('R'))
    printf("ABC\n");
  return 0;

}