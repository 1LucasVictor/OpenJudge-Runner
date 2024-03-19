#include<stdio.h>

int main(void) {

  int d = 0;
  int n = 0;
  int k;
  int ans = 1;
  
  scanf("%d %d", &d, &n);

  for (k = 0; k < d; k++) {
    ans *= 100;
  }

  ans *= n;

  printf("%d\n", ans);

  return 0;
}