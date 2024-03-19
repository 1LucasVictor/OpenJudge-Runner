#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
int acs(const void *a, const void *b) { return *(int *)a - *(int *)b; }                            /* 1,2,3,4.. */
int des(const void *a, const void *b) { return *(int *)b - *(int *)a; }                            /* 8,7,6,5.. */
int cmp_char(const void *a, const void *b) { return *(char *)a - *(char *)b; }                     /* a,b,c,d.. */
int cmp_str(const void *a, const void *b) { return strcmp(*(const char **)a, *(const char **)b); } /* aaa,aab.. */
#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)
#define rep(i, n) for (int i = 0; i < n; i++)
#define MAX 100001
#define MOD 1000000007

typedef long long int lli;

int main(void)
{
  int a, b, t;
  scanf("%d %d %d", &a, &b, &t);

  int sets = t / a;
  int sheets = sets * b;
  printf("%d\n", sheets);
  return 0;
}
