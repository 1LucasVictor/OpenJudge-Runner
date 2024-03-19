#include <stdio.h>
int main() {
  int i, n, num, count, count2 = 0;

  // printf("何行にしますか？\n");
  scanf("%d", &n);

  int array[n];

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0; i < n; i++) {
    count = 0;
    for (num = 2; num <= array[i]; num++) {
      if (array[i] % num == 0)
        count++;
    }
    if (count == 1)
      count2++;
  }

  // printf("素数の数は%d個です\n", count2);
  printf("%d\n", count2);
  return 0;
}
