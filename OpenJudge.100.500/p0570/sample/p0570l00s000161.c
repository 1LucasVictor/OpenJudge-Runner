#include <stdio.h>

int main() {
  int a,b,c,d,k;
  c = 0;
  d = 0;
  scanf("%d %d", &a, &b);
  for(int i = 0; i < 1000000000; i++) {
    c = a - i;
    d = b - i;
    if (c<0){
      c = -1 * c;
    }
    if (d<0) {
      d = -1 * d;
    }
    if (c == d) {
      k = i;
      printf("%d", k);
      return 0;
      break;
    }
  }
  printf("IMPOSSIBLE");
  return 0;
}