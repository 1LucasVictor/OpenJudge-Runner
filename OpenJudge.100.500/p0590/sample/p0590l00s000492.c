#include <stdio.h>

int main (int argc, char* argv[]) {
  int a[5], k;
  for (int i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
  }
  scanf("%d", &k);

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == j) continue;
      if (a[j] - a[i] > k) {
	printf(":(\n");
	return 0;
      }
    }
  }

  printf("Yay!\n");
  return 0;
}
