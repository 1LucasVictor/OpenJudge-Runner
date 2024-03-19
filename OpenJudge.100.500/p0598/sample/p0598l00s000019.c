#include <stdio.h>

int main() {
  int A, B, ans;

  scanf("%d %d", &A, &B);
  if(B % A == 0) {
    ans = A + B;
  } else {
    ans = B - A;
  }
  printf("%d\n", ans);
  return 0;
}
