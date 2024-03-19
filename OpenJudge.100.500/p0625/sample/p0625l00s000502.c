#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B;
  //入力
  scanf("%d%d", &A, &B );
  //判定
  if ( (A<= 8) && (B<= 8)) {
    printf("Yay!\n");
  } else {
    printf(":(\n");
  }
  return 0;
}