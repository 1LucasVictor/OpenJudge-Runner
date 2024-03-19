#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
  int ret = 0;
  int next = 0;
  char str[4];
  char contest[][4] = {"ABC","ARC"};
  
  /* input S */
  ret = scanf("%s", str);
  
  /* Jude */
  if (strcmp(str, contest[0]) == 0) {
    next = 1;
  } else if (strcmp(str, contest[1]) == 0) {
    next = 0;
  } else {
    return -1;
  }
  
  /* output contest */
  printf("%s", contest[next]);
  
  return 0;
}