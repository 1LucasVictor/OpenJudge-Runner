#include <stdio.h>

int main(void) {
  int A, B, T;
  scanf("%d %d %d", &A, &B, &T);
  int X = 0;
  for(int i = T; i >= 0; i -= A) {
    if(i >= A)
      X += B;
  }
  printf("%d\n", X);
  return 0;
}
