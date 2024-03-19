#include <stdio.h>

int main(void) {
  int page = 0;
  
  fscanf(stdin, "%d", &page);
  printf("%d\n", (page+1)/2);
  
  return 0;
}