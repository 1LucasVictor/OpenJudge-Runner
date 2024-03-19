#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
  float N;
  scanf("%f", &N);
  int ans = 0;
  N /= 2;
  ans = round(N);
  printf("%d", ans);
  return 0;
}