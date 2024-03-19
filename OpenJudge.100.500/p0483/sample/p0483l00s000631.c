#include <stdio.h>

int main(void) {
  int n;
  int bool = 0;
  scanf("%d", &n);
  for(int i = 100; i >= 1; i /= 10) {
    if(n / i == 7) {
      printf("Yes");
      bool = 1;
      break;
    } else {
      n %= i;
    }
  }
  if(bool == 0) {
    printf("No");
  }
  return 0;
}
