#include <stdio.h>

int main(void) {

  long n,m,k;
  scanf("%ld %ld %ld", &n, &m, &k);
  long a[n],b[m];
  for (long i = 0; i < n; i++) {
    scanf("%ld", &a[i]);
  }
  for (long i = 0; i < m; i++) {
    scanf("%ld", &b[i]);
  }
  long sum_a[n],sum_b[m];
  sum_a[0] = a[0];
  for (long i = 1; i < n; i++) {
    sum_a[i] = sum_a[i-1]+a[i];
  }
  sum_b[0] = b[0];
  for (long i = 1; i < m; i++) {
    sum_b[i] = sum_b[i-1]+b[i];
  }
  long time,read,cur = m-1;
  long max = 0;
  for (long i = 0; i < n; i++) {
    read = 0;
    time = sum_a[i];
    if (time > k) {
      break;
    }
    read = i+1;
    for (long j = cur; j >= 0; j--) {
      if (time+sum_b[j] > k) {
        cur = j;
      } else {
        read += j+1;
        break;
      }
    }
    if (read > max) {
      max = read;
    }
  }
  printf("%ld\n", max);

  return 0;
}