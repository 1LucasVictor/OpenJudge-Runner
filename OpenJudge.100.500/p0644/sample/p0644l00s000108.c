#include "stdio.h"
int main(void){
  char s[3];
  int i = 0;
  scanf("%s", s);

  if(s[0] == '1'){
    i++;
  }
  if(s[1] == '1'){
    i++;
  }
  if(s[2] == '1'){
    i++;
  }

  printf("%d\n", i);

  return 0;
}