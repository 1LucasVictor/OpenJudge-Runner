#include <stdio.h>

int main(void) {
  int t, i, a, b, c, d;
  scanf("%d", &t);

  for(i = 0; i < t; i++) {
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b && a >= c) {
      d = a * a - b * b - c * c;
    } else if(b >= c && b >= a) {
      d = b * b - c * c - a * a;
    } else if(c >= a && c >= b) {
      d = c * c - a * a - b * b;
    }
    if(d == 0) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}