#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int choice(long long int *array, long long int *time, long long int *k, long long int *count, long long int *pointer) {
  if (*time + array[*pointer] <= *k) {
    *time += array[*pointer];
    *count += 1;
    *pointer += 1;
  } else {
    return -1;
  }
  return 0;
}

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
    if (p_a < n && p_b >= m) {
      if (choice(a, &time, &k, &count, &p_a) < 0) {
        flag = 1;
        break;
      }
    } else if (p_a >= n && p_b < m) {
      if (choice(b, &time, &k, &count, &p_b) < 0) {
        flag = 1;
        break;
      }
    } else if (a[p_a] < b[p_b] && p_a < n) {
      if (choice(a, &time, &k, &count, &p_a) < 0) {
        flag = 1;
        break;
      }
    } else if (a[p_a] > b[p_b] && p_b < m) {
      if (choice(b, &time, &k, &count, &p_b) < 0) {
        flag = 1;
        break;
      }
    } else if (a[p_a] == b[p_b] && (p_a < n && p_b < m)) {
      long long int search_a = p_a, search_b = p_b, now_a = a[p_a], now_b = b[p_b];
      while (now_a == a[search_a] && search_a < n) search_a++;
      while (now_b == b[search_b] && search_b < m) search_b++;

      if (search_a == n && search_b == m) {
        if (search_a > search_b) {
          while (p_a < search_a) {
            if (choice(a, &time, &k, &count, &p_a) < 0) {
              flag = 1;
              break;
            }
          }
        } else {
          while (p_b < search_b) {
            if (choice(b, &time, &k, &count, &p_b) < 0) {
              flag = 1;
              break;
            }
          }
        }
      } else if (a[search_a] < b[search_b]) {
        while (p_a < search_a) {
          if (choice(a, &time, &k, &count, &p_a) < 0) {
            flag = 1;
            break;
          }
        }
      } else if (b[search_b] < a[search_a]) {
        while (p_b < search_b) {
          if (choice(b, &time, &k, &count, &p_b) < 0) {
            flag = 1;
            break;
          }
        }
      } else if (b[search_b] == a[search_a]) {
        if ((search_a - p_a) < (search_b - p_b)) {
          while (p_a < search_a) {
            if (choice(a, &time, &k, &count, &p_a) < 0) {
              flag = 1;
              break;
            }
          }
        } else {
          while (p_b < search_b) {
            if (choice(b, &time, &k, &count, &p_b) < 0) {
              flag = 1;
              break;
            }
          }
        }
      }
    }

    if ((p_a >= n && p_b >= m) || flag) break;
  }

  printf("%lld\n", count);

  return 0;
}
