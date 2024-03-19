#include <stdio.h>
#define MAX_N (100000)
#define rep(i, n) for(int i = 0; i < n; i++)

int main(void) {
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);

  C -= (A - B);
  if(C < 0) C = 0;
  printf("%d\n", C);
  return 0;
}
