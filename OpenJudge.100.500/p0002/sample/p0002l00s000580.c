#include <stdio.h>

int main(void) {
  int  N;
  int a, b, c;
  int t;

  scanf("%d", &N);

  while (N--) {
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) {
      t = a;
      a = b;
      b = t;
    }
    if (b > c) {
      t = b;
      b = c;
      c = t;
    }
    if (a > b) {
      t = a;
      a = b;
      b = t;
    }

    if(a * a + b * b == c * c)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}