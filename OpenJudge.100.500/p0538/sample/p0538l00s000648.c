#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  int N, A, B, C, D, result;
  int i;
  scanf ("%d %d",  &A, &B);
  
  if ((A<10)&&(B<10)) result = A*B;
  else result = -1;
  
  
  printf("%d", result);
  return 0;
}


