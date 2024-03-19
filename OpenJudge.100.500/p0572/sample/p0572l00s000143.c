#ifdef __cplusplus
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#else
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#endif

#define rep(i,n) for(ll i = 0; i < (n); ++i)
#define rep1(i, n) for(ll i = 1; i < (n); ++i)
#define rep4(i, start, end, step) for (ll i = (start); i < (end); i += (step))

#define BIG_PRIME 1000000007
#define BP_remainder(x) ((x) % BIG_PRIME)

#define INF (1 << 30)
#define INF_NEG (INF * -1)
#define INF_LONG (1LL << 62)
#define INF_LONG_NEG (INF_LONG * -1L)

typedef long long ll;
typedef char str255[256];
ll StrLen(char *s) { for(ll ptr = 0L;; ++ptr) if(!s[ptr]) return ptr; } 
// char * の後ろから n 文字削除, 削除後の文字数を返す
ll StrDel(char *s, int n) { ll l = StrLen(s); s[l - n + 1L] = '\0'; return l - n; }

ll NumDigits(ll l){ char s[30]; sprintf(s, "%lld", l); return StrLen(s); }

int is1stAns = 1;
void printI(int    i) { if (is1stAns) printf(  "%d", i), is1stAns = 0; else printf(  " %d", i); }
void printL(ll     l) { if (is1stAns) printf("%lld", l), is1stAns = 0; else printf(" %lld", l); }
void print (ll     l) { if (is1stAns) printf("%lld", l), is1stAns = 0; else printf(" %lld", l); }
void printD(double d) { if (is1stAns) printf("%.9f", d), is1stAns = 0; else printf(" %.9f", d); }
void printC(char   c) { if (is1stAns) printf(  "%c", c), is1stAns = 0; else printf(  " %c", c); }
void printS(char  *s) { if (is1stAns) printf(  "%s", s), is1stAns = 0; else printf(  " %s", s); }

#ifndef __cplusplus // C 版 min, max
ll min(ll a, ll b){ if (a < b) return a; else return b; }
ll max(ll a, ll b){ if (a > b) return a; else return b; }
#endif
#define chmin(a, b) func_chmin(&(a), (b))
void func_chmin(ll *a, ll b) { if (*a > b) *a = b; }
#define chmax(a, b) func_chmax(&(a), (b))
void func_chmax(ll *a, ll b) { if (*a < b) *a = b; }

// 入力用
#ifndef __cplusplus // C の配列動的確保用
#define newchar(n) (char *)malloc(sizeof(char) * (n))
#define newint(n) (int *)malloc(sizeof(int) * (n))
#define newll(n) (ll *)malloc(sizeof(ll) * (n))
#define newstr(n) (str255 *)malloc(sizeof(str255) * (n))
#endif

#define INPUT_LL(x) scanf("%lld", &x)
#define INPUT_CHAR(x) scanf("%c", &c)
#define INPUT_STRING(x) scanf("%s", x)

#define inll(x) ll x; INPUT_LL(x)
#define incc(x) char x; INPUT_CHAR(x)
#define inss(x) str255 x; INPUT_STRING(x)
#ifdef __cplusplus
#define invecll(x, n) vector<ll> x ((n)); rep(i, n) cin >> x [i]
#define inveccc(x, n) vector<char> x ((n)); rep(i, n) cin >> x [i]
#define invecss(x, n) vector<str255> x ((n)); rep(i, n) cin >> x [i]
#else
#define invecll(x, n) ll * x = newll(n); rep(i, n) INPUT_LL(x [i])
#define inveccc(x, n) char * x = newchar(n); rep(i, n) INPUT_CHAR(x [i])
#define invecss(x, n) str255 * x = newstr(n); rep(i, n) INPUT_STRING(x [i])
#endif

#define putll(x) printf("%lld\n", (x))
#define putcc(x) printf("%c\n", (x))

signed main()
{
#ifdef __cplusplus
    cout << fixed << setprecision(9);
#endif
    inll(L); inll(R);
    if ((R - L) > 2019){
        puts("0");
        return 0;
    }

    ll ans = 2020;
    rep4(i, L, R, 1){
        rep4(j, i + 1, R + 1, 1){
            ans = min(ans, (i * j) % 2019);
        }
    }

    putll(ans);

    return 0;
}
