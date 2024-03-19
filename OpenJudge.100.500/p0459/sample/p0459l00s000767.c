#include <stdio.h>

int main() {
  int x, y, i;
  scanf("%d %d", &x, &y);
  
  for (i = 0; i < x; i++) {
    if ((i * 2 + (x - i) * 4) == y) {
      printf("Yes");
      return (0);
    }
  }
  
  printf("No");
  return (0);
}