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

#define rep(i,n) for(int i = 0; i < (n); ++i)
 
#define BIG_PRIME 1000000007
#define BP_remainder(x) ((x) % BIG_PRIME)

#define INF (1 << 30)
#define INF_NEG (INF * -1)
#define INF_LONG (1LL << 62)
#define INF_LONG_NEG (INF_LONG * -1L)

typedef long long ll;
typedef char str255[256];
int StrLen(char *s) { for(int ptr = 0;; ++ptr) if(!s[ptr]) return ptr; } 
// char * の後ろから n 文字削除, 削除後の文字数を返す
int StrDel(char *s, int n) { int l = StrLen(s); s[l - n + 1] = '\0'; return l - n; }

int NumDigits(int i){ char s[20]; return sprintf(s, "%d", i); }
int NumDigitsLL(long long l){ char s[30]; sprintf(s, "%lld", l); return strlen(s); }

int is1stAns = 1;
#ifdef __cplusplus
template <class T> 
void print(T t) { if (is1stAns) cout << t, is1stAns = 0; else cout << " " << t; }
#else
void printI(int    i) { if (is1stAns) printf(  "%d", i), is1stAns = 0; else printf(  " %d", i); }
void printL(ll     l) { if (is1stAns) printf("%lld", l), is1stAns = 0; else printf(" %lld", l); }
void printD(double d) { if (is1stAns) printf("%.9f", d), is1stAns = 0; else printf(" %.9f", d); }
void printC(char   c) { if (is1stAns) printf(  "%c", c), is1stAns = 0; else printf(  " %c", c); }
void printS(char  *s) { if (is1stAns) printf(  "%s", s), is1stAns = 0; else printf(  " %s", s); }
#endif

signed main()
{
#ifdef __cplusplus
    cout << fixed << setprecision(9);
#endif

    int A, B;
    scanf("%d %d", &A, &B);
    int sum = A + B;
    if (sum % 2){
        puts("IMPOSSIBLE");
    } else {
        printf("%d\n", sum / 2);
    }

    return 0;
}
