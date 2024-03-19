#include <stdio.h>

int
main(void)
{
  int count, i;
  scanf("%d", &count);
  int data[count];

  for (i = 0; i < count; i++) {
    scanf("%d", &data[i]);
  }

  for (i = count - 1; i >= 0; i--) {
    if (i == 0) {
      printf("%d", data[i]);
    } else {
      printf("%d ", data[i]);
    }
  }
  printf("\n");
  return 0;
}