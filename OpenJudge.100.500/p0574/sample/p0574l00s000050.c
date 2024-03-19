#include <stdio.h>
#include <stdlib.h>


int main() {
  char code[5];
  int i;
  scanf ("%s", code);
  
  for (i=1;i<4;i++) {
    if (code[i]==code[i-1]) {
      printf ("Bad");
      return 1;
    }
  }
  printf("Good");
  return 1;
}
 