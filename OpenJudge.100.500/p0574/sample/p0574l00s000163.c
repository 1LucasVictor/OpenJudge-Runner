#include <stdio.h>
#include <stdlib.h>


void main() {
  char code[5];
  int i;
  scanf ("%s", code);
  
  for (i=1;i<4;i++) {
    if (code[i]==code[i-1]) {
      printf ("Bad");
      return;
    }
  }
  printf("Good");
  return;
}
 