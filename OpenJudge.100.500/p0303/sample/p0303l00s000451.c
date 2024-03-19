

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
  int n, k, i;
  int *w;
  int max = 0, sum = 0;
  int P_st, P_ed, P_center, k_st, k_ed, k_center, p[3];
 
  scanf("%d", &n);
  scanf("%d", &k);
  w = (int *)malloc(sizeof(int) * n);
  for (i = 0; i < n; i++) {
    scanf("%d", &w[i]);
    sum += w[i];
    if (max < w[i]) max = w[i];
  }
 
  P_st = max - 1;
  P_ed = sum;
  p[0] = 0;
  p[1] = 0;
  k_st = 1;
  k_ed = 1;
  for (i = 0; i < n; i++) {
    if (p[1] + w[i] > P_ed) {
      k_ed++;
      p[1] = 0;
    }
    p[1] += w[i];
  }
  k_st = 100001;
 
  while (1) {
    P_center = (P_st + P_ed) / 2;
    p[2] = 0;
    k_center = 1;
    for (i = 0; i < n; i++) {
      if (p[2] + w[i] > P_center) {
    if (p[2] == 0) {
      k_center = 100001;
      break;
    }
    k_center++;
    p[2] = 0;
      }
      p[2] += w[i];
    }
    if (k_center > k) {
      P_st = P_center;
      k_st = k_center;
    } else {
      P_ed = P_center;
      k_ed = k_center;
    }
    if (P_ed - P_st <= 1) break;
  }
 
  printf("%d\n", P_ed);
 
  free(w);
 
  return 0;
}
 
  