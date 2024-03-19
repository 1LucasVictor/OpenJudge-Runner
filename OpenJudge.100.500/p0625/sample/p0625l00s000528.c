#include <stdio.h>

int main(int argc, char const *argv[]) {
  int A, B;
  scanf("%d%d", &A, &B);
  if (A > 8 || B > 8) {
    printf(":(");
  } else {
    printf("Yay!");
  }
  return 0;
}