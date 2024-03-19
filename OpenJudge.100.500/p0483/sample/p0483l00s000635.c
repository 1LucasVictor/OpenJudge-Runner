#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main(void)
{
long N;

  scanf("%ld", &N);
  if (N%10 == 7) {
    printf("Yes\n");
  } else if ((N/10)%10 == 7) {
    printf("Yes\n");
  } else if ((N/100) == 7) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
    
  return 0;
}
