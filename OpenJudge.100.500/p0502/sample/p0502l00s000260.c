#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    if (a % 2 == 0) {
      if (a % 3 != 0 && a % 5 != 0) {
        printf("DENIED\n");
        return 0;
      }
    }
  }
  printf("APPROVED\n");
  return EXIT_SUCCESS;
}
