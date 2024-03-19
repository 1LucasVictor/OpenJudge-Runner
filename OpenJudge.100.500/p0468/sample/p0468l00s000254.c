#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
  char c[10];
  scanf("%s", c);
  if (c[1] == 'R') printf("ABC");
  else             printf("ARC");
  return 0;
}