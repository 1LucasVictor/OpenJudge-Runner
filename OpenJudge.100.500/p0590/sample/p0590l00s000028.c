#include <stdio.h>
#include <stdlib.h>
#define ABS(x, y) ((x < y) ? y - x : x - y)

void solve(int *a, int n, int k) {
  int i, j, flag = 1;
  for(i = 0; i < n; ++i) {
    for(j = 0; j < n; ++j) {
      if(i == j) { continue; }
      if(ABS(a[i], a[j]) > k) { flag = 0; break; }
    }
  }
  if(flag == 1) { printf("Yay!\n"); }
  else { printf(":(\n"); }
}

int main(void)
{
  int i, k, n = 5;
  int *a = (int*)malloc(6*sizeof(int));
  for(i = 0; i < n; ++i) { scanf("%d", &a[i]); }
  scanf("%d", &k);
  solve(a, n, k);
  return 0;
}