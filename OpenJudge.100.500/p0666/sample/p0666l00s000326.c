#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define REP(i, n) FOR(i, 0, n - 1, 1)
#define REP1(i, n) FOR(i, 1, n, 1)
#define RREP(i, n) RFOR(i, n - 1, 0, 1)
#define RREP1(i, n) RFOR(i, n, 1, 1)
#define FOR(i, a, b, c) for (ll i = a; i <= (ll)b; i += c)
#define RFOR(i, a, b, c) for (ll i = a; i >= (ll)b; i -= c)
#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)
#define MAX3(a, b, c) MAX(MAX(a, b), c)
#define MIN3(a, b, c) MIN(MIN(a, b), c)
#define SWAP(a, b) do { typeof(a) _t; _t = a; a = b; b = _t; } while (0)
#define SORT(a, n) qsort(a, n, sizeof(typeof(a)), ({ int _f (const void *_a, const void *_b) { return *(typeof(a) *)_a - *(typeof(a) *)_b; } _f; }))
#define RSORT(a, n) qsort(a, n, sizeof(typeof(a)), ({ int _f (const void *_a, const void *_b) { return *(typeof(a) *)_b - *(typeof(a) *)_a; } _f; }))
#define SUM(a, n) ({ typeof(*(a)) _s = 0; REP(_i, n) _s += (a)[_i]; _s; })
#define PROD(a, n) ({ typeof(*(a)) _p = 1; REP(_i, n) _p *= (a)[_i]; _p; })
#define CNT(x, a, n) ({ int _c = 0; REP(_i, n) if ((a)[_i] == x) _c++; _c; })
#define MAXI(a, n) ({ int _m = 0; REP(_i, n) if ((a)[_i] > (a)[_m]) _m = _i; _m; })
#define MAXM(a, n) a[MAXI(a, n)]
#define MINI(a, n) ({ int _m = 0; REP(_i, n) if ((a)[_i] < (a)[_m]) _m = _i; _m; })
#define MINM(a, n) a[MINI(a, n)]
#define INF 1073709056
#define LLINF 4611686016279904256LL
typedef long long ll;

int main() {
    int x, a, b;
    scanf("%d %d %d", &x, &a, &b);
    if (a >= b) puts("delicious");
    else if (b - a <= x) puts("safe");
    else puts("dangerous");
    return 0;
}