#include <stdio.h>

int asc(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main() {
  int number_of_char[3];
  scanf("%d %d %d", &number_of_char[0], &number_of_char[1], &number_of_char[2]);
  qsort(number_of_char, 3, sizeof(int), asc);
  if(number_of_char[0] == 5 && number_of_char[1] == 5 && number_of_char[2] == 7) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
