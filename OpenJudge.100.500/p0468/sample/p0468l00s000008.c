#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[3];
  char str2[] = "ARC";
  int n;
  scanf("%s", str1);
  n = strcmp(str1, str2);
  if(n == 0) {printf("ABC\n");}
  else{printf("ARC\n");}
}