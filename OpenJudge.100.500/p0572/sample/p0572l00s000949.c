// Ver19.03
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define INF (1 << 29) * 2
#define LLINF 4545454545454545454
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int upll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? -1 : *(ll *)a > *(ll *)b ? 1 : 0; }
int downll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? 1 : *(ll *)a > *(ll *)b ? -1 : 0; }
void sortup(ll *a, int n) { qsort(a, n, sizeof(ll), upll); }
void sortdown(ll *a, int n) { qsort(a, n, sizeof(ll), downll); }

int main()
{
  ll l, r, ans = LLINF;
  scanf("%lld%lld", &l, &r);
  if (r - l >= 2019)
  {
    printf("%d\n", 0);
    return 0;
  }
  else
  {
    for (int i = l; i <= r; i++)
    {
      for (int j = i + 1; j <= r; j++)
      {
        int a = (i * j) % 2019;
        ans = MIN(ans, a);
      }
    }
    printf("%lld\n", ans);
    return 0;
  }
}