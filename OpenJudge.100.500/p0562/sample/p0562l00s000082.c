#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) > (b) ? (b) : (a))
#define abs(x) ((x) > 0 ? (x) : -(x))
#define MOD (ll)1000000007 //10^9 + 7
#define endl printf("\n")
typedef long long ll;
#define MAX_N (1 << 17)

int
main(int argc, char *argv[])
{
  int a, b;
  scanf("%d %d", &a, &b);
  int ans = 1;
  int k = a;
  while (k < b) {
    k += a - 1;
    ans++;
  }

  if (b == 1) printf("0\n");
  else printf("%d\n", ans);

  return 0;
}
      
