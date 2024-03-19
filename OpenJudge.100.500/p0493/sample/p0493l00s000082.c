#include <stdio.h>

int main(void) {
  int x;
  int coins[6] = {500, 5, 100, 50, 10, 1};
  int after[6];
  int point = 0;
  scanf("%d", &x);
  for(int i = 0; i < 6; i++) {
    after[i] = x / coins[i];
    x %= coins[i];
    if(i == 0) {
      point += after[i] * 1000;
    } else if(i == 1) {
      point += after[i] * 5;
    }
  }
  printf("%d", point);
  return 0;
}
