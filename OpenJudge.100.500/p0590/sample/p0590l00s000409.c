#include <stdio.h>

int main(int argc, char const *argv[]) {
  int array[10],k;

  for (int i = 0; i < 5; i++) {
    scanf("%d", &array[i]);
  }
  scanf("%d",&k);

  for (int i = 1; i < 5; i++) {
    if (array[i] - array[i-1] > k) {
      printf(":(\n");
      return 1;
    }
  }

  printf("Yay!\n");
  return 0;
}
