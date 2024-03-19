#include <stdio.h>
typedef long long int lld;
typedef unsigned long long int llu;
#define MAX(x,y) (x > y ? x : y)
#define MIN(x,y) (x < y ? x : y)
#define INF (long long int)(9223372036854775807)
#define IINF (int)(2147483647)

int n, a, s[200000];

int main(void) {
  scanf("%d", &n);
  for (int i = 0; i < n - 1; i++) {
    scanf("%d", &a);
    s[a - 1]++;
  }
  for (int i = 0; i < n; i++) {
    printf("%d\n", s[i]);
  }
}