#include<stdio.h>
long long int max(long long int a, long long int b) {
  if (a >= b) return a;
  else return b;
}
int main() {
  int i, j, N;
  long long int n, k;
  int sum[5000];
  while (1) {
    n = 0;
    scanf("%d", &N);
    if(!N) break;
    for (i = 0; i < N; i ++) scanf("%d", &sum[i]);
    for (i = 0; i < N; i ++) {
      k = 0;
      for (j = i; j < N; j ++) {
	k += sum[j];
	n = max(n, k);
      }
    }
    printf("%lld\n", n);
  }
  return 0;
}