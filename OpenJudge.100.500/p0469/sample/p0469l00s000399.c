#include <stdio.h>
 
int main(void) {
  int K;
  int A;
  int B;
  int C;
  scanf("%d", &K);
  scanf("%d", &A);
  scanf("%d", &B);
  for (int i = A; i <= B; i++) {
    if (i % K == 0) {
      printf("%s\n", "OK");
      return 0;
    }
  }
  printf("%s\n", "NG");
  return 0;
}