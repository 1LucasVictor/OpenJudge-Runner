#include <stdio.h>
#include <string.h>

int main(void) {
  int n,m;
  long long k;
  long long a[200000];
  long long b[200000];
  long long tmp;
  long long max_a, max_b;
  int ret;

  max_a = 0;
  max_b = 0;
  ret = scanf("%d %d %lld", &n, &m, &k);
  if (ret == 0)
    return 0;
  a[0] = 0;
  for (int i = 1; i <= n; i++) {
    ret = scanf("%lld", &tmp);
    if (ret == 0)
      return 0;
    a[i] = a[i-1] + tmp;
    if (a[i] > k && !max_a)
      max_a = i-1;
  }
  b[0] = 0;
  for (int i = 1; i <= m; i++) {
    ret = scanf("%lld", &tmp);
    if (ret == 0)
      return 0;
    b[i] = b[i-1] + tmp;
    if (b[i] > k && !max_b)
      max_b = i-1;
  }


  long long count = 0;
  int s, t;
  t = max_b;
  for (s = 0; s <= max_a ; s++) {
    for (; b[t] + a[s] >= k; t--);

    if (s + t > count)
      count = s+t;
  }

  printf("%lld\n", count);
  return 0;
}
