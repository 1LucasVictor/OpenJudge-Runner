#include <stdio.h>
int main(void) {
  int X;
  int Y;

  scanf("%d", &X);
  scanf("%d", &Y);

  int kame = Y - 2 * X;
  int turu = 4 * X - Y;
  if (kame % 2 == 0 && turu % 2 == 0 && kame >= 0 && turu >= 0) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}