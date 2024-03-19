#include "stdio.h"
#include "string.h"
int main(void){
  char s[100];
  int i;
  int count = 0;
  scanf("%s", s);

  for(i=0; i < 3; i++){
    if('1' == s[i]){
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}

