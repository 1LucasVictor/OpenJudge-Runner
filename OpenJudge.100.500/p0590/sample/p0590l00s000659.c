#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
int acs(const void *a, const void *b){return *(int*)a - *(int*)b;} /* 1,2,3,4.. */
int des(const void *a, const void *b){return *(int*)b - *(int*)a;} /* 8,7,6,5.. */
int cmp_char(const void *a, const void *b){return *(char*)a - *(char*)b;} /* a,b,c,d.. */
int cmp_str(const void *a, const void *b){return strcmp(*(const char **)a, *(const char **)b);} /* aaa,aab.. */
#define min(a,b) (a < b ? a: b)
#define max(a,b) (a > b ? a: b)
#define rep(i, l, r) for (int i = l; i < r; i++)
#define MAX 100001
#define MOD 1000000007

typedef long long int lli;

int main(void) {
  int Nums[5];
  int k;
  rep(i, 0, 5) {
    scanf("%d", &Nums[i]);
  }
  scanf("%d", &k);

  char yes[5] = "Yay!";
  char no[5] = ":(";
  char *ans = yes;
  rep(i, 0, 5) {
    rep(j, i, 5) {
      if (abs(Nums[i] - Nums[j]) > k) {
        ans = no;
        break;
      }
    }
  }
  printf("%s\n", ans);
  return 0;
}
