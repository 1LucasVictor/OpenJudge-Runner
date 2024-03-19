#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  int A, B, C, result;
  int i;
  scanf ("%d %d %d", &A, &B, &C);
  
  result = (A-B>C) ? 0 : C-(A-B);
  
  
  printf("%d", result);
  return 0;
}


