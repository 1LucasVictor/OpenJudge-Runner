#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  int i;
  char S[3+2];
  long cnt = 0;
  scanf("%s", S);
  if (S[1] == 'B') {
    printf("ARC\n");
  }
  else{
    printf("ABC\n");
  }
  return 0;
}
