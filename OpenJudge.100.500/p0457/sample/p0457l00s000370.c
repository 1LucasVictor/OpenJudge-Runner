#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
  int n, m;
  long long int k;
  scanf("%d %d %lld", &n, &m, &k);

  long long int a[n], b[m];
  for (int i = 0; i < n; i++) {
    scanf(" %lld", &a[i]);
  }
  for (int i = 0; i < m; i++) {
    scanf(" %lld", &b[i]);
  }

  long long int p_a = 0, p_b = 0;
  long long int time = 0;
  long long int count = 0;
  while (time <= k) {
    int flag = 0;
    if ((a[p_a] < b[p_b] && p_a < n) || p_b >= m) {
      if (time + a[p_a] <= k) {
        time += a[p_a];
        count++;
        p_a++;
      } else {
        flag = 1;
        break;
      }
    } else if (p_b < m) {
      if (time + b[p_b] <= k) {
        time += b[p_b];
        count++;
        p_b++;
      } else {
        flag = 1;
        break;
      }
    }

    if ((p_a >= n && p_b >= m) || flag) break;
  }

  printf("%lld\n", count);

  return 0;
}
