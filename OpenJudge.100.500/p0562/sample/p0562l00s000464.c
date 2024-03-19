#include <stdio.h>
#include <string.h>

int main(void) {
  int A, B, kuti;
  int answer=1;
  scanf("%d %d", &A, &B);
  if (B==1) { //タップが不要な場合
    printf("0\n");
  } else {
    kuti = A;
    while (kuti<B) {
      kuti = kuti + A - 1;
      answer++;
    }
    printf("%d\n", answer);
  }
  return 0;
}
