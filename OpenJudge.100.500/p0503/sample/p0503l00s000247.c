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
#define MAX 200005
#define MOD 1000000007

typedef long long int lli;

int main(void) {
  int used[MAX] = {0};
  int n;
  int a[MAX];
  scanf("%d", &n);
  rep(i, 0, n) scanf("%d", &a[i]);

  qsort(a, n, sizeof(int), acs);

  int ok = 1;
  rep(i, 0, n) {
    if (a[i] == a[i+1]) {
      ok = 0;break;
    }
  }
  printf( ok ? "YES\n" : "NO\n");
  return 0;
}
