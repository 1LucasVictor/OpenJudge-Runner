#include <stdio.h>

int main()
{
  int cnt;
  int A,B;
  int result;

  cnt = scanf("%d %d", &A, &B);

  if((B%A) == 0) {
    result = A + B;
  } else {
    result = B - A;
  }
  
  printf("%d", result);

  return 0;
} 