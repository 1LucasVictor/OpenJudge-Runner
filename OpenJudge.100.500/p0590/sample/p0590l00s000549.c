#include <stdio.h>

int main(void) {
  int X[5], k;
  for(int i = 0; i < 5; i++) {
    scanf("%d", &X[i]);
  }
  scanf("%d", &k);

  for(int i = 0; i < 5-1; i++) {
    for(int j = i; j < 5; j++) {
      if((X[j] - X[i]) > k) {
	printf(":(\n");
	return 0;
      }
    }
  }
  printf("Yay!\n");
  return 0;
}
