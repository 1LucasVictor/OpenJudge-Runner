#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  int a, b, c, k, nokori;
  scanf("%d %d %d %d", &a, &b, &c, &k);
  if (k <= a) {
    printf("%d\n", k);
    exit(0);
  } else {  // k>aの時 bも使うか判定
    nokori = k - a;
    if (nokori <= b) {  // bも使うならaだけ
      printf("%d\n", a);
    } else {  // cも使うなら
      nokori = nokori - b;
      printf("%d\n", a - nokori);
      exit(0);
    }
  }
  return 0;
}