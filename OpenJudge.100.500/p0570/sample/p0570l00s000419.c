#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
  int A, B, K;
  int i;
  scanf ("%d %d", &A, &B);
  
  
  if ((A+B)%2==0)  printf("%d", abs((A+B)/2));
  else             printf("IMPOSSIBLE");
  return 0;
}


