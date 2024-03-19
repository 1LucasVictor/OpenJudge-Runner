#include <stdio.h>

#define BAGGAGE 131072

int main(void){
  int i, n, k, w[BAGGAGE] = {0}, P;
  double W = 0;
  
  scanf("%d %d", &n, &k);
  for (i = 0; i < n; i++) {
    scanf("%d", &w[i]);
    W += w[i];
  }
  // calculate average and round up
  P = (int)(W / k + 0.9);
  for (i = 0; i < n; i++) {
    if (P < w[i])
      P = w[i];
  }
  printf("%d\n", P);

  return 0;
}