#include <stdio.h>

int main() {
  int number_x, number_a, number_b;
  scanf("%d %d %d", &number_x, &number_a, &number_b);
  if(number_a >= number_b) {
    printf("delicious\n");
  } else if(number_a + number_x >= number_b) {
    printf("safe\n");
  } else {
    printf("dangerous\n");
  }
  return 0;
}
