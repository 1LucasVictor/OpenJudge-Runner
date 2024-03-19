#include <stdio.h>

int main(void) {
  int turu = 2;
  int tart = 4;
  int x, y;
  int judge = 0;
  scanf("%d%d", &x, &y);
  for(int i = 1; i <= x; i++) {
    if(turu * i + tart * (x-i) == y) {
      judge = 1;
    }
  }
  if(judge == 1) {
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}
