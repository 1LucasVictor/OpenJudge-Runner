#include <stdio.h>

int main() {
  int number_a, number_b;
  scanf("%d %d", &number_a, &number_b);
  if((number_a * number_b) % 2 == 0) {
    printf("Even\n");
  } else {
    printf("Odd\n");
  }
  return 0;
}
