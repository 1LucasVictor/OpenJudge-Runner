#include <stdio.h>

int main() {
  int temp, min = 123, max = 0, i;
  for(i = 0; i < 5; i++) {
    scanf("%d", &temp);
    min = (min > temp)? temp : min;
    max = (max < temp)? temp : max;
  }
  scanf("%d", &temp);
  (max - min <= temp)? printf("Yay!\n") : printf(":(\n");

  return 0;
}
