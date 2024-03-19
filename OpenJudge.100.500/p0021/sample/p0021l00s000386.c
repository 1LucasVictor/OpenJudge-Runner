#include<stdio.h>
int max(int a, int b) {
  if (a >= b) return a;
  else return b;
}
int main() {
  int i, j, s, N, n, k;
  int sum[5000];
  while (1) {
    n = 0;
    scanf("%d", &N);
    if(!N) break;
    for (i = 0; i < N; i ++) scanf("%d", &sum[i]);
    for (i = 0; i < N; i ++) {
      for (j = i; j < N; j ++) {
	k = 0;
	for (s = i; s <= j; s ++) k += sum[s];
	n = max(n, k);
      }
    }
    printf("%d\n", n);
  }
  return 0;
}