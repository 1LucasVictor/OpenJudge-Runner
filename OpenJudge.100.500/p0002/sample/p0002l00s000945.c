#include <stdio.h>

int main(void) {
  int  N;
  int a, b, c;

  scanf("%d", &N);

  while (N--) {
    scanf("%d %d %d", &a, &b, &c);
    if(a * a + b * b == c * c)
      printf("YES\n");
    else
      printf("NO\n");
  }

  return 0;
}