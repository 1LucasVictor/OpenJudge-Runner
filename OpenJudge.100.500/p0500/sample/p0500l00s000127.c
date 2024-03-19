#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int acs(const void *a, const void *b) { 
  return *(int*)a - *(int*)b;
} /* 1,2,3,4.. */
int des(const void *a, const void *b) {
  return *(int*)b - *(int*)a;
} /* 8,7,6,5.. */
int cmp_char(const void *a, const void *b) { 
  return *(char*)a - *(char*)b;
} /* a,b,c,d.. */
int cmp_str(const void *a, const void *b) {
  return strcmp(*(const char **)a, *(const char **)b);
} /* aaa,aab.. */
#define min(a,b) (a < b ? a : b)
#define max(a,b) (a > b ? a : b)
#define rep(i, l, r) for (int i = l; i < r; i++)
#define MAX 100001
#define MOD 1000000007
#define INF 1000000009
typedef long long int lli;

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);

  int s[6], c[6];
  rep(i, 0, m) scanf("%d %d", &s[i], &c[i]);

  int num[4];
  rep(i, 0, 4) num[i] = -1;

  int ans = -1;
  rep(i, 0, m) {
    if (num[n-s[i]] != -1 && num[n-s[i]] != c[i]) {
      printf("-1");
      return 0;
    }
    num[n-s[i]] = c[i];
  }
  if (num[0] == -1 || num[0] == 0) {
    printf("-1");
    return 0;
  }
  rep(i, 0, n) {
    if (num[n-i-1] == -1) num[n-i-1] = 0; 
    printf("%d", num[n-i-1]);
  }

  return 0;
}
