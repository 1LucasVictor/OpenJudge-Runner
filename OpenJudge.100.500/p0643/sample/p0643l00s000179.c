#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;
  if (scanf("%d %d", &a, &b) < 0) {
    exit(1);
  }
  int product = a * b;
  if (product % 2 == 0) {
	printf("Even");
  } else {
    printf("Odd");
  }
}